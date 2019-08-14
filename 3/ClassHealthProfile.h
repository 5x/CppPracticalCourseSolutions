#include <string>


class HealthProfile {
public:
    HealthProfile(std::string, std::string, std::string, std::string, std::string);
    void setData(std::string, std::string, std::string, std::string, std::string);
    std::string getData();
    int Age(std::string);
    void DisplayData();
private:
    std::string Name, Gender, BirthDay, Height, Weight;
};
