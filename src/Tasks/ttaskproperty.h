#ifndef TTASKPROPERTY_H
#define TTASKPROPERTY_H

#include <map>
#include <tvalue.h>

class TTaskProperty
{
public:
    TTaskProperty();
    TTaskProperty(const TTaskProperty& orig);

    bool get(const TString& name, TValue& value);
    void set(const TString& name, const TValue& value);

protected:
    typedef std::map<TString, TValue>   TValueMap;
    typedef TValueMap::iterator         iterator;

private:
    TValueMap       m_values;
};

#endif // TTASKPROPERTY_H
