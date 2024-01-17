## Apa itu fungsi?

Fungsi (atau disebut juga subprogram atau prosedur) adalah blok kode yang dapat dipanggil dari bagian lain dalam program. Fungsi digunakan untuk melakukan tugas tertentu, dan mereka membantu dalam mengorganisasi dan memecah program menjadi bagian-bagian yang lebih kecil dan mudah dikelola.

## Deklarasi dan Penggunaan

```c++
// Implementasi fungsi sapaPengguna
void sapaPengguna() {
    std::cout << "Selamat datang, Pengguna!" << std::endl;
}

// Implementasi fungsi tambahkan
int tambahkan(int a, int b) {
    return a + b;
}
```

Panggil Fungsi dalam main:

```c++
int main() {
    // Memanggil fungsi sapaPengguna
    sapaPengguna();

    // Memanggil fungsi tambahkan dan menampilkan hasilnya
    int hasilPenambahan = tambahkan(5, 7);
    std::cout << "Hasil penambahan: " << hasilPenambahan << std::endl;

    return 0;
}
```

## Jenis Fungsi Berdasarkan Nilai Kembalian

1. Fungsi Tanpa Nilai Kembalian (void):

```c++
void sapaPengguna() {
    std::cout << "Selamat datang, Pengguna!" << std::endl;
}
```

2. Fungsi Dengan Nilai Kembalian

```c++
int tambahkan(int a, int b) {
    return a + b;
}
```

## Parameter pada Fungsi

Parameter digunakan untuk mengirim nilai ke fungsi saat memanggilnya.

```c++
// Fungsi dengan parameter
void tampilkanPesanan(std::string pesanan, int jumlah) {
    for (int i = 0; i < jumlah; ++i) {
        std::cout << "Pesanan ke-" << i + 1 << ": " << pesanan << std::endl;
    }
}
```

## Variabel Lokal dan Global

Variabel yang dideklarasikan di dalam sebuah fungsi disebut variabel lokal, dan hanya dapat diakses di dalam fungsi tersebut. Variabel yang dideklarasikan di luar fungsi disebut variabel global, dan dapat diakses oleh semua fungsi dalam program.

## Contoh Program Luas dan Keliling Lingkaran dengan Fungsi

```c++
#include <iostream>
#include <cmath>

// Deklarasi fungsi
double hitungLuasLingkaran(double jariJari);
double hitungKelilingLingkaran(double jariJari);

int main() {
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
double hitungLuasLingkaran(double jariJari) {
    return M_PI * std::pow(jariJari, 2);
}

// Implementasi fungsi menghitung keliling lingkaran
double hitungKelilingLingkaran(double jariJari) {
    return 2 * M_PI * jariJari;
}
```

## Tugas

Buatkan program untuk menghitung 20! dengan menggunakan fungsi.
