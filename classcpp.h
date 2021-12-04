#ifndef CLASSCPP_H
#define CLASSCPP_H
#include "classunit.h"

class ClassCpp : public ClassUnit{
public:
    static const vector<string> ACCESS_MODIFIERS;
    explicit ClassCpp(const string &name): ClassUnit(name, ACCESS_MODIFIERS.size()){}
    void Add(const shared_ptr<LanguageConst> &unit, Flags flags);
    string CodeGeneration(unsigned int level) const;
};

const vector<string> ClassCpp::ACCESS_MODIFIERS = { "public", "protected", "private" };

#endif
