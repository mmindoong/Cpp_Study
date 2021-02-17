#include <iostream>

#include <string>

using namespace std;



int main() {

    int arr[26];

    fill_n(arr, 26, -1); ​// arr를 전부 -1로 초기화



     string str;

    cin >> str;

    
        for (int i = 0; i < str.length(); i++) {

            int n = str[i] - 'a';

            if (arr[n] == -1) arr[n] = i;

        }



    for (int i = 0; i < 26; i++) cout << arr[i] << " ";



    return 0;

}