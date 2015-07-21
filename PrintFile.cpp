#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::vector<std::string> v;
    std::ifstream in("PrintFile.cpp");
    std::string line;

    while (std::getline(in, line))
        v.push_back(line);

    for (int i = 0; i < v.size(); i++)
        std::cout << i << ": " << v[i] << std::endl;
}
