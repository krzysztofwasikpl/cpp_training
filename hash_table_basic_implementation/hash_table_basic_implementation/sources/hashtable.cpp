//
//  hashtable.cpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <stdio.h>
#include "hashtable.hpp"


LinkedList[10]
HashTable::insert(unsigned int& key, Person& value)
{
    auto hash = HashCode().getHash(key);
    unsigned int tableSize= 10;
    auto tableIndex =  HashCode().convertToIndex(hash, tableSize);
    data[tableIndex].insert(value);
//
//    Person* p1 = new Person("t1","t1",10);
//    Person* p2 = new Person("t2","t2",20);
//
//
//    auto l1= new LinkedList();
//    l1->insert(*p1);
//
//    auto l2= new LinkedList();
//    l2->insert(*p2);
//
//    data[0].insert(*p1);
//    data[1].insert(*p2);
    return data;
};

void
HashTable::find(unsigned int& key, Person& value)
{
    
};

void
HashTable::remove(unsigned int& key, Person& value)
{
    
};
