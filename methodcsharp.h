#ifndef METHODCSHARP_H
#define METHODCSHARP_H


#include "methodunit.h"

class MethodCsharp : public MethodUnit
{
public:
   MethodCsharp(const std::string &name, const std::string &returnType, Flags flags): MethodUnit(name, returnType, flags){}
    std::string CodeGeneration(unsigned int level) const;
};

#endif
