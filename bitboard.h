#include <string>

static const int WIDTH = 8;
static const int HEIGHT = 8;
static const int SIZE = WIDTH * HEIGHT;

// TODO: make these members of bitset
std::string to_bitboard(const std::string &binary);
std::string from_bitboard(const std::string &bitboard);

uint64_t row_at(size_t index);
uint64_t column_at(size_t index);
uint64_t l_diag_at(size_t index);
uint64_t r_diag_at(size_t index);
uint64_t gallop_at(size_t index);
