#include <bitset>
#include <iostream>

#include "bitboard.h"

int main()
{
    uint64_t value = 129000;

    std::bitset<64> first(value);
    std::cout << "decimal: " << first.to_ullong() << std::endl;
    std::cout << "binary: " << first.to_string() << std::endl;
    std::cout << "bitboard:\n" << to_bitboard(first.to_string()) << std::endl;

    std::bitset<64> second(first.to_string());
    std::cout << "decimal: " << second.to_ullong() << std::endl;
    std::cout << "binary: " << second.to_string() << std::endl;
    std::cout << "bitboard:\n" << to_bitboard(second.to_string()) << std::endl;

    return 0;
}
