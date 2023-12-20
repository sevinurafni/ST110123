/* Menghitung Luas dan Keliling Lingkaran */

#include <iostream>
#include <cmath> // Diperlukan untuk menggunakan fungsi pow() dan M_PI

int main()
{
    // Deklarasi variabel
    double jariJari;
    const double PI = M_PI; // Mendapatkan nilai PI dari cmath

    // Meminta pengguna memasukkan jari-jari lingkaran
    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> jariJari;

    // Menghitung luas lingkaran
    double luas = PI * pow(jariJari, 2);

    // Menghitung keliling lingkaran
    double keliling = 2 * PI * jariJari;

    // Menampilkan hasil
    std::cout << "Luas lingkaran: " << luas << std::endl;
    std::cout << "Keliling lingkaran: " << keliling << std::endl;

    return 0;
}
