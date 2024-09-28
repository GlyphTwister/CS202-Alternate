#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using std::string;

int main(int argc, char** argv) {

    string program_name = argv[0];
    string input_filename = argv[1];

    if (argc < 2) {
        std::cerr << "Error: No program name given." << std::endl;
        return 1;
    } 

    std::ifstream file(input_filename);
    double temp;
    while (file >> temp) {
        std::cout << std::fixed << std::setprecision(2) << temp << std::endl;
    }

    return 0;
}