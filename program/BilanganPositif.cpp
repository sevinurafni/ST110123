#include <iostream>
int main()
{
    // Deklarasi variabel
    int angka;

    // Meminta pengguna memasukkan nilai
    std::cout << "Masukkan suatu angka: ";
    std::cin >> angka;

    // Pemilihan kondisi tunggal
    if (angka > 0)
    {
        std::cout << "Angka yang dimasukkan adalah positif." << std::endl;
    }

    return 0;
}