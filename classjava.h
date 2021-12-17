#ifndef CLASSJAVA_H
#define CLASSJAVA_H


#include "classunit.h"

class ClassJava : public ClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;
public:
    explicit ClassJava(const std::string &name): ClassUnit(name, ACCESS_MODIFIERS.size()){}
    void Add(const std::shared_ptr<LanguageConst> &unit, Flags flags);
    std::string CodeGeneration(unsigned int level) const;
};


#endif
