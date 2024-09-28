#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using std::string;

int main(int argc, char** argv) {

    string program_name = argv[0];
    string input_filename = argv[1];

    if (argc != 2) {
        std::cerr << "Usage: ./hw input.txt output.txt" << std::endl;
        return 1;
    }

    std::ifstream file(input_filename);
    std::vector<string> arguments;
    auto temp;
    while (input_filename >> temp) {
        arguments.push_back(temp);
    }

    std::ofstream output_file;
    while (file >> temp) {
        output_file << std::fixed << std::setprecision(2) << temp << std::endl;
    }

    return 0;
}