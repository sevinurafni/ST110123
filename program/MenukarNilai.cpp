#include <iostream>

int main()
{
    // Deklarasi variabel
    int a = 5;
    int b = 3;

    // Menampilkan nilai sebelum pertukaran
    std::cout << "Sebelum pertukaran:\n";
    std::cout << "Nilai a: " << a << std::endl;
    std::cout << "Nilai b: " << b << std::endl;

    // Menukar nilai a dan b
    int temp = a;
    a = b;
    b = temp;

    // Menampilkan nilai setelah pertukaran
    std::cout << "\nSetelah pertukaran:\n";
    std::cout << "Nilai a: " << a << std::endl;
    std::cout << "Nilai b: " << b << std::endl;

    return 0;
}
