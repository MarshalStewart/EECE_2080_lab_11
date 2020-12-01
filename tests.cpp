#include <gtest/gtest.h>
#include "ADT.cpp"

using namespace std;


TEST(Chair, getSit)
{
    Chair c;
    ASSERT_TRUE(c.getIndicatorSit());
    
}

TEST(Chair, getDestroy)
{
    Chair c;
    ASSERT_TRUE(c.getIndicatorDestroy());
}

TEST(Chair, Sit)
{
    try
    {
        Chair c;
        c.sit();
        ASSERT_TRUE(true);
    }
    catch(FailedSit& e)
    {
        std::cout << e.what() << '\n';
        ASSERT_TRUE(false);
    }
}

TEST(Chair, Destroy)
{
    try
    {
        Chair c;
        c.destroy();
        ASSERT_TRUE(true);
    }
    catch(FailedDestroy& e)
    {
        std::cout << e.what() << '\n';
        ASSERT_TRUE(false);
    }
}

TEST(Statue, getSit)
{
    Statue s;
    ASSERT_FALSE(s.getIndicatorSit());
    
}

TEST(Statue, getDestroy)
{
    Statue s;
    ASSERT_FALSE(s.getIndicatorDestroy());
}

TEST(Statue, Sit)
{
    try
    {
        Statue s;
        s.sit();
        ASSERT_TRUE(false);
    }
    catch(FailedSit& e)
    {
        std::cout << e.what() << '\n';
        ASSERT_TRUE(true);
    }
}

TEST(Statue, Destroy)
{
    try
    {
        Statue s;
        s.destroy();
        ASSERT_TRUE(false);
    }
    catch(FailedDestroy& e)
    {
        std::cout << e.what() << '\n';
        ASSERT_TRUE(true);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}