#ifndef PRINTUNIT_H
#define PRINTUNIT_H

#include "languageconst.h"

class PrintUnit : public LanguageConst
{
public:
    explicit PrintUnit(const string &textM): text(textM){}
    virtual ~PrintUnit() = default;
protected:
    string text;
};

#endif
