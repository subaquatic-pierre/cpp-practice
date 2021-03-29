#include <vector>
#include <string>

#include "menu_item.h"

class Menu
{
public:
    Menu(std::vector<MenuItem> menu_items){};

    ~Menu(){};

private:
    std::vector<MenuItem> menu_items;
};
