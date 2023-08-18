
a.out: main.o libass2_21CS10057.a
	gcc -Wall main.o -L. -lass2_21CS10057

libass2_21CS10057.a: ass2_21CS10057.o
	ar -rcs libass2_21CS10057.a ass2_21CS10057.o

main.o: main.c myl.h
	gcc -Wall -c main.c

ass2_21CS10057.o:	ass2_21CS10057.c myl.h
	gcc -Wall -c ass2_21CS10057.c	

clean:
	rm a.out main.o libass2_21CS10057.a ass2_21CS10057.o