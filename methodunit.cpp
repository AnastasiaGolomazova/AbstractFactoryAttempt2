#include "methodunit.h"

void MethodUnit::Add(const std::shared_ptr<LanguageConst> &unit, Flags flags )
{
    if (unit == nullptr)
    {
        throw std::runtime_error("The unit is nullptr.");
    }

    body.push_back(unit);
}
