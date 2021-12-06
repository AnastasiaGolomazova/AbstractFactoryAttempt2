#ifndef PRINTJAVA_H
#define PRINTJAVA_H

#include "printunit.h"

class PrintJava : public PrintUnit{
public:
    explicit PrintJava(const string &text): PrintUnit(text){}
    string CodeGeneration(unsigned int level) const;
};

#endif
