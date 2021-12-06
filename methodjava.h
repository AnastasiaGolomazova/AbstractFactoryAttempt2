#ifndef METHODJAVA_H
#define METHODJAVA_H

#include "methodunit.h"

class MethodJava: public MethodUnit
{
public:
    MethodJava(const string &name, const string &returnType, Flags flags): MethodUnit(name, returnType, flags){}
    string CodeGeneration(unsigned int level) const;

};

#endif

