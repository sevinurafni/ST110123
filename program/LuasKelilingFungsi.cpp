#include <iostream>
#include <cmath>

// Deklarasi fungsi
double hitungLuasLingkaran(double jariJari);
double hitungKelilingLingkaran(double jariJari);

int main()
{
    // Meminta pengguna memasukkan jari-jari lingkaran
    double jariJari;
    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> jariJari;

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    double luas = hitungLuasLingkaran(jariJari);
    double keliling = hitungKelilingLingkaran(jariJari);

    // Menampilkan hasil
    std::cout << "Luas lingkaran: " << luas << std::endl;
    std::cout << "Keliling lingkaran: " << keliling << std::endl;

    return 0;
}

// Implementasi fungsi menghitung luas lingkaran
double hitungLuasLingkaran(double jariJari)
{
    return M_PI * std::pow(jariJari, 2);
}

// Implementasi fungsi menghitung keliling lingkaran
double hitungKelilingLingkaran(double jariJari)
{
    return 2 * M_PI * jariJari;
}
