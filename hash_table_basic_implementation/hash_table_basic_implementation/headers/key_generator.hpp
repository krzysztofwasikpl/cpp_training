//
//  key_generator.hpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef key_generator_h
#define key_generator_h

/*
 TODO:
    - write unit tests to validate that currentIterator_ is has always one value for all instances of KeyGenerator class
 */

class KeyGenerator
{
    static int currentIterator_;
    
public:
    unsigned int generateKey();
};

#endif /* key_generator_h */
