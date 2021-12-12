#ifndef CLASSCSHARP_H
#define CLASSCSHARP_H

#include "classunit.h"

class ClassCsharp : public ClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;

public:
    explicit ClassCsharp(const std::string &name): ClassUnit(name, ACCESS_MODIFIERS.size()){}
    void Add(const std::shared_ptr<ClassUnit> &unit, Flags flags);
    std::string CodeGeneration(unsigned int level) const;
};


#endif
