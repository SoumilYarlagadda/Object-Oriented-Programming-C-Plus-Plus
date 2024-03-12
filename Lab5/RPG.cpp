/*RPG.cpp - Constructors

RPG(), RPG are all constructors. They create instances of the RPG object. RPG() is the default constructor,
where there are no parameters to set the private variables (e.g. name, strength, etc) to. For these values assign the respective values:

name = "NPC";
health = 100;
strength = 10;
defense = 10;
type = "warrior";
skills[0] = "slash";
skills[1] = "parry";


RPG(string name, int health, int strength, int defense, string type) is the overloaded constructor.
Assign the private variables to the parameters and also call setSkills() within this function.
Implement the constructors to your RPG.cpp*/

#include <iostream>
#include "RPG.h"
using namespace std;

RPG::RPG()
{
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}
// scope reslution
RPG::RPG(string name, int health, int strength, int defense, string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills(); // Ensure skills are set based on type
}
string RPG::getName() const
{
    return name;
}
int RPG::getHealth() const
{
    return health;
}
int RPG::getStrength() const
{
    return strength;
}
int RPG::getDefense() const
{
    return defense;
}
// setskills()
void RPG::setSkills()
{
    if (type == "mage")
    {
        skills[0] = "fire";
        skills[1] = "thunder";
    }
    else if (type == "thief")
    {
        skills[0] = "pilfer";
        skills[1] = "jab";
    }
    else if (type == "archer")
    {
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    }
    else
    {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}
void RPG::printAction(string skill, RPG opponent)
{
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}

void RPG::updateHealth(int new_health)
{
    this->health = new_health;
}
bool RPG::isAlive() const
{

    if (health > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}