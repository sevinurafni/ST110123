// Contoh penggunaan break dan continue
#include <iostream>

int main()
{
    for (int i = 1; i <= 5; ++i)
    {
        if (i == 3)
        {
            continue;
        }
        if (i == 5)
        {
            break;
        }
        std::cout << "Iterasi ke-" << i << std::endl;
    }
}
