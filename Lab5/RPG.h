#include <iostream>
#ifndef RPG_H
#define RPG_H
using namespace std;

const int SKILL_SIZE = 2;

class RPG
{
private:
    string name;
    int health;
    int strength;
    int defense;
    string type; // warrior, archer, mage, thief
    // setSkills();
    string skills[SKILL_SIZE];

public:
    // constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);
    void setSkills();
    void printAction(string, RPG);
    void updateHealth(int new_health);
    // void attack(RPG *);
    // void useSkill(RPG *);
    bool isAlive() const;
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;
};
#endif