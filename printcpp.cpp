#include "printcpp.h"

string PrintCpp::CodeGeneration(unsigned int level = 0) const{
    return GenerateIndent(level) + "std::cout << \"" + text + "\" << std::endl;\n";
}
