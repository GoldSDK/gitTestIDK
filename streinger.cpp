#include <iostream>
#include <string>
int main() {
    std::string userinput;

    std::cout << "enter string" << std::endl;
    std::getline(std::cin, userinput);

    for (int i = 0; i < userinput.length(); i++) {
        std::cout << userinput[i] << std::endl;
    }

    return 0;
}