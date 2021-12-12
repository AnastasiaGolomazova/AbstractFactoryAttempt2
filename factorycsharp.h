#ifndef FACTORYCSHARP_H
#define FACTORYCSHARP_H
#include<memory>
#include<string>
#include"classcsharp.h"
#include"methodcsharp.h"
#include"printcsharp.h"

#include "abstractfactorybase.h"

namespace Csharp {
class LanguageFactoryTemplate : public AbstractFactory{
public:
    virtual std::shared_ptr<ClassUnit> CreateProductClass(const std::string &name) const override;
    virtual std::shared_ptr<MethodUnit> CreateProductMethod(const std::string &name, const std::string &returnType, LanguageConst::Flags flags) const override;
    virtual std::shared_ptr<PrintUnit> CreateProductPrint(const std::string &name) const override;
};
}

#endif
