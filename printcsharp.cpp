#include "printcsharp.h"
using namespace std;
string PrintCsharp::CodeGeneration(unsigned int level = 0) const{
    return GenerateIndent(level) + "Console.WriteLine(\"" + text + "\");\n";
}
