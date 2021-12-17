#include "languagefactory.h"

static map<string, shared_ptr<AbstractFactory>> factmap= {
    {"C++", make_shared<Cpp::LanguageFactoryTemplate>()},
    {"Java", make_shared<Java::LanguageFactoryTemplate>()},
    {"C#", make_shared<Csharp::LanguageFactoryTemplate>()}
};
shared_ptr<AbstractFactory> SelectFactory(const string & name){
    auto it = factmap.find(name);
    if (it != factmap.end())
        return it->second;
    throw std::runtime_error("Language is not supported.");
}
