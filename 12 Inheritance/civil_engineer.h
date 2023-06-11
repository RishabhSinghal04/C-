#pragma once

class Engineer;

/**
 * @brief A class to store the speciality of a Civil Engineer.
 */
class CivilEngineer : public Engineer
{
    std::string speciality{};

public:
    CivilEngineer() = default;

    // Custom Constructor
    CivilEngineer(const std::string &first_name, const std::string &last_name, const uint16_t age, const uint16_t contract_count, const std::string &speciality)
        : Engineer(first_name, last_name, age, contract_count), speciality{speciality}
    {
    }

    /* uint16_t age_CE()
    {
        CivilEngineer ce;
        return ce.Age();
        // ce.age = 10; // Compiler error when class "Engineer" has private access speifier to its base class "Person"
    } */

    uint16_t Age()
    {
        CivilEngineer civil_engineer;
        return civil_engineer.age = 31;
    }

    // __Getter__
    const std::string &get_speciality() const
    {
        return speciality;
    }

    // __Setter
    void set_speciality()
    {
        this->speciality = speciality;
    }
};