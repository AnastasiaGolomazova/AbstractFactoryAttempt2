#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "languageconst.h"

class MethodUnit : public LanguageConst {
public:
    enum Modifier{
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3
    };

public:
    MethodUnit(const std::string &nameM, const std::string &returnTypeM, Flags flagsM): name(nameM), returnType(returnTypeM), flags(flagsM){}
    virtual ~MethodUnit() = default;
    virtual void Add(const std::shared_ptr<LanguageConst> &languageconst, Flags /* flags */ = 0 ) override;

protected:
    std::string name;
    std::string returnType;
    Flags flags;
    std::vector<std::shared_ptr<LanguageConst>> body;
};

#endif
