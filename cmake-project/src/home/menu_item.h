#include <string>
#include <vector>

class MenuItem
{
public:
    MenuItem(){};

private:
    std::string title;
    std::vector<MenuItem> sub_menu_items;
};