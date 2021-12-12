#include "languageconst.h"
using namespace std;
string LanguageConst::GenerateIndent(unsigned int level) const {
    static const auto DEFAULT_INDENT = "    ";
    string result;
    for (size_t i = 0; i < level; i++){
         result += DEFAULT_INDENT;
    }
    return  result;
}
