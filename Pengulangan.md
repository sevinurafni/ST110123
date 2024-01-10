Pengulangan merupakan suatu proses dimana kita dapat mengulang satu atau beberapa perintah atau
eksekusi blok kode tanpa henti, selama kondisi yang dijadikan acuan terpenuhi. Biasanya disiapkan variabel untuk iterasi atau variabel penanda kapan Pengulangan akan diberhentikan. Pada C++, terdapat beberapa bentuk Pengulangan yang umum digunakan, yaitu:

## Pengulangan For

Struktur ini digunakan bila kita mengetahui secara pasti banyaknya pengulangan yang akan dilakukan. Pernyataan FOR mempunyai 3 parameter yaitu :

1. Nilai awal (initial value)
2. Test kondisi yang menentukan akhir loop (condition expression)
3. penentu perubahan nilai (incremental expression)

```c++
#include <iostream>

int main() {
    // Contoh pengulangan for
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iterasi ke-" << i << std::endl;
    }

    return 0;
}
```

## Pengulangan while

Pengulangan while digunakan ketika kita tidak tahu berapa kali kita ingin menjalankan blok kode dan kondisi pengulangan diperiksa sebelum eksekusi blok.

```c++
#include <iostream>

int main() {
    // Contoh pengulangan while
    int i = 1;
    while (i <= 5) {
        std::cout << "Iterasi ke-" << i << std::endl;
        ++i;
    }

    return 0;
}
```

## Pengulangan do-while

Pengulangan do-while mirip dengan while, namun kondisi pengulangan diperiksa setelah eksekusi blok, sehingga blok kode akan dijalankan setidaknya satu kali.

```c++
#include <iostream>

int main() {
    // Contoh pengulangan do-while
    int i = 1;
    do {
        std::cout << "Iterasi ke-" << i << std::endl;
        ++i;
    } while (i <= 5);

    return 0;
}
```

## Beberapa Aspek Penting dalam Pengulangan:

- Penggunaan Variabel Iterator <br>
  Variabel iterator (contoh: i dalam contoh di atas) digunakan untuk melacak iterasi atau perulangan. Variabel ini biasanya dideklarasikan sebelum pengulangan dimulai.
- Kondisi Penghentian <br>
  Setiap jenis pengulangan memiliki kondisi penghentian yang harus dipenuhi agar iterasi berhenti. Jika kondisi tidak terpenuhi, iterasi akan terus berlanjut.
- Penggunaan Blok Kode <br>
  Blok kode yang diulang harus dikelilingi oleh kurung kurawal {}.
- Penggunaan break dan continue <br>
  Dalam beberapa situasi, break digunakan untuk keluar dari pengulangan lebih awal, sementara continue digunakan untuk melanjutkan ke iterasi berikutnya.

```c++
// Contoh penggunaan break dan continue
#include <iostream>

int main()
{
    for (int i = 1; i <= 5; ++i)
    {
        if (i == 3)
        {
            continue;
        }
        if (i == 5)
        {
            break;
        }
        std::cout << "Iterasi ke-" << i << std::endl;
    }
}
```

## Tugas

Buatlah program berdasarkan algoritma berikut:

- Program meminta pengguna memasukkan bilangan bulat positif.
- Program menggunakan pemilihan kondisi untuk menentukan apakah bilangan tersebut ganjil atau genap.
- Jika bilangan ganjil, program menggunakan pengulangan untuk menampilkan deret bilangan ganjil dari 1 hingga bilangan yang dimasukkan.
- Jika bilangan tidak positif, program memberikan pesan bahwa input tidak valid.

## Referensi

https://www.petanikode.com/cpp-perulangan/ <br>
https://www.w3schools.com/cpp/cpp_for_loop.asp
