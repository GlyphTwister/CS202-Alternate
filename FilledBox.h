// Header file for FilledBox class
#ifndef FILE_FILLEDBOX_H_INCLUDED
#define FILE_FILLEDBOX_H_INCLUDED
#include <string>

class FilledBox {

public:

    FilledBox(int w, int h, char c);

    int getWidth() const;
    int getHeight() const;
    std::string asString() const;

private:

    int width;
    int height;
    char fill;

}; // End of FilledBox class

#endif
