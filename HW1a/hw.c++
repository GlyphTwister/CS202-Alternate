#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using std::string;

int main(int argc, char** argv) {

    string program_name = argv[0];

    if (argc != 3) {
        std::cerr << "Usage: ./hw input.txt output.txt" << std::endl;
        return 1;
    }

    std::vector<string> arguments;
    for (int i = 0; i < argc; i += 1) {
        arguments.push_back(argv[i]);
    }
    
    double temp;
    std::ifstream file1(arguments[1]);
    std::ofstream file2(arguments[2]);

    if (!file1.is_open()) {
        std::cerr << "Error: Could not open input file " << arguments[1] << std::endl;
        return 2;
    }

    if (!file2.is_open()) {
        std::cerr << "Error: Could not open output file " << arguments[2] << std::endl;
        return 3;
    }

    while (file1 >> temp) {
        file2 << std::fixed << std::setprecision(2) << temp << "\n";
    }

    if (!file1.eof()) {
        std::cerr << "Error: Failed to read entire input file" << std::endl;
        return 4;
    }

    return 0;
}