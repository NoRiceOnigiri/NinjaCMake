#include <iostream>

#include "menu_items.hpp"
#include "menu_functions.hpp"

namespace {
    const Menu::MenuItem* const main_options[] = // main (level 1) options
    {
        &Items::MAIN_PLAY_FOOTBALL,
        &Items::MAIN_STUDY
    };
    const int main_options_count = sizeof(main_options)/sizeof(main_options[0]);

    const Menu::MenuItem* const study_options[] = // level 2 options
    {
        &Items::BACK_TO_MAIN_MENU,
        &Items::STUDY_PROGRAMM_LENGUAGES,
        &Items::ALGORITMS_AND_STRUCTURES,
        &Items::OTHER_TECHNOLOGIES
    };
    const int study_options_count = sizeof(study_options)/sizeof(study_options[0]);

    const Menu::MenuItem* const other_tech_options[] =  // level 3 options
    {
        &Items::BACK_TO_PREVIOUS_MENU,
        &Items::DATA_BASES,
        &Items::MULTITHREAD_PROGRAMMING,
        &Items::NETWORK_TECHNOLOGIES
    };
    const int other_tech_options_count = sizeof(other_tech_options)/sizeof(other_tech_options[0]);
};

const Menu::MenuItem Items::MAIN = // start point
 {nullptr, Functions::print_options, nullptr, main_options, main_options_count};

const Menu::MenuItem Items::MAIN_STUDY = // 1 level -> 2 level
 {"1. Изучать программирование.", Functions::print_options, &Items::MAIN, study_options, study_options_count};
const Menu::MenuItem Items::MAIN_PLAY_FOOTBALL = // exit
 {"0. Пойти играть в футбол.", Functions::main_play_football, &Items::MAIN};

const Menu::MenuItem Items::STUDY_PROGRAMM_LENGUAGES =
 {"1. Изучать языки программирования.", Functions::study_programm_lenguages, &Items::MAIN_STUDY};
const Menu::MenuItem Items::ALGORITMS_AND_STRUCTURES =
 {"2. Алгоритмы и структуры", Functions::algoritms_and_structures, &Items::MAIN_STUDY};
const Menu::MenuItem Items::OTHER_TECHNOLOGIES = // 2 level -> 3 level
 {"3. Другие технологии.", Functions::print_options, &Items::MAIN_STUDY, other_tech_options, other_tech_options_count}; // 2 level -> 3 level
const Menu::MenuItem Items::BACK_TO_MAIN_MENU = // 2 level -> 1 level
 {"0. Выйти в главное меню.", Functions::go_back, &Items::MAIN_STUDY}; 

const Menu::MenuItem Items::DATA_BASES =
 {"1. Базы данных.", Functions::data_bases, &Items::OTHER_TECHNOLOGIES};
const Menu::MenuItem Items::MULTITHREAD_PROGRAMMING =
 {"2. Мультипоточное программирование.", Functions::multithread_programming, &Items::OTHER_TECHNOLOGIES};
const Menu::MenuItem Items::NETWORK_TECHNOLOGIES =
 {"3. Сетевые технологии.", Functions::network_technologies, &Items::OTHER_TECHNOLOGIES};
const Menu::MenuItem Items::BACK_TO_PREVIOUS_MENU = // 3 level -> 2 level
 {"0. Выйти в предыдущее меню.", Functions::go_back, &Items::OTHER_TECHNOLOGIES}; 