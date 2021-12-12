#ifndef METHODCPP_H
#define METHODCPP_H

#include "methodunit.h"

class MethodCpp : public MethodUnit
{
public:
    MethodCpp(const std::string &name, const std::string &returnType, Flags flags): MethodUnit(name, returnType, flags){}
    std::string CodeGeneration(unsigned int level) const;
};

#endif
