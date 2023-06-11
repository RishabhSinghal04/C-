
#include "player.h"

Player::Player()
    : Player("", "", 0, "")
{
}

Player::Player(const std::string &game)
    : Player("", "", 0, game)
{
}

Player::Player(const std::string &first_name, const std::string &last_name, const uint16_t age, const std::string &game)
    : Person(first_name, last_name, age), game{game}
{
}

// __Getter__
const std::string &Player::get_game() const
{
    return game;
}


// __Setter__
void Player::set_game(const std::string &game)
{
    this->game = game;
}
