#ifndef PRINTCSHARP_H
#define PRINTCSHARP_H

#include "printunit.h"

class PrintCsharp : public PrintUnit
{
public:
    explicit PrintCsharp(const std::string &text): PrintUnit(text){}
    virtual std::string CodeGeneration(unsigned int level) const override;
};

#endif
