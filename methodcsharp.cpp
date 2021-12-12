#include "methodcsharp.h"
using namespace std;
string MethodCsharp::CodeGeneration(unsigned int level = 0) const{
    string result = "";
    if (flags & STATIC){
        result += "static ";
    } else if (flags & VIRTUAL){
        result += "virtual ";
    }
    result += returnType + " ";
    result += name + "() {\n";
    for (const auto &b : body){
        result += b->CodeGeneration(level + 1);
    }
    result += GenerateIndent(level) + "}\n";
    return result;
}
