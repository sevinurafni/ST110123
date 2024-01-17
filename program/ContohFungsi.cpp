#include <iostream>
#include <string>

// Deklarasi fungsi
void sapaPengguna();
int tambahkan(int a, int b);
void tampilkanPesanan(std::string pesanan, int jumlah);

int main()
{
    // Memanggil fungsi sapaPengguna
    sapaPengguna();

    // Memanggil fungsi tambahkan dan menampilkan hasilnya
    int hasilPenambahan = tambahkan(5, 7);
    std::cout << "Hasil penambahan: " << hasilPenambahan << std::endl;

    // Memanggil fungsi tampilkanPesanan
    tampilkanPesanan("Kopi", 3);

    return 0;
}

// Implementasi fungsi sapaPengguna
void sapaPengguna()
{
    std::cout << "Selamat datang, Pengguna!" << std::endl;
}

// Implementasi fungsi tambahkan
int tambahkan(int a, int b)
{
    return a + b;
}

// Implementasi fungsi tampilkanPesanan
void tampilkanPesanan(std::string pesanan, int jumlah)
{
    for (int i = 0; i < jumlah; ++i)
    {
        std::cout << "Pesanan ke-" << i + 1 << ": " << pesanan << std::endl;
    }
}
