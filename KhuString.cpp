#include <iostream>
#pragma once

/* Function Prototypes */
namespace khu
{
    char* gString = nullptr;

    const char* Construct(const char* str);
    unsigned int GetLength();
    void Append(const char* str);
    bool RemoveAt(unsigned int i);
    void Reverse();
    void ToUpper();
    void ToLower();
    const char* Copy(const char* str);
}

const char* khu::Construct(const char* str)
{
    int count = 0;
    int index = 0;

    while (1)
    {
        if (str[index] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    int str_len = count + 1;
    gString = new char[str_len];
    for (int i = 0; i < str_len; i++) 
    {
        *(gString + i) = str[i];
    }

    return gString;
}

unsigned int khu::GetLength()
{
    int count = 0;
    int index = 0;
    
    while (1)
    {
        if (gString[index] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
        index++;
    }
    return count;
}

