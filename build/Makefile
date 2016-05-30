CC=gcc
CFLAGS= -Werror -pedantic -std=c99 -fprofile-arcs -ftest-coverage
DIR=../linkedList
CFILES=linkedList.c
GTEST_DIR=../gtest_src/gtest

all:
	g++ -isystem ${GTEST_DIR} -I${GTEST_DIR} -c ${GTEST_DIR}/gtest-all.cc
	ar -rv gtest.a gtest-all.o
	g++ -isystem ${GTEST_DIR} -I${GTEST_DIR} -c ${GTEST_DIR}/gtest_main.cc
	ar -rv gtest_main.a gtest-all.o gtest_main.o

	gcc ${CFLAGS} -I../include -c ${DIR}/${CFILES}
	ar -rv liblinkedList.a linkedList.o
	g++ -isystem ${GTEST_DIR} -I../include -fprofile-arcs -ftest-coverage -pthread ${DIR}/test/linkedList_test.cc liblinkedList.a gtest_main.a -o linkedList_test

clean:
	rm -f *_test *.a *.o *.gcov *.gcda *.gcno

unittest:
	./linkedList_test
	gcov -b ./linkedList.c
