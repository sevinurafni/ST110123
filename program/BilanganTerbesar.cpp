#include <iostream>

int main()
{
    // Deklarasi variabel
    double bilangan1, bilangan2;

    // Meminta pengguna memasukkan dua bilangan
    std::cout << "Masukkan dua bilangan: ";
    std::cin >> bilangan1 >> bilangan2;

    // Menentukan bilangan terbesar
    if (bilangan1 > bilangan2)
    {
        std::cout << "Bilangan terbesar: " << bilangan1 << std::endl;
    }
    else if (bilangan2 > bilangan1)
    {
        std::cout << "Bilangan terbesar: " << bilangan2 << std::endl;
    }
    else
    {
        std::cout << "Bilangan pertama dan kedua sama besar." << std::endl;
    }

    return 0;
}
