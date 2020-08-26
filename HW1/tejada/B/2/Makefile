#Makefile for Homework 1 part B,ii
TARGET = hw1_b_ii
CXXFLAGS = -std=c++11 -Wall -Wshadow -Wvla -pedantic -O3
GPP = g++ $(CXXFLAGS)

SRCS = HW1.cpp Automobile2.cpp

OBJS = $(SRCS:%.cpp=%.o)

#Run homework immediately after compilation.
$(TARGET): $(OBJS)
	$(GPP) $(OBJS) -o $(TARGET)
	./$(TARGET)

.cpp.o:
	$(GPP) $(TESTFLAGS) -c $*.cpp

clean:
	rm -f $(OBJS) $(TARGET)