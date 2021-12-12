#include "classcpp.h"

using namespace std;

void ClassCpp::Add(const shared_ptr<LanguageConst> &unit, Flags flags){
    if (unit == nullptr){
        throw 1;
    }
    size_t access_modifier = PRIVATE;
    if (flags < fields.size()){
    access_modifier = flags;
    }
    fields[access_modifier].push_back(unit);
}

string ClassCpp::CodeGeneration(unsigned int level = 0) const{
    string result = GenerateIndent(level) + "class " + name + " {\n";
    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); i++){
        if (fields[i].empty()){
            continue;
        }
        result += GenerateIndent(level) + ACCESS_MODIFIERS[i] + ":\n";
        for (const auto &f : fields[i]){
            result += f->CodeGeneration(level + 1);
        }
        result += "\n";
    }
    result += GenerateIndent(level) + "};\n";
    return result;
}

const vector<string> ClassCpp::ACCESS_MODIFIERS = { "public", "protected", "private" };
