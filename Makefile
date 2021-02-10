#Standard compiler variables
CC=g++
CCFLAGS=  -std=c++11

#Rules starts from here
all: perfectNumsList

perfectNumsList: divisors.o checkPerfect.o getPerfectNums.o
	$(CC) $(CCFLAGS) -o perfectNumsList divisors.o checkPerfect.o getPerfectNums.o

getPerfectNums.o: getPerfectNums.cc perfectNums.h
	$(CC) $(CCFLAGS) -c -Wall getPerfectNums.cc

checkPerfect.o: checkPerfect.cc perfectNums.h
	$(CC) $(CCFLAGS) -c -Wall checkPerfect.cc

divisors.o: divisors.cc perfectNums.h
	$(CC) $(CCFLAGS) -c -Wall divisors.cc

clear:
	-rm *.o perfectNumsList

run:
	./perfectNumsList
