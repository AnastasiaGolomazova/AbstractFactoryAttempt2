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
    MethodUnit(const string &nameM, const string &returnTypeM, Flags flagsM): name(nameM), return_type(returnTypeM), flags(flagsM){}
    virtual ~MethodUnit() = default;
    void Add(const shared_ptr<LanguageConst> &languageConst, Flags /* flags */ = 0 );

protected:
    string name;
    string returnType;
    Flags flags;
    vector<shared_ptr<LanguageConst>> body;
};

#endif
