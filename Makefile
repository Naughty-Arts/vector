
test: main.c lib/vector.h
	gcc -std=c2x -o build/test.exe main.c

lib/vector.h: vector.h
	cp vector.h lib/vector.h

install: lib/vector.h
	cp lib/vector.h "C:\\libs\\vector.h"
