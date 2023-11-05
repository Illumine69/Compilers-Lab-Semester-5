run: a.out
	./a.out < Test_Inputs/ass6_21CS10057_21CS30058_test1.c > 3_Address_Test_Outputs/ass6_21CS10057_21CS30058_quads1.out
	./a.out < Test_Inputs/ass6_21CS10057_21CS30058_test2.c > 3_Address_Test_Outputs/ass6_21CS10057_21CS30058_quads2.out
	./a.out < Test_Inputs/ass6_21CS10057_21CS30058_test3.c > 3_Address_Test_Outputs/ass6_21CS10057_21CS30058_quads3.out
	./a.out < Test_Inputs/ass6_21CS10057_21CS30058_test4.c > 3_Address_Test_Outputs/ass6_21CS10057_21CS30058_quads4.out
	./a.out < Test_Inputs/ass6_21CS10057_21CS30058_test5.c > 3_Address_Test_Outputs/ass6_21CS10057_21CS30058_quads5.out

a.out : y.tab.c lex.yy.o ass6_21CS10057_21CS30058_translator.h y.tab.o
	g++ -std=c++17 -w ass6_21CS10057_21CS30058_translator.cxx y.tab.o lex.yy.o -ll

lex.yy.o:lex.yy.c
	g++ -std=c++17 -c lex.yy.c 

y.tab.o:y.tab.c
	g++ -std=c++17 -c y.tab.c

lex.yy.c : y.tab.h ass6_21CS10057_21CS30058.l
	flex ass6_21CS10057_21CS30058.l

y.tab.c y.tab.h: ass6_21CS10057_21CS30058.y
	bison -dy ass6_21CS10057_21CS30058.y
clean:
	rm *tab* *yy* *.out *.output