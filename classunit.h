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
    explicit ClassUnit(const std::string &name, size_t fieldsSize): name(name), fields(fieldsSize) {}

    virtual ~ClassUnit() = default;

protected:
    std::string name;
    using Fields = std::vector<std::shared_ptr<LanguageConst>>;
    std::vector<Fields> fields;
};

#endif
