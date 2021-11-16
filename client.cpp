#include "client.h"


Client::Client(shared_ptr<AbstractFactory>factory, string className)
{
    this->factory = factory;
    addClass(className);
}

void Client::addClass(string name){
    myclass = factory->createClass(name);
}

void Client::setModifierToClass(string modifier){
    if(myclass){
        myclass->add_modifier(modifier);
    }
}

void Client::addModifierToMethod(string ID, string modifier){
    if(myclass){
        myclass->add_method_modifier(ID, modifier);
    }
}

string Client::addMethod(string name, string return_type){
    return myclass->add(factory->createMethod(name, return_type));
}

string Client::compile(){
    return this->myclass->compile();
}
