#include <iostream>

int main()
{
    // Deklarasi variabel
    char huruf;

    // Meminta pengguna memasukkan huruf
    std::cout << "Masukkan suatu huruf: ";
    std::cin >> huruf;

    // Menentukan huruf vokal atau konsonan
    if (huruf == 'a' || huruf == 'A' ||
        huruf == 'e' || huruf == 'E' ||
        huruf == 'i' || huruf == 'I' ||
        huruf == 'o' || huruf == 'O' ||
        huruf == 'u' || huruf == 'U')
    {
        std::cout << "Huruf yang dimasukkan adalah vokal." << std::endl;
    }
    else
    {
        std::cout << "Huruf yang dimasukkan adalah konsonan." << std::endl;
    }

    return 0;
}
