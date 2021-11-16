#ifndef ABSTRACTFACTORYBASE_H
#define ABSTRACTFACTORYBASE_H

#include <memory>
#include <map>
#include <string>

#include "productclass.h"
#include "productmethod.h"
#include "productprint.h"
#include "languageconst.h"

using namespace std;

class AbstractFactory
{
public:
    virtual ~AbstractFactory() = default;
    virtual shared_ptr<ProductClass> CreateProductClass(const string &name) const = 0;
    virtual shared_ptr<ProductMethod> CreateProductMethod(const string &name, const string &returnType, LanguageConst::Flags flags) const = 0;
    virtual shared_ptr<ProductPrint> CreateProductPrint(const string &name) const = 0;
};

#endif
