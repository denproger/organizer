#ifndef TVALUE_H
#define TVALUE_H

#include <ttypes.h>
#include <turl.h>

class TValue
{
public:
    enum TValueType {
        E_UNDEFINED = 0,
        E_INT32,
        E_INT64,
        E_DOUBLE,
        E_TSTRING,
        E_TURL
    };

public:
    TValue();
    TValue(const TValue& orig );
    ~TValue();

    TValue& operator=(const TValue& value);

    TValueType getType() const { return m_type; }

    int32_t toInt32() const { return m_valueInt32; }
    int64_t toInt64() const { return m_valueInt64; }
    double toDouble() const { return m_valueDouble; }
    TString toTString() const { return m_valueTString; }
    TUrl toTUrl() const { return m_valueTUrl; }

    void setValue(const int32_t &value);
    void setValue(const int64_t &value);
    void setValue(const double &value);
    void setValue(const TString &value);
    void setValue(const TUrl &value);

protected:
    void copy(const TValue& orig);

private:
    TValueType  m_type;
    union {
        int32_t     m_valueInt32;
        int64_t     m_valueInt64;
        double      m_valueDouble;
        TString     m_valueTString;
        TUrl        m_valueTUrl;
    };
};

#endif // TVALUE_H
