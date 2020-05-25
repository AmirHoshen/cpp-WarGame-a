#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

#define S_HP 100
#define S_DPA 50

class Sniper : public Soldier
{
public:
    Sniper(int team) : Soldier(S_HP, S_DPA, team, false){};
    ~Sniper(){};

    void specialAttack(std::vector<std::vector<Soldier *>> &board, std::pair<int, int> source) override
    {

        std::cout << "--->Sniper Attack<--- " << std::endl;
        attack(board, source);
    }
    void heal() override
    {
        _hp = S_HP;
    }
};
