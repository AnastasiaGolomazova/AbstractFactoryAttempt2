#ifndef PRINTUNIT_H
#define PRINTUNIT_H

#include "languageconst.h"

class PrintUnit : public LanguageConst
{
public:
    explicit PrintUnit(const std::string &textM): text(textM){}
    virtual ~PrintUnit() = default;
protected:
    std::string text;
};

#endif
