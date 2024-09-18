/*
    Vicencio, Ethan
*/

#include "Game.h"

#include <iostream>


std::string Game::getTitle() const {
    return title;
}

std::string Game::getConsole() const {
    return console;
}

int Game::getYear() const {
    return year;
}

void Game::setTitle(const std::string& newTitle) {
    title = newTitle;
}

void Game::setConsole(const std::string& newConsole) {
    console = newConsole;
}

void Game::setYear(int newYear) {
    year = newYear;
}

void Game::printDetails() const{
    std::cout << "Title: " << title
        << "\nConsole: " << console
        << "\nYear: " << year << std::endl;
}