/*
    Vicencio, Ethan
*/

#include "Game.cpp"

int main() {
    Game mario("Super Mario Brothers", "NES", 1985),
        zelda("The Legend of Zelda", "NES", 1987);

    std::cout << mario.getTitle() << " " << mario.getConsole()
        << " " << mario.getYear() << std::endl;

    zelda.printDetails();

    const Game SONIC("Sonic the Hedgehog", "Sega Genesis", 1986);
}