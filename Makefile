
test: main.c lib/vector.h lib/libvector.a
	gcc -std=c2x -o build/test.exe main.c -L./lib -lvector

lib/vector.h: vector.h
	cp vector.h lib/vector.h

lib/libvector.a: vector.c vector.h
	gcc -std=c2x -c vector.c -o bin/vector.o
	ar rcs lib/libvector.a bin/vector.o
