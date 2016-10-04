#include "tabstractsource.h"
#include <ttasknode.h>

TAbstractSource::TAbstractSource(TString alias) :
    m_alias(alias), m_initialized(false)
{}

TAbstractSource::~TAbstractSource()
{}

