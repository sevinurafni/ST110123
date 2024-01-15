#include <iostream>

int main()
{
    const int ukuranArray = 5;
    int arrayContoh[ukuranArray] = {10, 20, 30, 40, 50};

    // Mengakses dan menampilkan elemen array
    for (int i = 0; i < ukuranArray; ++i)
    {
        std::cout << "Elemen ke-" << i << ": " << arrayContoh[i] << std::endl;
    }

    return 0;
}
