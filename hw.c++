#include "FilledBox.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {

    //std::cout << "Please enter a width, height, and fill character" << std::endl;
    
    if (argc != 4) {
        std::cerr << "Usage:\t" << argv[0] << " width height fill\n";
        return -1;
    }

    auto width = std::atoi(argv[1]);
    auto height = std::atoi(argv[2]);
    auto fill = argv[3][0];

    auto filledBox = FilledBox{width, height, fill};

    std::cout << filledBox.asString() << "\n";

    return 0;
}