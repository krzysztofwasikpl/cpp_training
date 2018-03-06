//
//  hash_code.cpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <stdio.h>
#include <ctime>
#include "hash_code.hpp"

unsigned int
HashCode::getHash(unsigned int& key)
{
    unsigned int tmp;
    time_t now = time(0);
    
    // computation
    tmp = key * (unsigned int)now;
    
    return tmp;
};

unsigned int 
HashCode::convertToIndex(unsigned int& hash, unsigned int& tableSize)
{
    return hash % tableSize;
};
