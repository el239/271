all: lab4

lab4: lab4.o functions4.o 
	gcc lab4.o functions4.o -o lab4
lab4.o: lab4.c functions4.h
	gcc -c lab4.c
labfunctions4.o: labfunctions4.c labfunctions4.h
	gcc -c lab4functions.c
clean:
	rm -rf.o
