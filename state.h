struct State {
    Color white;
    Color black;
};

struct Color {
    uint64_t king;
    uint64_t queen;
    uint64_t bishop;
    uint64_t knight;
    uint64_t rook;
    uint64_t pawn;
};
