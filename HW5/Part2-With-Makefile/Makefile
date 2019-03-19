#HW 5 Makefile



output: file.o fileTest.o
	gcc file.o fileTest.o -o output

file.o: file.c fileTest.h
	gcc  -c file.c -lm
fileTest.o: fileTest.c fileTest.h
	gcc -c fileTest.c -lm

clean:
	rm *.o output