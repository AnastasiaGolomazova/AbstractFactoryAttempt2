#include "factorycsharp.h"
using namespace std;
namespace Csharp {
shared_ptr<::ClassUnit> LanguageFactoryTemplate::CreateProductClass(const string &name) const {
    return make_shared<ClassCsharp>(name);
}

shared_ptr<::MethodUnit> LanguageFactoryTemplate::CreateProductMethod(const string &name, const string &returnType, LanguageConst::Flags flags) const{
    return make_shared<MethodCsharp>(name, returnType, flags);
}
shared_ptr<::PrintUnit> LanguageFactoryTemplate::CreateProductPrint(const string &name) const{
    return make_shared<PrintCsharp>(name);
}
}

