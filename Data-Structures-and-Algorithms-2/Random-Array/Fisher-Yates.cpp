#include <iostream>
#include <string>
#include <algorithm>
#include <random>

// by Novran Faathir

int main() {
    // Deklarasi total_member
	int total_member; 

    // BANNER NAMA APLIKASI
    std::cout << std::endl;
    std::cout << "PROGRAM ACAK ARISAN";
    std::cout << std::endl;
    std::cout << std::endl;

    // INPUT JUMLAH ANGGOTA
    std::cout << "Masukan jumlah anggota arisan (0 artinya tidak ada): ";
    std::cin >> total_member;
    std::cout << std::endl;

    // PRINT JUMLAH ANGGOTA
    std::cout << "Jumlah anggota arisan adalah " << total_member << std::endl;
    std::cout << std::endl;

    // Deklarasi Array
    std::string member_name[total_member];

    // LOOP INPUT NAMA MASING-MASING ANGGOTA
    for (int i = 0; i < total_member; i++) {
        std::cout << "Masukan nama anggota ke-" << i+1 << ": ";
        std::cin >> member_name[i];
    }

    // GENERATE RANDOM ARRAY UNTUK MENGACAK ARISAN
    int mbname_arrsize = sizeof(member_name) / sizeof(member_name[0]);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(member_name, member_name + mbname_arrsize, gen);

    // PRINT HASIL SETELAH DIACAK
    std::cout << std::endl;
    std::cout << "Hasil setelah diacak: " << std::endl;

    for (int i = 0; i < mbname_arrsize; ++i) {
        std::cout << i+1 << '.' << ' ' << member_name[i] << "\n";
    }
    std::cout << std::endl;
	return 0;
}
