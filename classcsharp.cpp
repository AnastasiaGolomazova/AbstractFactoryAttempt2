#include "classcsharp.h"

void ClassCsharp::Add(const shared_ptr<ClassUnit> &unit, Flags flags = 0){
    if (unit == nullptr){
        throw 1;
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
