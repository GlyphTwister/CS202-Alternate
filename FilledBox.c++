// Implementation file for FilledBox.h
#include "FilledBox.h"
#include <string>
#include <sstream>

FilledBox::FilledBox(int w, int h, char c)
: width{w}
, height{h}
, fill{c}
{

}


int FilledBox::getWidth() const {
    return this->width;
}

int FilledBox::getHeight() const {
    return this->height;
}

std::string FilledBox::asString() const {
    
    auto out = std::ostringstream();

    for (auto j = int{0}; j < height; j += 1) {

        out << "\n";

        for (auto i = int{0}; i < width; i += 1) {

            out << fill;
            
        }
    }
    return out.str();
}
