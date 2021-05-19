#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{
    class GeneSplicer: public Player{
        public:
        GeneSplicer(Board& b, City c);
        Player& discover_cure(Color x) override;
    };
} 