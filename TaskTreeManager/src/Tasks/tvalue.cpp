#include "tvalue.h"

TValue::TValue():
    m_type(E_UNDEFINED)
{}

TValue::TValue(const TValue &orig)
{
    copy(orig);
}

TValue::~TValue()
{}

TValue& TValue::operator=(const TValue &value)
{
    copy(value);
    return *this;
}

void TValue::setValue(const int32_t &value)
{
    m_valueInt32 = value;
    m_type = E_INT32;
}

void TValue::setValue(const int64_t &value)
{
    m_valueInt64 = value;
    m_type = E_INT64;
}

void TValue::setValue(const double &value)
{
    m_valueDouble = value;
    m_type = E_DOUBLE;
}

void TValue::setValue(const TString &value)
{
    m_valueTString = value;
    m_type = E_TSTRING;
}

void TValue::setValue(const TUrl &value)
{
    m_valueTUrl = value;
    m_type = E_TURL;
}

void TValue::copy(const TValue &orig)
{
    m_type = orig.m_type;
    switch(m_type) {
        case E_INT32:
            m_valueInt32 = orig.m_valueInt32;
            break;
        case E_INT64:
            m_valueInt64 = orig.m_valueInt64;
            break;
        case E_DOUBLE:
            m_valueDouble = orig.m_valueDouble;
            break;
        case E_TSTRING:
            m_valueTString = orig.m_valueTString;
            break;
        case E_TURL:
            m_valueTUrl = orig.m_valueTUrl;
            break;
        case E_UNDEFINED:
        default:
            break;
    }
}

