#ifndef TTYPES_H
#define TTYPES_H

#include <stdint.h>

/** @brief TId is idetificator of object (task, tree of tree) */
typedef uint64_t            TId;

#if defined(USE_QT)
    #include <QString>
    /** @brief TString is the type of string (UTF-8)*/
    typedef QString         TString;
#else
    #include <string>
    /** @brief TString is the type of string (UTF-8)*/
    typedef std::string     TString;
#endif
    const char* getBytes(const TString& str);

#endif // TTYPES_H

