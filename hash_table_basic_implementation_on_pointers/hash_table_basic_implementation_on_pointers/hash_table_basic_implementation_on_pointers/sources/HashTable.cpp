#include "HashTable.hpp"

HashTable::HashTable()
{
    data_[0] = new LinkedList ();
    data_[1] = new LinkedList ();
}

HashTable::~HashTable()
{
    delete data_[0];
    delete data_[1];
}

void
HashTable::insert(Person* person,  unsigned int tableIndex)
{
    // DEBUG ---

    auto nodeToAdd = new Node ();
    nodeToAdd->person = person;
    nodeToAdd->next = nullptr;

    data_[tableIndex]->insert (nodeToAdd);
   // delete nodeToAdd;

    // --- end of DEBUG
};

Node*
HashTable::find(Person* person)
{
    return nullptr;
};


