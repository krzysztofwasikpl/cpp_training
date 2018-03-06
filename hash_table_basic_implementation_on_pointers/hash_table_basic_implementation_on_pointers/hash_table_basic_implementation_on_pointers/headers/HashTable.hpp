#pragma once
#include "LinkedList.hpp"

class HashTable
{
    LinkedList* data_[2];

public:
    HashTable ();
    ~HashTable ();
    void insert (Person* person, unsigned int tableIndex);
    Node* find (Person* person);
};