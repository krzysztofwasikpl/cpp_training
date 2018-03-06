#include "LinkedList.hpp"


std::string
Person::getFullName ()
{
    return name_.append (" ").append (surname_);
};

unsigned int
Person::getAge ()
{
    return age_;
};

void
LinkedList::insert(Node* node)
{
    if(head == nullptr)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail->next = node;
        tail = node;
    }
};

Node*
LinkedList::begin()
{
    return head;
};

