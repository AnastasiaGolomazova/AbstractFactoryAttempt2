#ifndef FACTORYCPP_H
#define FACTORYCPP_H

#include"classcpp.h"
#include"methodcpp.h"
#include"printcpp.h"

#include "abstractfactorybase.h"

namespace Cpp {
class LanguageFactoryTemplate : public AbstractFactory{
public:
    virtual std::shared_ptr<ClassUnit> CreateProductClass(const std::string &name) const override;
    virtual std::shared_ptr<MethodUnit> CreateProductMethod(const std::string &name, const std::string &returnType, LanguageConst::Flags flags) const override;
    virtual std::shared_ptr<PrintUnit> CreateProductPrint(const std::string &name) const override;
};
}


#endif
