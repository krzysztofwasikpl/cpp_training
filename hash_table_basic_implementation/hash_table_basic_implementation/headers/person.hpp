//
//  person.hpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef person_h
#define person_h

#include <string>

/*
 TODO:
 - write unit tests for validating immutable of age field / object
 */

class Person
{
    std::string name_;
    std::string surname_;
    int age_; // replace with immutable object
    
public:
    Person(const std::string& name,
           const std::string& surname,
           const int& age) : name_(name), surname_(surname), age_(age){}
    
    std::string getName();
    
    std::string getSurname();
    
    int getAge();
    
    bool operator ==(Person& person);

};

#endif /* person_h */
