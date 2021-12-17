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

void LanguageConst:: Add(const std::shared_ptr<LanguageConst> & languageconst, Flags flags)
{
    throw std::runtime_error("This type of unit doesn't support the Add method.");
}
