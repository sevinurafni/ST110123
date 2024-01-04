## 1. One-way Case (Tunggal)

Bentuk paling sederhana pilihan tunggal adalah jika hanya ada satu pilihan kondisi yang disediakan. Notasi penulisan pemilihan tunggal adalah

```
if (kondisi) {
        true statement
}
```

Berikut adalah contoh sederhana pemilihan kondisi tunggal pada kasus mengevaluasi bilangan positif.

```c++
#include <iostream>

int main() {
    // Deklarasi variabel
    int angka;

    // Meminta pengguna memasukkan nilai
    std::cout << "Masukkan suatu angka: ";
    std::cin >> angka;

    // Pemilihan kondisi tunggal
    if (angka > 0) {
        std::cout << "Angka yang dimasukkan adalah positif." << std::endl;
    }

    return 0;
}
```

Pada contoh di atas, program akan mengevaluasi apakah nilai yang dimasukkan oleh pengguna (angka) lebih besar dari 0. Jika kondisi tersebut terpenuhi, maka blok kode dalam if akan dieksekusi, dan pesan "Angka yang dimasukkan adalah positif." akan ditampilkan.

## 2. Two-way-case

Digunakan untuk menentukan tindakan yang akan digunakan bila kondisi bernilai benar dan
salah. Notasi penulisan pemilihan ganda adalah

```
if (kondisi){
        true statement
        }
else {
        false statement
        }
```

Contoh program untuk menentukan bilangan terbesar dari dua buah bilangan.

```c++
#include <iostream>

int main() {
    // Deklarasi variabel
    double bilangan1, bilangan2;

    // Meminta pengguna memasukkan dua bilangan
    std::cout << "Masukkan dua bilangan: ";
    std::cin >> bilangan1 >> bilangan2;

    // Menentukan bilangan terbesar
    if (bilangan1 > bilangan2) {
        std::cout << "Bilangan terbesar: " << bilangan1 << std::endl;
    } else if (bilangan2 > bilangan1) {
        std::cout << "Bilangan terbesar: " << bilangan2 << std::endl;
    } else {
        std::cout << "Bilangan pertama dan kedua sama besar." << std::endl;
    }

    return 0;
}
```

## 3. Multi-way-case (Majemuk)

Untuk menentukan tindakan yang akan digunakan disediakan
lebih dari 2 alternatif. Merupakan bentuk statement if dengan statement if lain di dalam if
sebelumnya. Notasi penulisan pemilihan ganda adalah

```
if (kondisi 1){
        pernyataan aksi 1
        }
elseif (kondisi 2){
        pernyataan aksi 2
        }
else {
pernyataan aksi 3}
```

Contoh program untuk menentukan konversi nilai.

```c++
#include <iostream>

int main() {
    // Deklarasi variabel
    int nilai;

    // Meminta pengguna memasukkan nilai
    std::cout << "Masukkan nilai: ";
    std::cin >> nilai;

    // Mengelompokkan nilai berdasarkan ketentuan
    char nilaiHuruf;

    if (nilai >= 90) {
        nilaiHuruf = 'A';
    } else if (nilai >= 80) {
        nilaiHuruf = 'B';
    } else if (nilai >= 70) {
        nilaiHuruf = 'C';
    } else if (nilai >= 60) {
        nilaiHuruf = 'D';
    } else {
        nilaiHuruf = 'E';
    }

    // Menampilkan hasil
    std::cout << "Nilai huruf: " << nilaiHuruf << std::endl;

    return 0;
}
```

## 4. If Bersarang

Situasi dimana kita ingin memeriksa kodisi lain setelah kondisi sebelumnya terpenuhi (bernilai TRUE). Notasi penulisannya,

```
if (kondisi 1){
    if (kondisi 2){
        Pernyataan aksi 2
    }
    elseif (kondisi 3) {
        Pernyataan aksi 3
    }
    elseif (kondisi 4){
        Pernyataan aksi 4
    }
else {
    Pernyataan aksi 5
}
```

```c++
#include <iostream>

int main() {
    // Deklarasi variabel
    int usia;
    char jenisKelamin;

    // Meminta pengguna memasukkan usia dan jenis kelamin
    std::cout << "Masukkan usia: ";
    std::cin >> usia;

    std::cout << "Masukkan jenis kelamin (L/P): ";
    std::cin >> jenisKelamin;

    // Struktur if bersarang untuk menentukan kategori berdasarkan usia dan jenis kelamin
    if (usia >= 18) {
        if (jenisKelamin == 'L' || jenisKelamin == 'l') {
            std::cout << "Anda adalah seorang pria dewasa." << std::endl;
        } else if (jenisKelamin == 'P' || jenisKelamin == 'p') {
            std::cout << "Anda adalah seorang wanita dewasa." << std::endl;
        } else {
            std::cout << "Jenis kelamin tidak valid." << std::endl;
        }
    } else {
        std::cout << "Anda belum dewasa." << std::endl;
    }

    return 0;
}

```

## Tugas

1. Misalkan karyawan PT. Makmur dikelompokkan berdasarkan golongannya. Upah per jam tiap karyawan bergantung pada golongannya, dengan ketentuan :
   Golongan Upah per jam
   A. Rp. 5000,-
   B. Rp. 7000,-
   C. Rp. 8000,-
   D. Rp. 10.000,-
   Jumlah jam kerja normal selama 1 minggu adalah 48 jam. Kelebihan jam kerja dianggap lembur dengan upah lembur adalah Rp.4000,- per jam untuk semua golongan karyawan.
   Buat program menghitung gaji karyawan mingguan. Data yang dimasukan dari keyboard adalah nama karyawan, golongan, jumlah jam kerja. Data yang dicetak adalah nama karyawan dan gajinya.

## Referensi

http://www.cs.iit.edu/~cs105/lectures/Selection.html <br>
https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/statements/selection-statements <br>
https://www.youtube.com/watch?v=WtBF_-pLrjE&list=PLZS-MHyEIRo4Ze0bbGB1WKBSNMPzi-eWI
