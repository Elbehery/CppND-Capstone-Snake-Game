#ifndef PLATFORM_H
#define PLATFORM_H

#include "SDL.h"
#include <string>
#include <iostream>

class Platform {
    public:
        Platform(){init();};
        Platform(std::string platform) : _platform(platform){};
        void print_platform();
    private:
        void init(); 
        std::string _platform;   
};
#endif

