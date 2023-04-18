#include <iostream>

#ifndef MUSIC
#define MUSIC

class music
{
    private:
    std::string title;
    std::string creator;
    public:
    void music(std::string title, std::string creator);
    void set_title(std::string title);
    void set_creator(std::string creator);
    std::string get_title();
    std::string get_creator();
};

#endif