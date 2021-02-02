#pragma once

#include <iostream>
#include "KhuString.h"

using namespace std;

namespace khu
{

char* gString = nullptr;

    const char* khu::Construct(const char* str)
    {
        int length = 0;

        while (true)
        {
            if (str[length] == '\0')
            {
                break;
            }
            else
            {
                length++;
            }
        }
        gString = new char[length + 1];

        for (int i = 0; i < length + 1; i++)
        {
            *(gString + i) = str[i];
        }

        return gString;
    }

    unsigned int khu::GetLength()
    {
        int index = 0;

        while (1)
        {
            if (gString[index] == '\0')
            {
                return index + 1;
            }
            index++;
        }
        cout << index;
    }


    void khu::Append(const char* str)
    {
        int gStringLength = GetLength(); //GetLength함수 변수로 선언
        int strLength = 0;
        while (true)
        {
            if (str[strLength] == '\0')
            {
                strLength++;
                break; //str[strLength]값이 null이면 strLength값을 +1해주고 while문 빠져나옴.
            }
            strLength++; //str[strLenght]값이 null이기 전에는 strLength +1
        }

        char* tmpGString = gString;
        int newLength = gStringLength + strLength;

        gString = new char[newLength]; //gString 배열의 크기를 할당해줌(정해져있는 크기가 아니므로 동적할당필요)

        for (int i = 0; i < gStringLength - 1; i++)
        {
            *(gString + i) = tmpGString[i]; //배열이름은 시작주소(0번째 인덱스)이므로 *(gString+i)와 tmpGString[i]는 같은 값 
        } //tmpString에 gStringLength만큼 for문 돌려서 원소 넣어줌

        for (int i = 0; i < strLength; i++)
        {
            int offset = (gStringLength - 1) + i;//(gStringLength원소(-1은 null값)) + strLength만큼 for문 돌려 더한 합
            *(gString + offset) = str[i]; //배열이름은 시작주소(0번째 인덱스)이므로 *(gString+offset)와 str[i]는 같은 값 
        }
    }

    void khu::Reverse()
    {
        int gStringLength = GetLength();

        for (int i = 0; i < gStringLength - 1; ++i)
        {
            gString[gStringLength - i - 1];
        }
        gString[gStringLength] = NULL;


    }

    void khu::ToUpper()
    {
        int gStringLength = GetLength();
        for (int i = 0; i < gStringLength - 1; i++)
        {
            if (gString[i] >= 'a' && gString[i] <= 'z')
            {
                gString[i] = gString[i] - 32;
            }
        }
    }

    void khu::ToLower()
    {
        int gStringLength = GetLength();
        for (int i = 0; i < gStringLength - 1; i++)
        {
            if (gString[i] >= 'A' && gString[i] <= 'Z')
            {
                gString[i] = gString[i] + 32;
            }
        }
    }

    const char* khu::Copy(const char* str)
    {
        int length = 0;

        while (true)
        {
            if (str[length] == '\0')
            {
                break;
            }
            else
            {
                length++;
            }
        }
        gString = new char[length + 1];

        for (int i = 0; i < length + 1; i++)
        {
            *(gString + i) = str[i];
        }

        return gString;
    }
 
    }
