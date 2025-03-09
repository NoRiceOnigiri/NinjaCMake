#pragma once

namespace Functions {
    // Special functions
    const Menu::MenuItem* print_options(const Menu::MenuItem* current); // print
    // Movement functions (BACKWARD/EXIT)
    const Menu::MenuItem* main_play_football(const Menu::MenuItem* current); // 1 level -> exit
    const Menu::MenuItem* go_back(const Menu::MenuItem* current); // [N] level -> [N-1] level
    // LEVEL 2 functions
    const Menu::MenuItem* study_programm_lenguages(const Menu::MenuItem* current);
    const Menu::MenuItem* algoritms_and_structures(const Menu::MenuItem* current);
    // LEVEL 3 functions
    const Menu::MenuItem* data_bases(const Menu::MenuItem* current);
    const Menu::MenuItem* multithread_programming(const Menu::MenuItem* current);
    const Menu::MenuItem* network_technologies(const Menu::MenuItem* current);
}