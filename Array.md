## Apa itu array?

Array adalah struktur data yang digunakan untuk menyimpan elemen-elemen data sejenis dengan tipe data yang sama. Elemen-elemen dalam array diidentifikasi oleh indeks atau posisi mereka dalam array. Ukuran array didefinisikan pada saat deklarasi dan tidak dapat diubah setelahnya. Index array pada C++ dimulai dari 0. Artinya, elemen pertama dalam array memiliki indeks 0, elemen kedua memiliki indeks 1, dan seterusnya. Jadi, jika Anda memiliki array dengan ukuran n, indeksnya akan berkisar dari 0 hingga n-1.

## Penulisan array

Berikut adalah contoh mendeklarasikan array

```c++
// Deklarasi array dengan tipe data int dan ukuran 5
int angka[5];

// Deklarasi dan inisialisasi array sekaligus
int nilai[] = {90, 85, 88, 92, 78};
```

selanjutnya adalah cara mengakses array,

```c++
// Mengakses dan menampilkan elemen array
cout << "Elemen ke-2 dari array nilai: " << nilai[1] << endl;
```

## Program Menghitung Rata-rata Nilai dengan Array

```c++
#include <iostream>

int main() {
    // Deklarasi array dan inisialisasi
    double nilai[] = {90.5, 85.0, 88.5, 92.0, 78.0};
    int jumlahNilai = 5;
    double totalNilai = 0.0;

    // Menghitung total nilai
    for (int i = 0; i < jumlahNilai; ++i) {
        totalNilai += nilai[i];
    }

    // Menghitung rata-rata nilai
    double rataRata = totalNilai / jumlahNilai;

    // Menampilkan hasil
    std::cout << "Total nilai: " << totalNilai << std::endl;
    std::cout << "Rata-rata nilai: " << rataRata << std::endl;

    return 0;
}
```

## Multidimensional Array

Array multidimensional adalah array dengan dua atau lebih dimensi.
Deklarasi dan Inisialisasi Array 2D:

```c++
// Deklarasi array 2D dengan tipe data int
int matriks[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

## Program penjumlahan matriks

```c++
#include <iostream>

int main() {
    // Deklarasi dan inisialisasi matriks
    int matriksA[2][2] = {{1, 2}, {3, 4}};
    int matriksB[2][2] = {{5, 6}, {7, 8}};
    int hasil[2][2];

    // Melakukan penjumlahan matriks
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    // Menampilkan hasil penjumlahan
    std::cout << "Hasil Penjumlahan Matriks:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << hasil[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```
