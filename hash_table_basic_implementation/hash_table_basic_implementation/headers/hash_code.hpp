//
//  hash_code.hpp
//  hash_table_basic_implementation
//
//  Created by vector on 03/03/2018.
//  Copyright © 2018 vector. All rights reserved.
//

#ifndef hash_code_h
#define hash_code_h

class HashCode
{
public:
    unsigned int getHash(unsigned int& key);
    unsigned int  convertToIndex(unsigned int& hash, unsigned int& tableSize);
};

#endif /* hash_code_h */
