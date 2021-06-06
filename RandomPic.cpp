#include <iostream>
#include <fstream>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));
    std::ofstream file("pic.txt");

    file.close();
}
