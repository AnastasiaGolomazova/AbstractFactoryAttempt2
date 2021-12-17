#include "classcsharp.h"

using namespace std;

void ClassCsharp::Add(const shared_ptr<LanguageConst> &unit, Flags flags = 0){
    if (unit == nullptr){
        throw std::runtime_error("Unit is nullptr.");
    }
    size_t access_modifier = PRIVATE;
    if (flags < fields.size()){
        access_modifier = flags;
    }
    fields[access_modifier].push_back(unit);
}
string ClassCsharp::CodeGeneration(unsigned int level = 0) const{
    string result = "class " + name + " {\n";
    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); i++){
        for (const auto &f : fields[i]){
            result += GenerateIndent(level + 1) + ACCESS_MODIFIERS[i] + " " + f->CodeGeneration(level + 1);
        }
    }
    result += GenerateIndent(level) + "};\n";
    return result;
}
const vector<string> ClassCsharp::ACCESS_MODIFIERS = { "public", "protected", "private", "internal", "protected internal", "private protected" };
