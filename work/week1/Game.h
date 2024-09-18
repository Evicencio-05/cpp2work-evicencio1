/*
    Vicencio, Ethan
*/

#ifndef GAME_H
#define GAME_H

#include <string>

class Game 
{
    public:
        Game() : year(0) {}
        Game(const std::string& newTitle, const std::string& newConsole, int newYear) :
            title(newTitle), console(newConsole), year(newYear) {}
            
        std::string getTitle() const;
        std::string getConsole() const;
        int getYear() const;
        
        void setTitle(const std::string& newTitle);
        void setConsole(const std::string& newConsole);
        void setYear(int newYear);

        void printDetails() const;
        
    private:
        std::string title;
        std::string console;
        int year;
};

#endif
