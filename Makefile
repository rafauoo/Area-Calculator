main: 	clean rectangle.o circle.o triangle.o area.o
	clang++ -std=c++11 -o area rectangle.o circle.o triangle.o area.o

tests: clean_test tests.o circle.o triangle.o rectangle.o
	clang++ -std=c++11 -o tests tests.o circle.o triangle.o rectangle.o

clean_test:
	rm -f test

clean:
	rm -f main

dump: clean rectangle.o circle.o triangle.o area.o
	clang++ -std=c++11 -S rectangle.o circle.o triangle.o area.o

rectangle.o: rectangle.cpp rectangle.h
	clang++ -std=c++11 -c rectangle.cpp

circle.o: circle.cpp circle.h
	clang++ -std=c++11 -c circle.cpp

triangle.o: triangle.cpp triangle.h
	clang++ -std=c++11 -c triangle.cpp

area.o: area.cpp
	clang++ -std=c++11 -c area.cpp

tests.o: tests.cpp
	clang++ -std=c++11 -c tests.cpp


