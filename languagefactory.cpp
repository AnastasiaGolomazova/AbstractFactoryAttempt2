#include "languagefactory.h"

static map<string, shared_ptr<AbstractFactory>> factmap= {
    //{"C++", make_shared<Cpp::Factory>()},
    //{"Java", make_shared<Java::Factory>()},
    //{"C#", make_shared<Cs::Factory>()}
};
shared_ptr<AbstractFactory> SelectFactory(const string & name){
    auto it = factmap.find(name);
    if (it != factmap.end())
        return it->second;
    throw 1;
}
