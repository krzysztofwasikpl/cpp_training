//
//  person.cpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <stdio.h>
#include "person.hpp"

std::string
Person::getName()
{
    return name_;
}

std::string
Person::getSurname()
{
    return surname_;
}

int
Person::getAge()
{
    return age_;
}

bool
Person::operator==(Person& person)
{
    int nameEquals = this->name_.compare(person.getName());
    int surnameEquals = this->surname_.compare(person.getSurname());
    bool ageEqual = (this->age_ == person.getAge()) ? true : false;
    
    if((nameEquals == 0) && (surnameEquals == 0) && ageEqual) return true;
    else return false;
}
