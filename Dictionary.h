// RIP Ilan 2020-2020
// He liked remove functions

#pragma once
#include <memory>
#include <vector>
#include <string>
#include <iostream>

#define MAX_DICT_SIZE 25001

class Node
{
public:
    Node() {};
    Node(std::shared_ptr<Node> nxt, std::string payload) : m_nxt(nxt), m_payload(payload) {}
    void setNxt(std::shared_ptr<Node> nxt) { m_nxt = nxt; }
    void setPayload(std::string payload) { m_payload = payload; }
    std::shared_ptr<Node> getNxt() { return m_nxt; }
    std::string getPayload() { return m_payload; }
private:
    std::shared_ptr<Node> m_nxt;
    std::string m_payload;
};

class IDictionary
{
public:
    // Adds an item to the list
    virtual bool addItem(std::shared_ptr<Node> node) = 0; 
    
    // searches the list for the given item.  If found, it removes it from the list and returns it.  If not found, it returns a null pointer.
//    virtual bool removeItem(std::shared_ptr<Node> node) = 0;

    // searches the list for a given item.  If found, it returns a pointer to the item but doesn’t remove it from the list.
    virtual std::shared_ptr<Node> getItem(std::string payload) = 0;

    // returns an int indicating the number of items in the table.
    virtual int getLength() = 0;

private:
    // This should be a private function that accepts a int and returns an int.  For this, we are going to take the modulus by the maximum size of the table.
    virtual int hash(int val) = 0;

};


class Dictionary : IDictionary
{
public:
    Dictionary() : m_size(100) {} 
    Dictionary(int size) : m_size(size) {}

    bool addItem(std::shared_ptr<Node> node) override;
    // bool removeItem(std::shared_ptr<Node> node) override;
    std::shared_ptr<Node> getItem(std::string payload) override; 
    int getLength() override;

    std::string printDict();

private:
    int hash(int val) override;
    std::shared_ptr<Node> hash_table[MAX_DICT_SIZE];
    int m_size;

};