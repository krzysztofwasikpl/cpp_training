//
//  key_generator.cpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#include <stdio.h>
#include "key_generator.hpp"

int KeyGenerator::currentIterator_ = 0;

unsigned int
KeyGenerator::generateKey()
{
    return ++currentIterator_;
};
