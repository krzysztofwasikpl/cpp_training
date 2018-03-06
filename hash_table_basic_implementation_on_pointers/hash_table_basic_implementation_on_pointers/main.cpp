#include <iostream>
#include "LinkedList.hpp"
#include "HashTable.hpp"


int main()
{
    std::cout << "application: cpp_training" << std::endl;

    // UT ---
    LinkedList* data[2];

    for(int i=0; i< 2; i++)
    {
        data[i] = new LinkedList ();
    }

    auto p1 = new Person ("p1name", "p1surname", 10);
    auto n1 = new Node ();
    n1->person = p1;
    n1->next = nullptr;

    auto p2 = new Person ("p2name", "p2surname", 20);
    auto n2 = new Node ();
    n2->person = p2;
    n2->next = nullptr;

    auto p3 = new Person ("p3name", "p3surname", 30);
    auto n3 = new Node ();
    n3->person = p3;
    n3->next = nullptr;

    auto p4 = new Person ("p4name", "p4surname", 40);
    auto n4 = new Node ();
    n4->person = p4;
    n4->next = nullptr;

   /* auto list1 = new LinkedList ();
    auto list2 = new LinkedList ();*/
    data[0]->insert (n1);
    data[1]->insert (n2);
    data[0]->insert (n3);
    data[1]->insert (n4);

    Node* it;
    it = data[0]->begin ();
    while(it != nullptr)
    {
        std::cout << "List1 | Person: " << it->person->getFullName () << std::endl;
        it = it->next;
    }

    it = data[1]->begin ();
    while (it != nullptr)
    {
        std::cout << "List2 | Person: " << it->person->getFullName () << std::endl;
        it = it->next;
    }

    // --- end of UT

    // UT ---

    auto p5 = new Person ("p5name", "p5surname", 50);
    auto p6 = new Person ("p6name", "p6surname", 60);
    auto p7 = new Person ("p7name", "p7surname", 70);
    auto p8 = new Person ("p8name", "p8surname", 80);
    auto hashTable = new HashTable ();
    hashTable->insert (p5, 0);
    hashTable->insert (p6, 1);
    hashTable->insert (p7, 0);
    hashTable->insert (p8, 1);

    // --- end of UT

    // Clean up
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete n1;
    delete n2;
    delete n3;
    delete n4;
    //delete list1;
    //delete list2;
    delete data[0];
    delete data[1];

    return 0;
}
