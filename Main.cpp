#include <iostream>
#include "KhuString.h"

using namespace std;


int main(void) {
    khu::Construct("hello ");
    cout << "[ DEBUG ] gString : " << khu::gString << endl;

    khu::Append("world");
    cout << "[ DEBUG ] gString : " << khu::gString << endl;

    khu::GetLength();

    khu::Reverse();
    cout << "[ DEBUG ] gString : " << khu::gString << endl;

    khu::ToUpper();
    cout << "[ DEBUG ] gString : " << khu::gString << endl;

    khu::ToLower();
    cout << "[ DEBUG ] gString : " << khu::gString << endl;

    khu::Copy("Wow!");
    cout << "[ DEBUG ] gString : " << khu::gString << endl;

    return 0;
}