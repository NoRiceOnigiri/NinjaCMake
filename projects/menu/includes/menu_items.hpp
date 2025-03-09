#pragma once

#include "menu.hpp"

namespace Items{
    extern const Menu::MenuItem MAIN; // start

    extern const Menu::MenuItem MAIN_STUDY;
    extern const Menu::MenuItem MAIN_PLAY_FOOTBALL; // 1 level -> exit

    extern const Menu::MenuItem STUDY_PROGRAMM_LENGUAGES;
    extern const Menu::MenuItem ALGORITMS_AND_STRUCTURES;
    extern const Menu::MenuItem OTHER_TECHNOLOGIES; // 2 level -> 3 level
    extern const Menu::MenuItem BACK_TO_MAIN_MENU; // 2 level -> 1 level

    extern const Menu::MenuItem DATA_BASES;
    extern const Menu::MenuItem MULTITHREAD_PROGRAMMING;
    extern const Menu::MenuItem NETWORK_TECHNOLOGIES;
    extern const Menu::MenuItem BACK_TO_PREVIOUS_MENU; // 3 level -> 2 level
}

