
class LanguageFactoryTemplate : public AbstractFactory{
public:
    std::shared_ptr<::ClassUnit> CreateClass(const std::string &name) const;
    std::shared_ptr<::MethodUnit> CreateMethod(const std::string &name, const std::string &returnType, LanguageConst::Flags flags) const;
    std::shared_ptr<::PrintUnit> CreatePrint(const std::string &name) const;
};
