#ifndef CLASSCPP_H
#define CLASSCPP_H
#include "classunit.h"

class ClassCpp : public ClassUnit{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;
    explicit ClassCpp(const std::string &name): ClassUnit(name, ACCESS_MODIFIERS.size()){}
    void Add(const std::shared_ptr<LanguageConst> &unit, Flags flags);
    std::string CodeGeneration(unsigned int level) const;
};



#endif
