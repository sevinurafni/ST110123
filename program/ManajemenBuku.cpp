#include <iostream>
#include <vector>

// Struktur data untuk merepresentasikan buku
struct Buku
{
    std::string judul;
    std::string pengarang;
    int tahunTerbit;
};

// Database buku sebagai vektor
std::vector<Buku> databaseBuku;

// Fungsi untuk menambahkan buku ke database
void tambahBuku()
{
    Buku buku;
    std::cout << "Masukkan judul buku: ";
    std::getline(std::cin, buku.judul); // Gunakan getline untuk memasukkan judul yang mengandung spasi
    std::cout << "Masukkan pengarang buku: ";
    std::getline(std::cin, buku.pengarang);
    std::cout << "Masukkan tahun terbit buku: ";
    std::cin >> buku.tahunTerbit;

    // Menambahkan buku ke database
    databaseBuku.push_back(buku);

    std::cout << "Buku berhasil ditambahkan!\n";
}

// Fungsi untuk menampilkan daftar buku dalam database
void tampilkanDaftarBuku()
{
    if (databaseBuku.empty())
    {
        std::cout << "Database buku kosong.\n";
    }
    else
    {
        std::cout << "Daftar Buku:\n";
        for (const auto &buku : databaseBuku)
        {
            std::cout << "Judul: " << buku.judul << ", Pengarang: " << buku.pengarang << ", Tahun Terbit: " << buku.tahunTerbit << std::endl;
        }
    }
}

// Fungsi untuk mencari buku berdasarkan judul
void cariBuku()
{
    std::string judulCari;
    std::cout << "Masukkan judul buku yang dicari: ";
    std::getline(std::cin, judulCari);

    bool bukuDitemukan = false;
    for (const auto &buku : databaseBuku)
    {
        if (buku.judul == judulCari)
        {
            std::cout << "Buku ditemukan!\n";
            std::cout << "Judul: " << buku.judul << ", Pengarang: " << buku.pengarang << ", Tahun Terbit: " << buku.tahunTerbit << std::endl;
            bukuDitemukan = true;
            break;
        }
    }

    if (!bukuDitemukan)
    {
        std::cout << "Buku dengan judul '" << judulCari << "' tidak ditemukan.\n";
    }
}

int main()
{
    int pilihan;

    do
    {
        // Menampilkan menu
        std::cout << "\nMenu:\n";
        std::cout << "1. Tambah Buku\n";
        std::cout << "2. Tampilkan Daftar Buku\n";
        std::cout << "3. Cari Buku\n";
        std::cout << "0. Keluar\n";
        std::cout << "Pilih menu (0-3): ";
        std::cin >> pilihan;
        std::cin.ignore(); // Membersihkan newline dalam buffer

        // Memproses pilihan menu
        switch (pilihan)
        {
        case 1:
            tambahBuku();
            break;
        case 2:
            tampilkanDaftarBuku();
            break;
        case 3:
            cariBuku();
            break;
        case 0:
            std::cout << "Program selesai.\n";
            break;
        default:
            std::cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 0);

    return 0;
}
