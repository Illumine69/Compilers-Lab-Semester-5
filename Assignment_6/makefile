compiler.out: lex.yy.c ass6_21CS10057_21CS30058.tab.c ass6_21CS10057_21CS30058_translator.o ass6_21CS10057_21CS30058_target_translator.cxx
	g++ -std=c++17 lex.yy.c ass6_21CS10057_21CS30058.tab.c ass6_21CS10057_21CS30058_translator.o ass6_21CS10057_21CS30058_target_translator.cxx -ll -o compiler
	@echo "\n-------------------------------------------------------------------"
	@echo "Compiler generated"
	@echo "Run 'make test' to test"

ass6_21CS10057_21CS30058_translator.o: ass6_21CS10057_21CS30058_translator.h ass6_21CS10057_21CS30058_translator.cxx
	g++ -std=c++17 -c ass6_21CS10057_21CS30058_translator.h
	g++ -std=c++17 -c ass6_21CS10057_21CS30058_translator.cxx

lex.yy.c: ass6_21CS10057_21CS30058.l ass6_21CS10057_21CS30058.tab.h ass6_21CS10057_21CS30058_translator.h
	flex ass6_21CS10057_21CS30058.l

ass6_21CS10057_21CS30058.tab.c: ass6_21CS10057_21CS30058.y
	bison -dtv ass6_21CS10057_21CS30058.y

ass6_21CS10057_21CS30058.tab.h: ass6_21CS10057_21CS30058.y
	bison -dtv ass6_21CS10057_21CS30058.y

libass6_21CS10057_21CS30058.a: ass6_21CS10057_21CS30058.o
	ar -rcs libass6_21CS10057_21CS30058.a ass6_21CS10057_21CS30058.o

ass6_21CS10057_21CS30058.o: ass6_21CS10057_21CS30058.c myl.h
	gcc -c ass6_21CS10057_21CS30058.c

test: compiler.out libass6_21CS10057_21CS30058.a
	@mkdir -p outputs
	@mkdir -p binary_target
	
	./compiler 1 < inputs/ass6_21CS10057_21CS30058_test1.c > outputs/ass6_21CS10057_21CS30058_TAC_1.out
	mv ass6_21CS10057_21CS30058_1.s outputs/ass6_21CS10057_21CS30058_1.s
	gcc outputs/ass6_21CS10057_21CS30058_1.s -o binary_target/test1 -L. -lass6_21CS10057_21CS30058 -no-pie

	./compiler 2 < inputs/ass6_21CS10057_21CS30058_test2.c > outputs/ass6_21CS10057_21CS30058_TAC_2.out
	mv ass6_21CS10057_21CS30058_2.s outputs/ass6_21CS10057_21CS30058_2.s
	gcc outputs/ass6_21CS10057_21CS30058_2.s -o binary_target/test2 -L. -lass6_21CS10057_21CS30058 -no-pie

	./compiler 3 < inputs/ass6_21CS10057_21CS30058_test3.c > outputs/ass6_21CS10057_21CS30058_TAC_3.out
	mv ass6_21CS10057_21CS30058_3.s outputs/ass6_21CS10057_21CS30058_3.s	
	gcc outputs/ass6_21CS10057_21CS30058_3.s -o binary_target/test3 -L. -lass6_21CS10057_21CS30058 -no-pie

	./compiler 4 < inputs/ass6_21CS10057_21CS30058_test4.c > outputs/ass6_21CS10057_21CS30058_TAC_4.out
	mv ass6_21CS10057_21CS30058_4.s outputs/ass6_21CS10057_21CS30058_4.s
	gcc outputs/ass6_21CS10057_21CS30058_4.s -o binary_target/test4 -L. -lass6_21CS10057_21CS30058 -no-pie

	./compiler 5 < inputs/ass6_21CS10057_21CS30058_test5.c > outputs/ass6_21CS10057_21CS30058_TAC_5.out
	mv ass6_21CS10057_21CS30058_5.s outputs/ass6_21CS10057_21CS30058_5.s
	gcc outputs/ass6_21CS10057_21CS30058_5.s -o binary_target/test5 -L. -lass6_21CS10057_21CS30058 -no-pie

	./compiler 6 < inputs/float_check.c> outputs/ass6_21CS10057_21CS30058_TAC_6.out
	mv ass6_21CS10057_21CS30058_6.s outputs/ass6_21CS10057_21CS30058_5.s
	gcc outputs/ass6_21CS10057_21CS30058_5.s -o binary_target/test5 -L. -lass6_21CS10057_21CS30058 -no-pie

	@echo "\n-------------------------------------------------------------------"
	@echo "Testing finished! binaries are available in binary_target folder"
	@echo "Run './binary_target/testx' to run the test cases"
	
clean:
	rm lex.yy.c *.tab.c *.tab.h *.output *.o *.a *.gch compiler
