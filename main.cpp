#include <bitset>
#include <iostream>
#include <cmath>

#include "bitboard.h"

int main()
{
//    uint64_t value = 129000;
//
//    std::bitset<64> first(value);
//    std::cout << "decimal: " << first.to_ullong() << std::endl;
//    std::cout << "binary: " << first.to_string() << std::endl;
//    std::cout << "to_bitboard:\n" << to_bitboard(first.to_string()) << std::endl;
//
//    std::bitset<64> second(from_bitboard(to_bitboard(first.to_string())));
//    std::cout << "binary: " << second.to_string() << std::endl;
//    std::cout << "decimal: " << second.to_ullong() << std::endl;

//    for (int i = 0; i < 64; i++)
//    {
//        std::cout << "bitboard:\n" << to_bitboard(std::bitset<64>(exp2(i)).to_string()) << std::endl;
//        std::cout << "r_diag_at:\n" << to_bitboard(std::bitset<64>(r_diag_at(i)).to_string()) << std::endl;
//    }

//    for (int i = 0; i < 64; i++)
//    {
//        std::cout << "bitboard:\n" << to_bitboard(std::bitset<64>(exp2(i)).to_string()) << std::endl;
//        std::cout << "l_diag_at:\n" << to_bitboard(std::bitset<64>(l_diag_at(i)).to_string()) << std::endl;
//    }

//    for (int i = 0; i < 64; i++)
//    {
//        std::cout << "bitboard:\n" << to_bitboard(std::bitset<64>(exp2(i)).to_string()) << std::endl;
//        std::cout << "row_at:\n" << to_bitboard(std::bitset<64>(row_at(i)).to_string()) << std::endl;
//    }

//    for (int i = 0; i < 64; i++)
//    {
//        std::cout << "bitboard:\n" << to_bitboard(std::bitset<64>(exp2(i)).to_string()) << std::endl;
//        std::cout << "column_at:\n" << to_bitboard(std::bitset<64>(column_at(i)).to_string()) << std::endl;
//    }
//    return 0;

    for (int i = 0; i < 64; i++) {
        std::cout << "bitboard:\n" << to_bitboard(std::bitset<64>(exp2(i)).to_string()) << std::endl;
        std::cout << "gallop_at:\n" << to_bitboard(std::bitset<64>(gallop_at(i)).to_string()) << std::endl;
    }
}
