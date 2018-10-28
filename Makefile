test: linux-kbhit.o main.o
	g++ -o test linux-kbhit.o main.o

linux-kbhit.o: linux-kbhit.h linux-kbhit.cpp

main.o: linux-kbhit.h main.cpp

.PHONY : clean
clean :
	-rm linux-kbhit.o main.o test


