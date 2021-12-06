#include "printjava.h"

string PrintJava::CodeGeneration(unsigned int level = 0) const{
    return GenerateIndent(level) + "System.out.println(\"" + text + "\");\n";
}
