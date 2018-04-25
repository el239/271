all: Lab8

Lab8: Lab8.o TwoDayPackage.o Package.o
	g++ Lab8.o TwoDayPackage.o Package.o -o Lab8

lab8.o: lab8.cpp TwoDayPackage.h Package.h
	g++ -c Lab8.cpp
	
TwoDayPackage.o: TwoDayPackage.cpp TwoDayPackage.h
	g++ -c TwoDayPackage.cpp
	
Package.o: Package.cpp Package.h
	g++ -c Package.cpp

clean: 
	rm -rf *.o
