#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

// Special functions
const Menu::MenuItem* Functions::print_options(const Menu::MenuItem* current) {
    std::cout << "--- Обучайка ---" << std::endl;

    for (int i = 1; i < current->options_count; i++)
        std::cout << current->options[i]->title << std::endl;
    std::cout << current->options[0]->title << std::endl;

    int answer;
    do {
        std::cout << "Введите ответ: ";
        std::cin >> answer;
    } while (answer < 0 || answer >= current->options_count);

    std::cout << std::endl;
    return current->options[answer];
}

// Movement functions (BACKWARD/EXIT)
const Menu::MenuItem* Functions::main_play_football(const Menu::MenuItem* current) { 
    std::exit(0);
}
const Menu::MenuItem* Functions::go_back(const Menu::MenuItem* current) {
    return current->parent->parent;
}

// LEVEL 2 functions (without movement functions)
const Menu::MenuItem* Functions::study_programm_lenguages(const Menu::MenuItem* current){
    std::cout << "Учимся ... поучились." << std::endl;

    std::cout << std::endl;
    return current->parent;
}
const Menu::MenuItem* Functions::algoritms_and_structures(const Menu::MenuItem* current){
    std::cout << "Алгоритмируем... поструктурировали." << std::endl;
    
    std::cout << std::endl;
    return current->parent;
}

// LEVEL 3 functions (without movement functions)
const Menu::MenuItem* Functions::data_bases(const Menu::MenuItem* current){
    std::cout << "Даннируем... побазировали." << std::endl;

    std::cout << std::endl;
    return current->parent;
}
const Menu::MenuItem* Functions::multithread_programming(const Menu::MenuItem* current){
    std::cout << "Вот и помультипоточили..." << std::endl;

    std::cout << std::endl;
    return current->parent;
}
const Menu::MenuItem* Functions::network_technologies(const Menu::MenuItem* current){
    std::cout << ".. нетворгируем... пожалуй, хватит." << std::endl;

    std::cout << std::endl;
    return current->parent;
}