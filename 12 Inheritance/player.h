#pragma once

#include "person.h"

/**
 * @brief A class to store the name of game which a person play.
 */
class Player : public Person
{
    std::string game{};

public:
    Player();
    Player(const std::string &);

    // Custom Constructor
    Player(const std::string &, const std::string &, const uint16_t, const std::string &);

    const std::string &get_game() const;

    void set_game(const std::string &);
};