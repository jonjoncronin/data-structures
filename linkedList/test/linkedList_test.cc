#include <stddef.h>
#include "linkedList_pub.h"
#include "gtest.h"

typedef struct _dummyObj
{
   int value;
}dummyObj;

TEST(CreateListTestSuccess, True)
{
   linkedList *someList = NULL;
   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(1);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);
}

TEST(DeleteListTestSuccess, True)
{
   int result = 0;
   linkedList *someList = NULL;
   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(1);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListDeleteList(someList);
   EXPECT_EQ(1,result);
   EXPECT_EQ((linkedListNode*)0, someList->headPtr);
}

TEST(DeleteListTestFailure, True)
{
   int result = 0;
   linkedList *someList = NULL;
   EXPECT_EQ((linkedList*)0,someList);

   result = linkedListDeleteList(someList);
   EXPECT_EQ(-1,result);
}

TEST(AddEntryToHeadTestSuccess, True)
{
   int result = 0;
   dummyObj someObj = {0};
   linkedList *someList = NULL;
   linkedListNode someNode = {0};

   someObj.value = 101;
   someNode.data = &someObj;
   someNode.dataSize = sizeof(someObj.value);

   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(10);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListGetLength(someList);
   EXPECT_EQ(0,result);

   result = linkedListAddEntryToHead(someList, &someNode);
   EXPECT_EQ(1,result);
}

TEST(AddEntryToTailTestSuccess, True)
{
   int result = 0;
   dummyObj someObj = {0};
   linkedList *someList = NULL;
   linkedListNode someNode = {0};

   someObj.value = 101;
   someNode.data = &someObj;
   someNode.dataSize = sizeof(someObj.value);

   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(10);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListGetLength(someList);
   EXPECT_EQ(0,result);

   result = linkedListAddEntryToTail(someList, &someNode);
   EXPECT_EQ(1,result);
}

TEST(DoesEntryExistSuccess, True)
{
   int result = 0;
   dummyObj someObj = {0};
   dummyObj anotherObj = {0};
   linkedList *someList = NULL;
   linkedListNode someNode = {0};
   linkedListNode anotherNode = {0};
   linkedListNode prevNode = {0};

   someObj.value = anotherObj.value = 101;
   someNode.data = &someObj;
   anotherNode.data = &anotherObj;
   someNode.dataSize = sizeof(someObj.value);
   anotherNode.dataSize = sizeof(anotherObj.value);

   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(10);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListAddEntryToHead(someList, &someNode);
   EXPECT_EQ(1,result);

   result = linkedListDoesEntryExist(someList,&anotherNode, &prevNode);
   EXPECT_EQ(1,result);
}

TEST(DoesEntryExistFailure, True)
{
   int result = 0;
   dummyObj someObj = {0};
   dummyObj anotherObj = {0};
   linkedList *someList = NULL;
   linkedListNode someNode = {0};
   linkedListNode anotherNode = {0};
   linkedListNode *prevNode = &someNode;

   someObj.value = 101;
   anotherObj.value = 102;
   someNode.data = &someObj;
   anotherNode.data = &anotherObj;
   someNode.dataSize = sizeof(someObj.value);
   anotherNode.dataSize = sizeof(anotherObj.value);

   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(10);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListAddEntryToHead(someList, &someNode);
   EXPECT_EQ(1,result);

   result = linkedListDoesEntryExist(someList,&anotherNode, prevNode);
   EXPECT_EQ(0,result);
}

TEST(GetMaxLenTestSuccess, True)
{
   int result = 0;
   linkedList *someList = NULL;
   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(10);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListGetMaxSize(someList);
   EXPECT_EQ(10,result);
}

TEST(GetLenTestSuccess, True)
{
   int result = 0;
   linkedList *someList = NULL;
   linkedListNode someNode = {0};

   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(10);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);

   result = linkedListGetLength(someList);
   EXPECT_EQ(0,result);

   result = linkedListAddEntryToHead(someList, &someNode);
   EXPECT_EQ(1,result);

   result = linkedListGetLength(someList);
   EXPECT_EQ(1,result);
}
