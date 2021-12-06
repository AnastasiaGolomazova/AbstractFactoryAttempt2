#ifndef CLASSJAVA_H
#define CLASSJAVA_H


#include "classunit.h"

class ClassJava : public ClassUnit
{
public:
    static const vector<string> ACCESS_MODIFIERS;
public:
    explicit ClassJava(const string &name): ClassUnit(name, ACCESS_MODIFIERS.size()){}
    void Add(const shared_ptr<ClassUnit> &unit, Flags flags);
    string CodeGeneration(unsigned int level) const;
};
const vector<string> ClassJava::ACCESS_MODIFIERS = { "public", "protected", "private" };

#endif
