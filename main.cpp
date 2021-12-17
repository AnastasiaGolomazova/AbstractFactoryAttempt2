#include <iostream>

#include "languagefactory.h"


std::string GenerateProgram (const std::shared_ptr<AbstractFactory> &factory)
{
    auto class1 = factory->CreateProductClass("Class1");
    auto class2 = factory->CreateProductClass("Class2");
    class1->Add(class2, ClassUnit::PUBLIC);
    class2->Add(factory->CreateProductMethod("Function1", "void", MethodUnit::STATIC), ClassUnit::PRIVATE);
    auto method = factory->CreateProductMethod("Function1", "void", MethodUnit::STATIC);
    method->Add(factory->CreateProductPrint("Hello, world!"));
    class1->Add(method, ClassUnit::PROTECTED);
    class1->Add(factory->CreateProductMethod("Function4", "void", MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PUBLIC);
    return class1->CodeGeneration();
}

int main(int argc, char *argv[])
{
    for (const auto lang: {"C++","C#","Java","Python"})
    {
        std::cout << lang << ":" << std::endl;
        try
        {
            std::cout << GenerateProgram(SelectFactory(lang)) << std::endl;
        }
        catch (const std::runtime_error &error)
        {
            std::cout << error.what() << std::endl;
        }
    }

    return 0;
}
