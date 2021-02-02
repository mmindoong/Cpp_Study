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
        int gStringLength = GetLength(); //GetLength�Լ� ������ ����
        int strLength = 0;
        while (true)
        {
            if (str[strLength] == '\0')
            {
                strLength++;
                break; //str[strLength]���� null�̸� strLength���� +1���ְ� while�� ��������.
            }
            strLength++; //str[strLenght]���� null�̱� ������ strLength +1
        }

        char* tmpGString = gString;
        int newLength = gStringLength + strLength;

        gString = new char[newLength]; //gString �迭�� ũ�⸦ �Ҵ�����(�������ִ� ũ�Ⱑ �ƴϹǷ� �����Ҵ��ʿ�)

        for (int i = 0; i < gStringLength - 1; i++)
        {
            *(gString + i) = tmpGString[i]; //�迭�̸��� �����ּ�(0��° �ε���)�̹Ƿ� *(gString+i)�� tmpGString[i]�� ���� �� 
        } //tmpString�� gStringLength��ŭ for�� ������ ���� �־���

        for (int i = 0; i < strLength; i++)
        {
            int offset = (gStringLength - 1) + i;//(gStringLength����(-1�� null��)) + strLength��ŭ for�� ���� ���� ��
            *(gString + offset) = str[i]; //�迭�̸��� �����ּ�(0��° �ε���)�̹Ƿ� *(gString+offset)�� str[i]�� ���� �� 
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
