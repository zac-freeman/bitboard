#include "bitboard.h"

#include <bitset>
#include <cassert>

static const uint64_t ROW = std::bitset<SIZE>("00000000"
                                              "00000000"
                                              "00000000"
                                              "00000000"
                                              "00000000"
                                              "00000000"
                                              "00000000"
                                              "11111111").to_ullong();


static const uint64_t COLUMN = std::bitset<SIZE>("00000001"
                                                 "00000001"
                                                 "00000001"
                                                 "00000001"
                                                 "00000001"
                                                 "00000001"
                                                 "00000001"
                                                 "00000001").to_ullong();

static const uint64_t L_DIAG = std::bitset<SIZE>("10000000"
                                                 "01000000"
                                                 "00100000"
                                                 "00010000"
                                                 "00001000"
                                                 "00000100"
                                                 "00000010"
                                                 "00000001").to_ullong();

static const uint64_t R_DIAG = std::bitset<SIZE>("00000001"
                                                 "00000010"
                                                 "00000100"
                                                 "00001000"
                                                 "00010000"
                                                 "00100000"
                                                 "01000000"
                                                 "10000000").to_ullong();

static const uint64_t GALLOP = std::bitset<SIZE>("00000000"
                                                 "00000000"
                                                 "00000000"
                                                 "00001010"
                                                 "00010001"
                                                 "00000000"
                                                 "00010001"
                                                 "00001010").to_ullong();

std::string to_bitboard(const std::string &binary)
{
    assert(binary.size() == SIZE);

    std::string bitboard;
    for (int i = 0; i < HEIGHT; i++) {
        bitboard.append(binary.substr(i * HEIGHT, WIDTH) + '\n');
    }

    bitboard.pop_back();
    return bitboard;
}

std::string from_bitboard(const std::string &bitboard)
{
    assert(bitboard.size() == (SIZE + HEIGHT - 1));
    std::string binary;
    for (int i = 0; i < HEIGHT; i++) {
        binary.append(bitboard.substr(i * (HEIGHT + 1), WIDTH));
    }

    return binary;
}

uint64_t row_at(size_t index) {
    assert(index < SIZE);

    int shift = (index / HEIGHT);
    return ROW << (shift * 8);
}

uint64_t column_at(size_t index) {
    assert(index < SIZE);

    int shift = (index % WIDTH);
    return COLUMN << shift;
}

uint64_t l_diag_at(size_t index) {
    assert(index < SIZE);

    int shift = (index / HEIGHT) - (index % WIDTH);
    // TODO: why can't I left shift a negative amount?
    return (shift > 0) ? (L_DIAG << (shift * 8)) : (L_DIAG >> (shift * -8));
}

uint64_t r_diag_at(size_t index) {
    assert(index < SIZE);

    int shift = (WIDTH - 1) - (index % WIDTH) - (index / HEIGHT);
    // TODO: why can't I right shift a negative amount?
    return (shift > 0) ? (R_DIAG >> (shift * 8)) : (R_DIAG << (shift * -8));
}

uint64_t gallop_at(const size_t index) {
    assert(index < SIZE);

    const int left_wrap = (index % WIDTH) - 5; // TODO

    const int offset = (2 * WIDTH) + 2;
    const int shift = offset - index;
    const int gallop = (shift > 0) ? (GALLOP >> shift) : (GALLOP << (-1 * shift));
}
