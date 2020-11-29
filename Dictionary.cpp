#include "Dictionary.h"
#include <string>

int Dictionary::hash(int val)
{
    return val % m_size;
}

bool Dictionary::addItem(std::shared_ptr<Node> node)
{
    // linear probing: if can't add at preferred index, check index++ until you find an empty spot
    int val = 0;
    int og_index = 0;
    int index = 0;

    if (node == nullptr)
        return false;

    val = std::stoi(node->getPayload());
    index = hash(val);
    og_index = index;
    while (hash_table[index] != nullptr)
    {   
        index++;
        
        if (index == m_size)
            index = 0;

        if (index == og_index)
            return false;
    }

    hash_table[index] = node;
    return true;
}

std::shared_ptr<Node> Dictionary::getItem(std::string payload)
{
    
    // start at the hash where it ought to be, index until you get through the whole thing and return false if you don't find it
    // since we don't have a remove function, you can just check if the hash is empty, and if it is, then it won't be in the graph
    int val = std::stoi(payload);
    int index = hash(val);
    int og_index = index;
    while (1)
    {
        if (hash_table[index] == nullptr)
        {
            return nullptr;
        }
        else if (hash_table[index]->getPayload() == payload)
        {
            return hash_table[index];
        }

        index++;

        if (index == m_size)
            index = 0;

        if (index == og_index)
            return nullptr;
    }
    
}

int Dictionary::getLength()
{
    int count = 0;
    for (int i=0; i<m_size; i++)
    {
        if (hash_table[i] != nullptr)
            count++;
    }

    return count;
}

std::string Dictionary::printDict()
{
    std::string str = "";
    for (int i=0; i<m_size; i++)
    {
        if (hash_table[i] == nullptr)
            continue;

        str += hash_table[i]->getPayload();
        str += " ";
    }
    return str;
}



