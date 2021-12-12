#include "factoryjava.h"
using namespace std;
namespace Java {
shared_ptr<::ClassUnit> LanguageFactoryTemplate::CreateProductClass(const string &name) const {
    return make_shared<ClassJava>(name);
}

shared_ptr<::MethodUnit> LanguageFactoryTemplate::CreateProductMethod(const string &name, const string &returnType, LanguageConst::Flags flags) const{
    return make_shared<MethodJava>(name, returnType, flags);
}
shared_ptr<::PrintUnit> LanguageFactoryTemplate::CreateProductPrint(const string &name) const{
    return make_shared<PrintJava>(name);
}
}



