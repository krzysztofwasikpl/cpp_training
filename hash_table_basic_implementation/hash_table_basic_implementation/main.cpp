//
//  main.cpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

/*
 todo:
    done- linked list implementation with support for insert, delete, find operations
    - hash code function
    - function for calculating arrary index based on hash code
    - hash table with support for insert, delete, find operations
 */


#include <iostream>
#include "hashtable.hpp"
#include "person.hpp"
#include "key_generator.hpp"
#include "hash_code.hpp"

void PrintAllNodes(LinkedList& list)
{
    std::cout << "------ Stored persons ------" << std::endl;
    auto it = list.begin();
    do
    {
        std::cout << "person: "
        << it->data.getName() << " "
        << it->data.getSurname() << " |age: "
        << it->data.getAge() << std::endl;
        
        it = it->next;
    }while(it != nullptr);
}

int main(int argc, const char * argv[]) {
    std::cout << "application: hash_table_basic_implementation" << std::endl;
    
    auto keyGenerator = KeyGenerator();
    auto aniaLech = Person("ania","lech",30);
    auto hashCode = HashCode();
    auto list = LinkedList();
    auto list2 = LinkedList();
//
//    auto key = keyGenerator.generateKey();
//    auto hash = hashCode.getHash(key);
    auto hashTable = HashTable();
    
//    auto p1 = Person("kasia","wasik",30);
//    auto p2 = Person("marian","wasik",30);
    
  
    list.insert(Person("tmp","tmp",0));
    list.insert(Person("kasia","wasik",30));
    list2.insert(Person("marian","wasik",60));
//    PrintAllNodes(list);
    
//    std::cout << aniaLech.getName() << " " << aniaLech.getSurname() << " | age: " << aniaLech.getAge() << std::endl;
//    std::cout << "generated key: " << key << std::endl;
//    std::cout << "generated hash: " << hash << std::endl;
//
//    PrintAllNodes(list);
//
//    // UT - find iterator to first node in the list
//    auto it = list.begin();
//    std::cout << "first person in database is "
//    << it->data.getName() << " "
//    << it->data.getSurname() << std::endl;
//
//    // UT - find interator to last node in the list
//    auto lastItem = list.end();
//    std::cout << "last person in database is "
//    << lastItem->data.getName() << " "
//    << lastItem->data.getSurname() << std::endl;
//
//    std::cout << "Person database size: " << list.size() << std::endl;
//
//    // UT - find node based on data content in node
//    Node nodeToFind = {Person("kasia","wasik",30), nullptr};
//    auto findItItem = list.find(nodeToFind);
//    if(findItItem != nullptr) std::cout << "Person found, acquired person: " << findItItem->data.getName() << " " << findItItem->data.getSurname() <<std::endl;
//    else std::cout << "Person not found" << std::endl;
//
//    // UT - remove node in the middle of the list
//    Node nodeToRemove = nodeToFind;
//    list.remove(nodeToRemove);
//    std::cout << "Person database after remove operation: " << list.size() << std::endl;
//    PrintAllNodes(list);
//
//    // UT - remove first node in the list, the node that head points to
//    nodeToRemove = Node{Person("tmp","tmp",0), nullptr};
//    list.remove(nodeToRemove);
//    std::cout << "Person database after remove operation: " << list.size() << std::endl;
//    PrintAllNodes(list);
//
//    // UT - remove last node in the list, the node that tail points to
//    list.insert(Person("tmp","tmp",0));
//    std::cout << "Person database after insert operation: " << list.size() << std::endl;
//    PrintAllNodes(list);
//    nodeToRemove = Node{Person("tmp","tmp",0), nullptr};
//    list.remove(nodeToRemove);
//    std::cout << "Person database after remove operation: " << list.size() << std::endl;
//    PrintAllNodes(list);
  
    
    /*
    auto testPerson1 = Person("test1","test1",10);
    auto testKey1 = KeyGenerator().generateKey();
    
    auto testPerson2 = Person("test2","test2",20);
    auto testKey2 = KeyGenerator().generateKey();
    
    auto testPerson3 = Person("test3","test3",30);
    auto testKey3 = KeyGenerator().generateKey();
    
    auto testPerson4 = Person("test4","test4",40);
    auto testKey4 = KeyGenerator().generateKey();
    
    auto testPerson5 = Person("test5","test5",50);
    auto testKey5 = KeyGenerator().generateKey();
    
    auto testPerson6 = Person("test6","test6",60);
    auto testKey6 = KeyGenerator().generateKey();
    
    hashTable.insert(testKey1, testPerson1);
    hashTable.insert(testKey2, testPerson2);
    hashTable.insert(testKey3, testPerson3);
    hashTable.insert(testKey4, testPerson4);
    hashTable.insert(testKey5, testPerson5);
    hashTable.insert(testKey6, testPerson6);
    */
    
    auto testPerson1 = Person("test1","test1",10);
    auto testKey1 = KeyGenerator().generateKey();
    auto testPerson2 = Person("test2","test2",20);
    auto testKey2 = KeyGenerator().generateKey();
    
    hashTable.insert(testKey1, testPerson1);
    hashTable.insert(testKey2, testPerson2);
    
    return 0;
}
