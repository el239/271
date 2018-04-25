all: lab6

lab6: Calender.o Date.o Time.o
	g++ Calender.o Date.o Time.o -o lab6

Calender.o: Calender.cpp Date.h Time.h
	g++ -c Calender.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

Time.o: Time.cpp Time.h
	g++ -c Time.cpp
clean:
	rm -rf.o	
	
