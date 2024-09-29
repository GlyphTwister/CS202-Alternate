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
    while (file1 >> temp) {
        file2 << std::fixed << std::setprecision(2) << temp << "\n";
    }

    return 0;
}