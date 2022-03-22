#include <iostream>
#include <string>
#include "Direction.hpp"

namespace ariel {
    class Notebook {

    public:
        void write(int page, int row, int col, Direction dir, std::string str);
        std::string read(int page, int row, int col, Direction dir, int length);
        void erase(int page, int row, int col, Direction dir, int length);
        void show(int page);
    };
}
