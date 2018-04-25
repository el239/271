all: Lab7

Lab7: Lab7.o Term.o
	g++ Lab7.o Term.o -o Lab7

Lab7.o: Lab7.cpp Term.h
	g++ -c Lab7.cpp
	
Term.o: Term.cpp Term.h
	g++ -c Term.cpp

clean: 
	rm -rf *.o
