#Makefile for Homework 1 part B,i
TARGET = hw1_b_i
CXXFLAGS = -std=c++11 -Wall -Wshadow -Wvla -pedantic -O3
GPP = g++ $(CXXFLAGS)

SRCS = HW1.cpp Automobile.cpp

OBJS = $(SRCS:%.cpp=%.o)

$(TARGET): $(OBJS)
	$(GPP) $(OBJS) -o $(TARGET)

.cpp.o:
	$(GPP) $(TESTFLAGS) -c $*.cpp

clean:
	rm -f $(OBJS) $(TARGET) valgrind?.log  *.b