#ifndef PRINTCSHARP_H
#define PRINTCSHARP_H

#include "printunit.h"

class PrintCsharp : public PrintUnit
{
public:
    explicit PrintCsharp(const string &text): PrintUnit(text){}

    string CodeGeneration(unsigned int level) const;
};

#endif
