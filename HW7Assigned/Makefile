# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = Int.o Node.o main.o
CC =g++
INCLUDE =
LIBS =
CXXFLAGS =-std=c++11 -Wall -g
EXECUTABLE = HW7
COMMANDLINE =
VALGRIND = valgrind --leak-check=full --verbose --log-file

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

cleanmake : clean $(EXECUTABLE)

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.c
	$(CC) -c $@ $(INCLUDE) $(LIBS)

testmemory:
	$(CC) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS) #Added -g for debugger flag
	$(VALGRIND)=./valgrind1.log ./$(EXECUTABLE)

clean :
	rm -rf $(EXECUTABLE) ${OBJS} valgrind?.log
