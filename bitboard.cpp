#include "bitboard.h"

#include <string>

static const int WIDTH = 8;
static const int HEIGHT = 8;
static const int SIZE = WIDTH * HEIGHT;

std::string to_bitboard(const std::string &binary)
{
    std::string bitboard;
    for (int i = 0; i < HEIGHT; i++) {
        bitboard.append(binary.substr(i*HEIGHT, WIDTH) + '\n');
    }

    bitboard.pop_back();
    return bitboard;
}

char* from_bitboard(char* bitboard)
{
    return "";
}
