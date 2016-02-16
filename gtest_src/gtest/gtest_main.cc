/*
 * gtest_main.cc
 *
 *  Created on: Feb 15, 2016
 *      Author: joncronin
 */
#include <stdio.h>
#include "gtest.h"

int main(int argc, char **argv)
{
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
