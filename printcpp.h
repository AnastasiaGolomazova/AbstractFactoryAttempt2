#ifndef PRINTCPP_H
#define PRINTCPP_H


#include "printunit.h"

class PrintCpp : public PrintUnit
{
public:
    explicit PrintCpp(const string &text): PrintUnit(text){}

    string CodeGeneration(unsigned int level) const;
};

#endif
