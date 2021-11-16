#ifndef LANGUAGECONST_H
#define LANGUAGECONST_H

#include <string>
#include <vector>
#include <memory>

using namespace std;

class LanguageConst {
public:
    using Flags = unsigned int;
    virtual ~LanguageConst() = default;
    virtual string CodeGeneration(unsigned int level = 0) const = 0;
protected:
    virtual string GenerateIndent(unsigned int level) const;
};

#endif

