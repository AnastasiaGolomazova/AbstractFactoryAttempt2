#ifndef METHODJAVA_H
#define METHODJAVA_H

#include "methodunit.h"

class MethodJava: public MethodUnit
{
public:
    MethodJava(const std::string &name, const std::string &returnType, Flags flags): MethodUnit(name, returnType, flags){}
    std::string CodeGeneration(unsigned int level) const;

};

#endif

