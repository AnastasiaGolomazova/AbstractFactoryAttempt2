#ifndef FACTORYJAVA_H
#define FACTORYJAVA_H

#include"classjava.h"
#include"methodjava.h"
#include"printjava.h"

#include "abstractfactorybase.h"

namespace Java {
class LanguageFactoryTemplate : public AbstractFactory{
public:
    virtual std::shared_ptr<ClassUnit> CreateProductClass(const std::string &name) const override;
    virtual std::shared_ptr<MethodUnit> CreateProductMethod(const std::string &name, const std::string &returnType, LanguageConst::Flags flags) const override;
    virtual std::shared_ptr<PrintUnit> CreateProductPrint(const std::string &name) const override;
};
}

#endif
