fraction: main.cpp Fraction.cpp Fraction.h Tests.cpp
	g++ main.cpp Fraction.cpp Fraction.h Tests.cpp -o fraction -std=c++11 
clean: 
	rm fraction 
