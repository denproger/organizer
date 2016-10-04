#include "ttaskproperty.h"

TTaskProperty::TTaskProperty()
{

}

TTaskProperty::TTaskProperty(const TTaskProperty &orig)
{
    m_values = orig.m_values;
}

bool TTaskProperty::get(const TString &name, TValue &value)
{
    iterator it = m_values.find(name);
    if( it != m_values.end() ) {
        value = it->second;
        return true;
    }

    value = TValue();
    return false;
}

