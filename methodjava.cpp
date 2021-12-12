#include "methodjava.h"
using namespace std;
string MethodJava::CodeGeneration(unsigned int level = 0) const{
    string result = "";
    if (flags & STATIC){
        result += "static ";
    }
    if (flags & FINAL){
        result += "final ";
    }
    result += returnType + " ";
    result += name + "() {\n";
    for (const auto &b : body){
        result += b->CodeGeneration(level + 1);
    }
    result += GenerateIndent(level) + "}\n";
    return result;
}
