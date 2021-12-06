#ifndef CLASSCSHARP_H
#define CLASSCSHARP_H

#include "classunit.h"

class ClassCsharp : public ClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;

public:
    explicit ClassCsharp(const string &name): ClassUnit(name, ACCESS_MODIFIERS.size()){}
    void Add(const shared_ptr<ClassUnit> &unit, Flags flags);
    string CodeGeneration(unsigned int level) const;
};
const vector<string> ClassCsharp::ACCESS_MODIFIERS = { "public", "protected", "private", "internal", "protected internal", "private protected" };

#endif
