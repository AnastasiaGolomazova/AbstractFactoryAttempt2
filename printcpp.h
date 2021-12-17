#ifndef PRINTCPP_H
#define PRINTCPP_H


#include "printunit.h"

class PrintCpp : public PrintUnit
{
public:
    explicit PrintCpp(const std::string &text): PrintUnit(text){}
    virtual std::string CodeGeneration(unsigned int level) const override;
};

#endif
