#pragma once

namespace Menu {
    struct MenuItem
    {
        const char* const title;
        const Menu::MenuItem* (*func)(const MenuItem* current);

        const Menu::MenuItem* const parent;

        const MenuItem* const *options;
        const int options_count;
    };
}