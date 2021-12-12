#include "factorycpp.h"
using namespace std;
namespace Cpp {
shared_ptr<::ClassUnit> LanguageFactoryTemplate::CreateProductClass(const string &name) const {
    return make_shared<ClassCpp>(name);
}

shared_ptr<::MethodUnit> LanguageFactoryTemplate::CreateProductMethod(const string &name, const string &returnType, LanguageConst::Flags flags) const{
    return make_shared<MethodCpp>(name, returnType, flags);
}
shared_ptr<::PrintUnit> LanguageFactoryTemplate::CreateProductPrint(const string &name) const{
    return make_shared<PrintCpp>(name);
}
}

