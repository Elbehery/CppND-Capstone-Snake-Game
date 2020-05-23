#include "SDL.h"
#include <string>
#include <iostream>
#include <platform.h>

void Platform::init(){
    const char *platform = SDL_GetPlatform();
    std::string p(platform);
    _platform = p;
}

void Platform::print_platform() {
    if (_platform.empty())
        std::cout << "You Platform is Mysterious, we could not detect it !!" << _platform << std::endl;
    else
        std::cout << "Welcome to SNAKE Game. You are running on " << _platform << std::endl;
}