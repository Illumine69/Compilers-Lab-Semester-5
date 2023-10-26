run: a.out
	./a.out < Test_Inputs/ass5_21CS10057_21CS30058_test1.c > Test_Outputs/ass5_21CS10057_21CS30058_quads1.out
	./a.out < Test_Inputs/ass5_21CS10057_21CS30058_test2.c > Test_Outputs/ass5_21CS10057_21CS30058_quads2.out
	./a.out < Test_Inputs/ass5_21CS10057_21CS30058_test3.c > Test_Outputs/ass5_21CS10057_21CS30058_quads3.out
	./a.out < Test_Inputs/ass5_21CS10057_21CS30058_test4.c > Test_Outputs/ass5_21CS10057_21CS30058_quads4.out
	./a.out < Test_Inputs/ass5_21CS10057_21CS30058_test5.c > Test_Outputs/ass5_21CS10057_21CS30058_quads5.out

a.out : y.tab.c lex.yy.c ass5_21CS10057_21CS30058_translator.h
	g++ ass5_21CS10057_21CS30058_translator.cxx y.tab.c lex.yy.c -lfl

lex.yy.c : y.tab.h ass5_21CS10057_21CS30058.l
	flex ass5_21CS10057_21CS30058.l

y.tab.c y.tab.h: ass5_21CS10057_21CS30058.y
	bison -dy ass5_21CS10057_21CS30058.y
clean:
	rm *tab* *yy* a.out