## 1. Bentuk/Struktur Program C++

Struktur program C++ mirip dengan kebanyakan program bahasa tingkat tinggi lainnya. Struktur programnya adalah:

- Judul program,
- Daftar header file
- Deklarasi
- Fungsi utama

### 1.1. Judul Program

Judul program hanya untuk keperluan dokumentasi dan tidak penting bagi alur program. Ditulis dalam format baris komentar. Ada dua jenis komentar dalam C++:

1.  Komentar Baris (Single-Line Comment):
    Komentar baris digunakan untuk menambahkan keterangan pada suatu baris kode.

        // Ini adalah komentar baris, tidak mempengaruhi eksekusi program.
        // Program Menghitung Luas dan Keliling Lingkaran.
        int phi = 3.14; // Komentar juga dapat juga ditambahkan setelah satu baris kode.

2.  Komentar Blok (Multi-Line Comment):
    Komentar blok digunakan untuk menambahkan keterangan pada beberapa baris kode.

        /*
        Ini adalah komentar blok.
        Komentar ini dapat mencakup beberapa baris.
        Kode di dalam komentar blok tidak akan dieksekusi.
        */

### 1.2. Daftar Header File

Inklusi file header dilakukan dengan menggunakan direktif praprosesor. Ini digunakan untuk menyertakan definisi fungsi, deklarasi variabel, atau kode lain yang didefinisikan di file header ke dalam file C++ saat kompilasi. Instruksi-instruksi praprosesor dimulai dengan tanda pagar (#) dan tidak diakhiri dengan titik koma.

```c++
#include <iostream>
```

Dalam kasus di atas, &lt;iostream&gt;
adalah file header dari C++ yang menyediakan fungsi-fungsi untuk masukan dan keluaran standar.

### 1.3. Deklarasi

Deklarasi adalah bagian untuk mendefinisikan semua nama yang dipakai dalam program. Nama
tersebut dapat berupa nama tetapan (konstanta), nama variabel, nama tipe, nama prosedur, nama
fungsi.

```c++
using namespace std;
```

### 1.4. Fungsi Utama

Ini adalah titik awal eksekusi program. Setiap program C++ harus memiliki fungsi main. Di dalam fungsi main, program akan memproses logika utama, memanipulasi data, dan menampilkan hasil.

```c++
int main(){

}
```

## 2. Variabel

Variabel adalah suatu lokasi yang diidentifikasi oleh nama dan digunakan untuk menyimpan data dalam suatu program. Setiap variabel dalam C++ memiliki tipe data tertentu, seperti int, float, double, dan sebagainya. Tipe data menentukan ukuran dan format data yang dapat disimpan oleh variabel. Berdasarkan lingkupnya variabel dibagi menjadi dua yaitu variabel lokal yang hanya dapat diakses dalam blok di mana itu dideklarasikan dan variabel global dapat diakses di seluruh program.

### 2.1. Deklarasi Variabel

Sebelum suatu variabel dapat digunakan, perlu dideklarasikan. Deklarasi memberitahu kompiler tentang tipe data dan nama variabel.

```c++
int angka;
```

### 2.2. Insialisasi Variabel

Inisialisasi adalah memberi nilai awal pada variabel pada saat deklarasi.

```c++
int angka = 10;
```

### 2.3. Pemberian Nilai

Variabel dapat diberi nilai setelah deklarasi.

```c++
int angka;
angka = 20;
```

### 2.4. Penggunaan Variabel dalam Ekspresi

Variabel dapat digunakan dalam ekspresi matematika atau logika.

```c++
hasil = angka1 + angka2
```

## 3. Konstanta

Konstanta dalam C++ adalah nilai yang tetap dan tidak dapat diubah selama eksekusi program. Konstanta memberikan cara untuk menyimpan nilai yang tetap dan memberikan nama yang dapat digunakan untuk merujuk ke nilai tersebut. Dalam C++, ada dua jenis konstanta: konstanta literal dan konstanta simbolik.

### 3.1. Konstanta Literal

Konstanta literal adalah nilai konstan yang diberikan secara langsung dalam kode.

```c++
5, 3.14, 'A', "Hello"
```

### 3.2. Konstanta Simbolik

Konstanta simbolik adalah nilai konstan yang diberikan nama atau simbol.
Didefinisikan menggunakan const diikuti dengan tipe data dan nama konstanta.

```c++
const int JUMLAH_MURID = 30;
const double PI = 3.14;
```

## 4. Beberapa fungsi dari &lt;iostream&gt;

### 4.1 cin

Fungsi ini digunakan untuk mengambil masukan dari pengguna.

```c++
int angka;
std::cin >> angka;
```

### 4.2 cout

fungsi yang digunakan untuk menampilkan data ke layar.

```c++
std::cout << "Algoritma dan Pemrograman" << std::endl;
```

### 4.3 endl

Manipulator ini digunakan untuk memberikan karakter baris baru dan membersihkan buffer.

```c++
std::cout << "Algoritma dan Pemrograman" << std::endl;
```

## Program Menghitung Luas dan Keliling Lingkaran

```c++
#include <iostream>
#include <cmath>

int main() {
    double jariJari;
    const double PI = M_PI;

    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> jariJari;

    double luas = PI * pow(jariJari, 2);

    double keliling = 2 * PI * jariJari;

    std::cout << "Luas lingkaran: " << luas << std::endl;
    std::cout << "Keliling lingkaran: " << keliling << std::endl;

    return 0;
}

```

## Tugas

Buatkan flowchart, pseudocode, dan program untuk permasalahan berikut, <br>
Seorang pengguna di warnet mulai mengakses internet pada waktu A1 dan berakhir pada waktu A2. Jika tarif penggunaan internet di warnet tersebut adalah Rp5000,- per jam, program billing warnet dapat dibuat untuk menghitung durasi penggunaan (dalam jam, menit, dan detik) dan biaya total yang harus dibayar oleh pengguna.

## Referensi

https://medium.com/@6unpnp/installing-git-8d4c29799185 <br>
https://kevinkotze.github.io/github-tut/setup.html <br>
https://www.w3schools.com/cpp/ <br>
https://leetcode.com/ <br>
