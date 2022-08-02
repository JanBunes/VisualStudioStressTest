#include <gtest/gtest.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <cstdlib>

int global_var = 21;

void SleepMs(int ms)
{
   std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void BigTest_000_Sleep(int sleepTime = 1)
{
   SleepMs(sleepTime * 50);
   EXPECT_EQ(21, global_var);
   global_var++;
   SleepMs(sleepTime*50);
   EXPECT_EQ(22, global_var);
}

TEST(BigTest_000, Test_0000000)
{
   BigTest_000_Sleep(1);
}

TEST(BigTest_000, Test_0000001)
{
   BigTest_000_Sleep(2);
}

TEST(BigTest_000, Test_0000002)
{
   BigTest_000_Sleep(3);
}

TEST(BigTest_000, Test_0000003)
{
   BigTest_000_Sleep(4);
}

TEST(BigTest_000, Test_0000004)
{
   BigTest_000_Sleep(5);
}

TEST(BigTest_000, Test_0000005)
{
   BigTest_000_Sleep(6);
}

TEST(BigTest_000, Test_0000006)
{
   BigTest_000_Sleep(7);
}

TEST(BigTest_000, Test_0000007)
{
   BigTest_000_Sleep(8);
}

TEST(BigTest_000, Test_0000008)
{
   BigTest_000_Sleep(9);
}

TEST(BigTest_000, Test_0000009)
{
   BigTest_000_Sleep(10);
}

TEST(BigTest_000, Test_0000010)
{
   BigTest_000_Sleep(1);
}

TEST(BigTest_000, Test_0000011)
{
   BigTest_000_Sleep(2);
}

TEST(BigTest_000, Test_0000012)
{
   BigTest_000_Sleep(3);
}

TEST(BigTest_000, Test_0000013)
{
   BigTest_000_Sleep(4);
}

TEST(BigTest_000, Test_0000014)
{
   BigTest_000_Sleep(5);
}

TEST(BigTest_000, Test_0000015)
{
   BigTest_000_Sleep(6);
}

TEST(BigTest_000, Test_0000016)
{
   BigTest_000_Sleep(7);
}

TEST(BigTest_000, Test_0000017)
{
   BigTest_000_Sleep(8);
}

TEST(BigTest_000, Test_0000018)
{
   BigTest_000_Sleep(9);
}

TEST(BigTest_000, Test_0000019)
{
   BigTest_000_Sleep(10);
}

TEST(BigTest_000, Test_0000020)
{
   BigTest_000_Sleep(11);
}

TEST(BigTest_000, Test_0000021)
{
   BigTest_000_Sleep(12);
}

TEST(BigTest_000, Test_0000022)
{
   BigTest_000_Sleep(13);
}

TEST(BigTest_000, Test_0000023)
{
   BigTest_000_Sleep(14);
}

TEST(BigTest_000, Test_0000024)
{
   BigTest_000_Sleep(15);
}
