CC=gcc
CFLAGS= -Werror -pedantic -std=c99 -fprofile-arcs -ftest-coverage
GTEST_DIR=../gtest_src/gtest
INCLUDES= -I../include

linkedList:
	gcc ${CFLAGS} -I../include -c ../linkedList/linkedList.c
	ar -rv liblinkedList.a linkedList.o
	g++ -isystem ${GTEST_DIR} -I../include -fprofile-arcs -ftest-coverage -pthread ../linkedList/test/linkedList_test.cc liblinkedList.a gtest_main.a -o linkedList_test

trie:
	gcc ${CFLAGS} -I../include -c ../trie/trie.c
	ar -rv libtrie.a trie.o
#	g++ -isystem ${GTEST_DIR} -I../include -fprofile-arcs -ftest-coverage -pthread ../trie/test/trie_test.cc libtrie.a gtest_main.a -o trie_test

gtest:
	g++ -isystem ${GTEST_DIR} -I${GTEST_DIR} -c ${GTEST_DIR}/gtest-all.cc
	ar -rv gtest.a gtest-all.o
	g++ -isystem ${GTEST_DIR} -I${GTEST_DIR} -c ${GTEST_DIR}/gtest_main.cc
	ar -rv gtest_main.a gtest-all.o gtest_main.o

all: gtest trie linkedList 

clean:
	rm -f *_test *.a *.o *.gcov *.gcda *.gcno

unittest:
	./linkedList_test
	gcov -b ./linkedList.c
