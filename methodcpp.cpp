#include "methodcpp.h"
using namespace std;
string MethodCpp::CodeGeneration(unsigned int level = 0) const{
    string result = GenerateIndent(level);
    if (flags & STATIC){
        result += "static ";
    }else if (flags & VIRTUAL) {
        result += "virtual ";
    }
    result += returnType + " ";
    result += name + "()";
    if (flags & CONST) {
        result += " const";
    }
    result += " {\n";
    for (const auto &b : body) {
        result += b->CodeGeneration(level + 1);
    }
    result += GenerateIndent(level) + "}\n";
    return result;
}
