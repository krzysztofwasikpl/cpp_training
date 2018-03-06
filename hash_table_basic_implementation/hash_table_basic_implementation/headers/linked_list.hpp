//
//  linked_list.hpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef linked_list_h
#define linked_list_h

#include "person.hpp"

struct Node
{
    Person data;
    Node *next;
};

class LinkedList
{
    Node *head,*tail;
    
public:
    LinkedList() : head(nullptr), tail(nullptr){};
    Node insert(const Person& person);
    bool remove(Node& node);
    Node* find(Node& node);
    int size();
    Node* begin();
    Node* end();
};

#endif /* linked_list_h */
