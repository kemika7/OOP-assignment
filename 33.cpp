#include <iostream>

int main()
{
    int rows;
    std::cout << "Input number of rows: ";
    std::cin >> rows;

    int num = 1;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << num << " ";
            ++num;
        }
        std::cout << std::endl;
    }

    return 0;
}
