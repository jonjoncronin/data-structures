#include <stddef.h>
#include "linkedList_pub.h"
#include "gtest.h"

TEST(CreateListTest, True)
{
   linkedList *someList = NULL;
   EXPECT_EQ((linkedList*)0,someList);

   someList = linkedListCreateList(1);
   EXPECT_NE((linkedList*)0,someList);
   EXPECT_EQ(0, someList->length);
}
