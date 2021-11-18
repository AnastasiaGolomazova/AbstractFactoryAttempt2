#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "languageconst.h"

class ClassUnit: public LanguageConst {
public:
    enum AccessModifier{
        PUBLIC,
        PROTECTED,
        PRIVATE,
        INTERNAL,
        PROTECTED_INTERNAL,
        PRIVATE_PROTECTED
    };

public:
    explicit ClassUnit(const string &name, size_t fieldsSize): name(name), fields(fieldsSize) {}

    virtual ~ClassUnit() = default;

protected:
    string name;
    using Fields = vector<shared_ptr<LanguageConst>>;
    vector<Fields> fields;
};

#endif
