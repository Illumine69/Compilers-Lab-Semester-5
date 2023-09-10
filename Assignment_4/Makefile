run : a.out
	./a.out <ass4_ass4_21CS10057_21CS30058_test.c

a.out : y.tab.c lex.yy.c 
	gcc y.tab.c lex.yy.c -ll

y.tab.c : ass4_21CS10057_21CS30058.y
	bison ass4_21CS10057_21CS30058.y

lex.yy.c : y.tab.h ass4_21CS10057_21CS30058.l
	flex ass4_21CS10057_21CS30058.l 

y.tab.h : y.tab.c