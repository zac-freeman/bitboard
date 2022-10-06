CFLAGS = -Wall -g

main.x: main.o bitboard.o
	g++ $(CFLAGS) -o main.x main.o bitboard.o

main.o: main.cpp bitboard.h
	g++ $(CFLAGS) -c main.cpp

clean:
	rm main.x main.o bitboard.o
