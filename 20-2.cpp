
#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>

int main() {

    std::srand(std::time(nullptr));

    std::ofstream pr("print.txt", std::ios::trunc);

    if (pr.is_open()) {

        int row = 3;
        int col = 4;

        std::cout << "enter the number of lines: ";
        std::cin >> row;
        std::cout << "enter the number of columns: ";
        std::cin >> col;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                pr << (rand() % 2) << " ";
            }
            pr << "\n";
        }

    }

    pr.close();

}

