#ifndef METHODCSHARP_H
#define METHODCSHARP_H


#include "methodunit.h"

class MethodCsharp : public MethodUnit
{
public:
   MethodCsharp(const string &name, const string &returnType, Flags flags): MethodUnit(name, returnType, flags){}
    string CodeGeneration(unsigned int level) const;
};

#endif
