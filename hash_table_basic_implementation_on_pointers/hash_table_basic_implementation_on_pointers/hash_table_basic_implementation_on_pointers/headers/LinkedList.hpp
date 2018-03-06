#pragma once
#include <string>

class Person
{
    std::string name_;
    std::string surname_;
    unsigned int age_;

    public:
        Person (std::string name, std::string surname, unsigned int age) :
            name_ (name), surname_ (surname), age_ (age){};

        std::string getFullName ();

        unsigned int getAge ();
};

class Node
{
public:
    Person* person;
    Node* next;
};

class LinkedList
{
    Node* head;
    Node* tail;

public:
    LinkedList () :head (nullptr), tail(nullptr){};
    void insert (Node* node);
    Node* begin ();

};