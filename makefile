compile: linkedlist.o
	gcc linkedlist.o
linkedlist.o: linkedlist.c myheaders.h
	gcc -c linkedlist.c
clean:
	rm *.o
	rm *~
run: compile
	./a.out
