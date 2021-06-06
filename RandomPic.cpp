#include <iostream>
#include <fstream>
#include <ctime>

int main()
{
    int width = 0;
    int height = 0;
    std::srand(std::time(nullptr));
    std::ofstream file("pic.txt");
    std::cout << "width: ";
    std::cin >> width;
    std::cout << "height:";
    std::cin >> height;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            int temp = rand() % 100;
            file << ((temp % 2) == 0) ? 0 : 1;
        }
        file << std::endl;
    }
    file.close();
}
