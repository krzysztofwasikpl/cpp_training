//
//  linked_list.cpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <stdio.h>
#include "linked_list.hpp"

Node
LinkedList::insert(const Person& person)
{
    Node tmp = {person, nullptr};
    
    if(head == nullptr)
    {
        head = &tmp;
        tail = &tmp;
    }
    else
    {
        tail->next = &tmp;
        tail = &tmp;
    }
    return tmp;
};

/*
 remove case scenarios: item is first in the list, item is last in the list, item is in the middle of the list
 todo: check what happens with structure object when there is no pointers poiting to that structure object, allocation static
 */

bool
LinkedList::remove(Node& node)
{
    // find pointer to node that is targeted to be remove
    // from targeted node acquire pointer to next item in list
    auto operationStatus = false;
    auto nodeToRemove = Node{node.data, node.next};
    auto foundNodeToRemove = find(node);
    auto nextNodeAfterNodeToRemove = foundNodeToRemove->next;
    auto it = begin();
    
    if(head == foundNodeToRemove)
    {
        head = foundNodeToRemove->next;
        operationStatus = true;
    }
    else if(tail == foundNodeToRemove)
    {
        // find earlier node using next member that point to targeted node
        Node* earlierNode = nullptr;
        while(it != nullptr)
        {
            if(it->next == foundNodeToRemove)
            {
                earlierNode = it;
                break;
            }
            
            it = it->next;
        }
        
        it->next = nullptr;
        tail = it;
        operationStatus = true;
    }
    else
    {
        // find earlier node using next member that point to targeted node
        Node* earlierNode = nullptr;
        while(it != nullptr)
        {
            if(it->next == foundNodeToRemove)
            {
                earlierNode = it;
                break;
            }
            
            it = it->next;
        }
        
        earlierNode->next = nextNodeAfterNodeToRemove;
        operationStatus = true;
    }
    
    return operationStatus;
};

Node*
LinkedList::find(Node& node)
{
    
    Node* tmp = nullptr;
    
    auto it = begin();
    
    while(it != nullptr)
    {
        if(node.data == it->data)
        {
            tmp = it;
            break;
        }
        it = it->next;
    }
    
    return tmp;
};

int
LinkedList::size()
{
    auto it = begin();
    int size = 0;
  
    while(it != nullptr)
    {
        size++;
        it = it->next;
    }
    
    return size;
};

Node*
LinkedList::begin()
{
    return head;
};

Node*
LinkedList::end()
{
    return tail;
};

