#ifndef ABSTRACTFACTORYBASE_H
#define ABSTRACTFACTORYBASE_H

#include <memory>
#include <map>
#include <string>

#include "classunit.h"
#include "methodunit.h"
#include "printunit.h"
#include "languageconst.h"

class AbstractFactory
{
public:
    virtual ~AbstractFactory() = default;
    virtual std::shared_ptr<ClassUnit> CreateProductClass(const std::string &name) const = 0;
    virtual std::shared_ptr<MethodUnit> CreateProductMethod(const std::string &name, const std::string &returnType, LanguageConst::Flags flags) const = 0;
    virtual std::shared_ptr<PrintUnit> CreateProductPrint(const std::string &name) const = 0;
};

#endif
