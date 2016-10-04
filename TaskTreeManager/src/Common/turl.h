#ifndef TURL_H
#define TURL_H

#include <ttypes.h>

class TUrl
{
public:
    TUrl();
    TUrl(const char* url);
    TUrl(TString url);
    TUrl(const TUrl& orig);

    TString getUrl() const { return m_url; }
    bool setUrl(TString url);

    TString getScheme() const { return m_scheme; }
    TString getHost() const { return m_host; }
    int getPort() const { return m_port; }
    TString getPath() const { return m_path; }
    TString getQuery() const { return m_query; }

    TUrl& operator=(const TUrl& url);
    bool operator==(const TUrl& url) const { return url.m_url == m_url; }
    bool operator==(const TString& url) const { return url == m_url; }

    bool isValid() const { return m_valid; }

protected:
    void parse(const TString& url);

private:
    TString     m_url;
    bool        m_valid;

    TString     m_scheme;
    TString     m_host;
    int         m_port;
    TString     m_path;
    TString     m_query;
};

#endif // TURL_H
