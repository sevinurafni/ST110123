#include <iostream>

int main()
{
    const int ukuranAwal = 5;
    int arrayAwal[ukuranAwal] = {1, 2, 3, 4, 5};

    // Menampilkan array awal
    std::cout << "Array Awal: ";
    for (int i = 0; i < ukuranAwal; ++i)
    {
        std::cout << arrayAwal[i] << " ";
    }
    std::cout << std::endl;

    // Menambahkan elemen baru
    const int ukuranBaru = ukuranAwal + 1;
    int arrayBaru[ukuranBaru];

    // Menyalin elemen-elemen array awal ke array baru
    for (int i = 0; i < ukuranAwal; ++i)
    {
        arrayBaru[i] = arrayAwal[i];
    }

    // Menambahkan elemen baru
    arrayBaru[ukuranBaru - 1] = 6;

    // Menampilkan array baru
    std::cout << "Array Baru: ";
    for (int i = 0; i < ukuranBaru; ++i)
    {
        std::cout << arrayBaru[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
