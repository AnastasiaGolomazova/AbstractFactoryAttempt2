#ifndef METHODCPP_H
#define METHODCPP_H

#include "methodunit.h"

class MethodCpp : public MethodUnit
{
public:
    MethodCpp(const string &name, const string &returnType, Flags flags): MethodUnit(name, returnType, flags){}
    string CodeGeneration(unsigned int level) const;
};

#endif
