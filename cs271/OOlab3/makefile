all: lab3
lab3: sortingfunctions.o lab3.o helperfunctions.o
	gcc sortingfunctions.o lab3.o helperfunctions.o -o lab3
lab3.o: lab3.c sortingfunctions.h helperfunctions.h
	gcc -c lab3.c
sortingfunctions.o: sortingfunctions.c sortingfunctions.h
	gcc -c sortingfunctions.c
helperfunctions.o: helperfunctions.c helperfunctions.h
	gcc -c helperfunctions.c
clean:
	rm -rf *.o
