#include "turl.h"
#include <string>
#include <algorithm>


TUrl::TUrl():
    m_valid(false)
{}

TUrl::TUrl(const char *url):
    TUrl(TString(url))
{}

TUrl::TUrl(TString url):
    m_url(url), m_valid(false)
{
    parse(m_url);
}

TUrl::TUrl(const TUrl &orig)
{
    m_url = orig.m_url;
    m_valid = orig.m_valid;
    m_scheme = orig.m_scheme;
    m_host = orig.m_host;
    m_port = orig.m_port;
    m_path = orig.m_path;
    m_query = orig.m_query;
}

TUrl& TUrl::operator=(const TUrl &url)
{
    m_url = url.m_url;
    m_valid = url.m_valid;
    m_scheme = url.m_scheme;
    m_host = url.m_host;
    m_port = url.m_port;
    m_path = url.m_path;
    m_query = url.m_query;
    return *this;
}

#if defined(USE_QT)
    #include <QUrl>
#endif
void TUrl::parse(const TString &url)
{
#if defined(USE_QT)
    QUrl urlPrivate(url);
    m_valid = urlPrivate.isValid();
    if( m_valid ) {
        m_scheme = urlPrivate.scheme();
        m_host = urlPrivate.host();
        m_port = urlPrivate.port();
        m_path = urlPrivate.path();
        m_query = urlPrivate.query();
    }
    else {
        m_scheme.clear();
        m_host.clear();
        m_port = 0;
        m_path.clear();
        m_query.clear();
    }
#else
    const std::string protEnd("://");
    std::string::const_iterator it = std::search(url.begin(), url.end(),
                                                 protEnd.begin(), protEnd.end());
    m_scheme.reserve(std::distance(url.begin(), it));
//    std::transform(url.begin(), it,
//                  back_inserter(protocol_),
//                  ptr_fun<int,int>(tolower)); // protocol is icase
//        if( it == url_s.end() )
//            return;
//        advance(it, protEnd.length());
//        string::const_iterator path_i = find(it, url_s.end(), '/');
//        host_.reserve(distance(it, path_i));
//        transform(it, path_i,
//                  back_inserter(host_),
//                  ptr_fun<int,int>(tolower)); // host is icase
//        string::const_iterator query_i = find(path_i, url_s.end(), '?');
//        path_.assign(path_i, query_i);
//        if( query_i != url_s.end() )
//            ++query_i;
//        query_.assign(query_i, url_s.end());
#endif
}
