#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a -Werror

HEADERS=snowman.hpp
OBJECTS=snowman.o

demo: Demo.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

test: Test.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

tidy:
	clang-tidy snowman.cpp -checks=bugprone-*,clang-analyzer-*,cppcoreguidelines-*,hicpp-*,performance-*,portability-*,readability-* --warnings-as-errors=-* --

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o demo test
	rm -f Test2.cpp
