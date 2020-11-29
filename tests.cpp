#include <gtest/gtest.h>
#include "Dictionary.cpp"
#include <random>
#include <iostream>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;


static int randomData[5001] = {0};
std::string timer = "";


TEST(Dict, init)
{
    auto node = make_shared<Node>();
    Dictionary dict();

}

TEST(Dict, addItem_1)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    dict.addItem(node_1);
    dict.addItem(node_2);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 ");

}

TEST(Dict, addItem_2)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    auto node_3 = std::make_shared<Node>(nullptr, "3");
    auto node_4 = std::make_shared<Node>(nullptr, "4");
    auto node_5 = std::make_shared<Node>(nullptr, "5");
    auto node_6 = std::make_shared<Node>(nullptr, "6");
    auto node_7 = std::make_shared<Node>(nullptr, "7");
    auto node_8 = std::make_shared<Node>(nullptr, "8");
    auto node_9 = std::make_shared<Node>(nullptr, "9");
    auto node_10 = std::make_shared<Node>(nullptr, "10");
    auto node_11 = std::make_shared<Node>(nullptr, "11");
    auto node_12 = std::make_shared<Node>(nullptr, "12");
    auto node_13 = std::make_shared<Node>(nullptr, "13");
    auto node_14 = std::make_shared<Node>(nullptr, "14");
    dict.addItem(node_1);
    dict.addItem(node_2);
    dict.addItem(node_3);
    dict.addItem(node_4);
    dict.addItem(node_5);
    dict.addItem(node_6);
    dict.addItem(node_7);
    dict.addItem(node_8);
    dict.addItem(node_9);
    dict.addItem(node_10);
    dict.addItem(node_11);
    dict.addItem(node_12);
    dict.addItem(node_13);
    dict.addItem(node_14);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 3 4 5 6 7 8 9 10 11 12 13 14 ");
}

TEST(Dict, hash_1)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "1");
    dict.addItem(node_1);
    dict.addItem(node_2);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 1 ");

}

TEST(Dict, hash_2)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    auto node_3 = std::make_shared<Node>(nullptr, "3");
    auto node_4 = std::make_shared<Node>(nullptr, "4");
    auto node_5 = std::make_shared<Node>(nullptr, "5");
    auto node_6 = std::make_shared<Node>(nullptr, "6");
    auto node_7 = std::make_shared<Node>(nullptr, "7");
    auto node_8 = std::make_shared<Node>(nullptr, "8");
    auto node_9 = std::make_shared<Node>(nullptr, "9");
    auto node_10 = std::make_shared<Node>(nullptr, "10");
    auto node_11 = std::make_shared<Node>(nullptr, "11");
    auto node_12 = std::make_shared<Node>(nullptr, "12");
    auto node_13 = std::make_shared<Node>(nullptr, "13");
    auto node_14 = std::make_shared<Node>(nullptr, "14");
    dict.addItem(node_14);
    dict.addItem(node_2);
    dict.addItem(node_6);
    dict.addItem(node_1);
    dict.addItem(node_3);
    dict.addItem(node_13);
    dict.addItem(node_9);
    dict.addItem(node_4);
    dict.addItem(node_11);
    dict.addItem(node_7);
    dict.addItem(node_12);
    dict.addItem(node_8);
    dict.addItem(node_10);
    dict.addItem(node_5);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 3 4 5 6 7 8 9 10 11 12 13 14 ");
}

TEST(Dict, getItem_1)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    dict.addItem(node_1);
    dict.addItem(node_2);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 ");

    auto my_node = dict.getItem(node_2->getPayload());
    ASSERT_EQ(my_node->getPayload(), node_2->getPayload());


}

TEST(Dict, getItem_2)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    auto node_3 = std::make_shared<Node>(nullptr, "3");
    auto node_4 = std::make_shared<Node>(nullptr, "4");
    auto node_5 = std::make_shared<Node>(nullptr, "5");
    auto node_6 = std::make_shared<Node>(nullptr, "6");
    auto node_7 = std::make_shared<Node>(nullptr, "7");
    auto node_8 = std::make_shared<Node>(nullptr, "8");
    auto node_9 = std::make_shared<Node>(nullptr, "9");
    auto node_10 = std::make_shared<Node>(nullptr, "10");
    auto node_11 = std::make_shared<Node>(nullptr, "11");
    auto node_12 = std::make_shared<Node>(nullptr, "12");
    auto node_13 = std::make_shared<Node>(nullptr, "13");
    auto node_14 = std::make_shared<Node>(nullptr, "14");
    dict.addItem(node_1);
    dict.addItem(node_2);
    dict.addItem(node_3);
    dict.addItem(node_4);
    dict.addItem(node_5);
    dict.addItem(node_6);
    dict.addItem(node_7);
    dict.addItem(node_8);
    dict.addItem(node_9);
    dict.addItem(node_10);
    dict.addItem(node_11);
    dict.addItem(node_12);
    dict.addItem(node_13);
    dict.addItem(node_14);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 3 4 5 6 7 8 9 10 11 12 13 14 ");
    
    auto my_node = dict.getItem(node_2->getPayload());
    ASSERT_EQ(my_node->getPayload(), node_2->getPayload());
}

TEST(Dict, getLength_1)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    dict.addItem(node_1);
    dict.addItem(node_2);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 ");

    auto my_node = dict.getItem(node_2->getPayload());
    ASSERT_EQ(my_node->getPayload(), node_2->getPayload());

    ASSERT_EQ(dict.getLength(), 2);

}

TEST(Dict, getLength_2)
{
    Dictionary dict(100);
    auto node_1 = std::make_shared<Node>(nullptr, "1");
    auto node_2 = std::make_shared<Node>(nullptr, "2");
    auto node_3 = std::make_shared<Node>(nullptr, "3");
    auto node_4 = std::make_shared<Node>(nullptr, "4");
    auto node_5 = std::make_shared<Node>(nullptr, "5");
    auto node_6 = std::make_shared<Node>(nullptr, "6");
    auto node_7 = std::make_shared<Node>(nullptr, "7");
    auto node_8 = std::make_shared<Node>(nullptr, "8");
    auto node_9 = std::make_shared<Node>(nullptr, "9");
    auto node_10 = std::make_shared<Node>(nullptr, "10");
    auto node_11 = std::make_shared<Node>(nullptr, "11");
    auto node_12 = std::make_shared<Node>(nullptr, "12");
    auto node_13 = std::make_shared<Node>(nullptr, "13");
    auto node_14 = std::make_shared<Node>(nullptr, "14");
    dict.addItem(node_1);
    dict.addItem(node_2);
    dict.addItem(node_3);
    dict.addItem(node_4);
    dict.addItem(node_5);
    dict.addItem(node_6);
    dict.addItem(node_7);
    dict.addItem(node_8);
    dict.addItem(node_9);
    dict.addItem(node_10);
    dict.addItem(node_11);
    dict.addItem(node_12);
    dict.addItem(node_13);
    dict.addItem(node_14);

    std::string str = dict.printDict();
    ASSERT_EQ(str, "1 2 3 4 5 6 7 8 9 10 11 12 13 14 ");
    
    auto my_node = dict.getItem(node_2->getPayload());
    ASSERT_EQ(my_node->getPayload(), node_2->getPayload());
    
    ASSERT_EQ(dict.getLength(), 14);
}


TEST(Dict, FiveHundred)
{
    // run with table size: 750, 500, 1000, 2500
    Dictionary dict;

    int my_list[4] = {750, 500, 1000, 2500};

    for (auto size : my_list)
    {
        auto start = high_resolution_clock::now();
        auto stop = high_resolution_clock::now();

        dict = Dictionary(size);
        for (int i=0; i<500; i++)
        {
            auto node = std::make_shared<Node>(nullptr, std::to_string(randomData[i]));
            dict.addItem(node);
        }
        // report time
        stop = high_resolution_clock::now();
        timer += std::to_string(size) + " Dictionary: " + to_string(duration_cast<microseconds>(stop-start).count());
        timer += "\n";
    }
}

TEST(Dict, Thousand)
{
    // run with table size: 1500, 1000, 2000, 5000
    Dictionary dict;

    int my_list[4] = {1500, 1000, 2000, 5000};

    for (auto size : my_list)
    {
        auto start = high_resolution_clock::now();
        auto stop = high_resolution_clock::now();

        dict = Dictionary(size);
        for (int i=0; i<1000; i++)
        {
            auto node = std::make_shared<Node>(nullptr, std::to_string(randomData[i]));
            dict.addItem(node);
        }
        // report time
        stop = high_resolution_clock::now();
        timer += std::to_string(size) + " Dictionary: " + to_string(duration_cast<microseconds>(stop-start).count());
        timer += "\n";
    }
}

TEST(Dict, TwoThousand)
{
    // run with table size: 3000, 2000, 4000, 10000
    Dictionary dict;

    int my_list[4] = {3000, 2000, 4000, 10000};

    for (auto size : my_list)
    {
        auto start = high_resolution_clock::now();
        auto stop = high_resolution_clock::now();

        dict = Dictionary(size);
        for (int i=0; i<2000; i++)
        {
            auto node = std::make_shared<Node>(nullptr, std::to_string(randomData[i]));
            dict.addItem(node);
        }
        // report time
        stop = high_resolution_clock::now();
        timer += std::to_string(size) + " Dictionary: " + to_string(duration_cast<microseconds>(stop-start).count());
        timer += "\n";
    }
}

TEST(Dict, FiveThousand)
{
    // run with table size: 7500, 5000, 10000, 25000
    Dictionary dict;

    int my_list[4] = {7500, 5000, 10000, 25000};

    for (auto size : my_list)
    {
        auto start = high_resolution_clock::now();
        auto stop = high_resolution_clock::now();

        dict = Dictionary(size);
        for (int i=0; i<5000; i++)
        {
            auto node = std::make_shared<Node>(nullptr, std::to_string(randomData[i]));
            dict.addItem(node);
        }
        // report time
        stop = high_resolution_clock::now();
        timer += std::to_string(size) + " Dictionary: " + to_string(duration_cast<microseconds>(stop-start).count());
        timer += "\n";
    }
    std::cout << timer;

}

bool alreadyExists(int* data, size_t size, int payload)
{
    for (int i=0; i<size; i++)
    {
        if (data[i] == payload)
            return true;
    }

    return false;
}

int *getRandomData(int* data, size_t size)
{
    int randInt = 0;
    for (int i=0; i<size; i++)
    {
        randInt = rand() % size + 1; // can't be 0
        
        while (alreadyExists(data, size, randInt))
            randInt = rand() % size + 1;

        data[i] = randInt;

    }
    return data;
}


int main(int argc, char **argv) {

    srand(time(NULL));
    getRandomData(randomData, 5000);

    std::cout << timer << std::endl;

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}