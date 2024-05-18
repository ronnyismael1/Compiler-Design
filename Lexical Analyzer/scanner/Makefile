all: scanner

scanner: main.cpp scanner.cpp
	g++ -o scanner main.cpp scanner.cpp

run: scanner
	./scanner

clean:
	rm -f scanner

.PHONY: all clean
