CC=gcc
CFLAGS= -Werror -pedantic -std=c99
DIR=../linkedList
CFILES=linkedList.c
GTEST_DIR=../gtest_src/gtest

all:
	g++ -isystem ${GTEST_DIR} -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/gtest-all.cc
	ar -rv libgtest.a gtest-all.o
	gcc ${CFLAGS} -I../include -c ${DIR}/${CFILES}
	ar -rv liblinkedList.a linkedList.o
	g++ -isystem ${GTEST_DIR} -I../include -pthread ${DIR}/test/linkedList_test.cc liblinkedList.a libgtest.a -o linkedList_test

clean:
	rm -f *_test *.a *.o

unittest:
	./linkedList_test