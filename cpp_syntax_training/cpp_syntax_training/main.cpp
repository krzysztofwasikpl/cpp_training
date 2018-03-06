//
//  main.cpp
//  cpp_syntax_training
//
//  Created by vector on 13/02/2018.
//  Copyright © 2018 vector. All rights reserved.
//


#include <iostream>

class SimpleIntContainer
{
    int v1, v2;
public:
    
    SimpleIntContainer(int a,int b) : v1(a), v2(b)
    {
        std::cout << "SimpleIntContainer ctor invoke" << std::endl;
    }
    
    void PrintVariables()
    {
        std::cout << "v1= " << v1 << " v2= " << v2 << std::endl;
    }
};

class BookShelf
{
public:
    int _count;

    // operator oveload
    BookShelf operator+(const BookShelf& other)
    {
        std::cout << " DEBUG | operator+ overload" << std::endl;
        std::cout << " left operand for addition= " << this->_count << std::endl;
        std::cout << " right operand for addtion= " << other._count << std::endl;
        
        BookShelf tmp;
        tmp._count = this->_count + other._count;
        return tmp;
    }
    
};


class Person
{
public:
    virtual void GetGender()=0;
};

class Male : public Person
{
public:
    void GetGender()
    {
        std::cout << "gender is male" << std::endl;
    }
};

struct PhysicalParameters
{
    int height;
    int weight;
};

void reverse(char* str)
{
    char* end = str;
    char tmp;
    
    // check for null character
    if(str)
    {
        while(*end)
        {
            ++end;
        }
        
        // set one char back, since last char is null
        --end;
        
        // swap characters from start of string to the end of string, until pointers meet in middle
        while(str < end)
        {
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}

// structure for show case of shallow copy and deep copy
struct Test
{
    char* ptr;
};

void shallow_copy(Test& src, Test& dest)
{
    dest.ptr = src.ptr;
}

void deep_copy(Test& src, Test& dest)
{
    dest.ptr = (char*)malloc(strlen(src.ptr) + 1);
    strcpy(dest.ptr,src.ptr);
}

// struct vs class
class Test2
{
public:
    char* ptr;
};

void test_method_for_Test2(Test2& src, Test2* dest)
{
    dest->ptr = src.ptr;
}

int main(int argc, const char * argv[]) {
    std::cout << "application: cpp_syntax_training" << std::endl;
    
    // try to instatiate a pure virtual class, which is an abstract class now
    // we failed as expected
    //auto na = Person();
    
    // how to instatiate a class
    Male* tomek = new Male();
    tomek->GetGender();
    
    // how to instatiate a class with default constructor, we don't neet to use ()
    auto andrzej = new Male;
    andrzej->GetGender();
    
    // how to instatiate a class object
    auto karol = Male();
    karol.GetGender();
    
    // how to use struct
    PhysicalParameters tomekParameters;
    tomekParameters.height = 180;
    tomekParameters.weight = 80;
    
    std::cout << "Tomek height and weight are: " << tomekParameters.height << " " << tomekParameters.weight << std::endl;
    
    delete tomek;
    delete andrzej;
    
    // int stack[100000000]; // generaing Thread 1: EXC_BAD_ACCESS (code=1, address=0x7ffed7e8719c), propably stack overlow
    
    auto bshelf1 = new BookShelf();
    bshelf1->_count= 10;
    
    auto bshelf2 = new BookShelf();
    bshelf2->_count= 20;
    
    auto mergedShelf =  *bshelf2 + *bshelf1 + *bshelf2;
    
    std::cout << " Merged book shelf count is= " << mergedShelf._count << std::endl;
    
    delete bshelf1;
    delete bshelf2;
    
    // special use of refrence, called free-standing reference
    const int &p = 12;
    
    // traditional use of reference
    int a = 5;
    int& b = a;
    std::cout << "b refer to a with value of " << b <<std::endl;
    b = 10;
    std::cout << "b refer to a with value of " << b << std::endl;
    a = 15;
    std::cout << "a value is " << a << std::endl;
    std::cout << "b refer to a with value of " << b << std::endl;
    
    // use of SimpleIntContainer
    auto sic = new SimpleIntContainer(100,200);
    sic->PrintVariables();
    
    // circular array
    std::cout << "10 % 10= " << 10 % 10 << std::endl;
    
    // reversing string
    char str_arry[] = "abcdf";
    char* str = str_arry;
    reverse(str);
    std::cout << "reversed string= " << str << std::endl;
    
    
    
    return 0;
}
