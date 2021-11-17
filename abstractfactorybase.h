#ifndef ABSTRACTFACTORYBASE_H
#define ABSTRACTFACTORYBASE_H

#include <memory>
#include <map>
#include <string>

#include "classunit.h"
#include "methodunit.h"
#include "printunit.h"
#include "languageconst.h"

using namespace std;

class AbstractFactory
{
public:
    virtual ~AbstractFactory() = default;
    virtual shared_ptr<ClassUnit> CreateProductClass(const string &name) const = 0;
    virtual shared_ptr<MethodUnit> CreateProductMethod(const string &name, const string &returnType, LanguageConst::Flags flags) const = 0;
    virtual shared_ptr<PrintUnit> CreateProductPrint(const string &name) const = 0;
};

#endif
