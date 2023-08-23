run: a.out
	./a.out < ass3_21CS10057_21CS30058_test.c

stdrun: a.out
	./a.out

a.out: yylex.c
	gcc lex.yy.c  ass3_21CS10057_21CS30058.c -lfl

yylex.c:
	flex ass3_21CS10057_21CS30058.l

clean:
	rm a.out lex.yy.c