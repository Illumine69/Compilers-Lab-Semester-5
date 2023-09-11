run : a.out
	./a.out <ass4_21CS10057_21CS30058_test.c

stdrun : a.out
	./a.out <ass4_21CS10057_21CS30058_test.c > output.txt

a.out : y.tab.c lex.yy.c 
	gcc ass4_21CS10057_21CS30058.c y.tab.c lex.yy.c -lfl

y.tab.c y.tab.h : ass4_21CS10057_21CS30058.y
	bison -dy ass4_21CS10057_21CS30058.y

lex.yy.c : y.tab.h ass4_21CS10057_21CS30058.l
	flex ass4_21CS10057_21CS30058.l 

clean :
	rm *tab* *yy* a.out

