#ifndef PRINTJAVA_H
#define PRINTJAVA_H

#include "printunit.h"

class PrintJava : public PrintUnit{
public:
    explicit PrintJava(const std::string &text): PrintUnit(text){}
    virtual std::string CodeGeneration(unsigned int level) const override;
};

#endif
