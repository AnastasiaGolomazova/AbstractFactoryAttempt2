#ifndef LANGUAGECONST_H
#define LANGUAGECONST_H

#include <string>
#include <vector>
#include <memory>

class LanguageConst {
public:
    using Flags = unsigned int;
    virtual ~LanguageConst() = default;
    virtual void Add(const std::shared_ptr<LanguageConst>& languageconst, Flags flags);

    virtual std::string CodeGeneration(unsigned int level = 0) const = 0;
protected:
    virtual std::string GenerateIndent(unsigned int level) const;
};

#endif

