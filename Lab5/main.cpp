#include <iostream>
#include "RPG.h"
using namespace std;

int main() {
    RPG wiz = RPG("Wiz", 70, 45, 15, "mage");
    RPG npc = RPG("NPC", 100, 10, 10, "warrior");

    printf("%s Current Status\n", wiz.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", wiz.getHealth(), wiz.getStrength(), wiz.getDefense());

    printf("%s Current Status\n", npc.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", npc.getHealth(), npc.getStrength(), npc.getDefense());

    printf("\nHealth After Update:\n");
    wiz.updateHealth(0);
    cout << "Health for Wiz: " << wiz.getHealth() << endl;

    npc.updateHealth(0);
    cout << "Health for NPC: " << npc.getHealth() << endl;

    cout << "\nPlayers Alive Status: " << endl;
    cout << wiz.isAlive() << endl;
    cout << npc.isAlive() << endl;
    return 0;
}
