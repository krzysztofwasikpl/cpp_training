//
//  hashtable.hpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef hashtable_h
#define hashtable_h

#include <string>
#include <iostream>

#include "linked_list.hpp"
#include "hash_code.hpp"

class HashTableAbstract
{
public:
    virtual LinkedList [10] insert(unsigned int& key, Person& value) = 0;
    virtual void find(unsigned int& key, Person& value) = 0;
    virtual void remove(unsigned int& key, Person& value) = 0;
};

class HashTable :  public HashTableAbstract
{
    LinkedList data[10]={};
public:
    LinkedList [10] insert(unsigned int& key, Person& value);
    void find(unsigned int& key, Person& value);
    void remove(unsigned int& key, Person& value);
    
};

#endif /* hashtable_h */
