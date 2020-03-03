#include <iostream>

using namespace std;
int main()
{
    char char_array1[] = {'a','b','v','d'};
    
    size_t char_length = sizeof(char_array1)/sizeof(char_array1[0]);
    cout << "\n Character Array Length : "<< char_length;
    cout << "\n Array Elements";
    for (int i =0 ;i<char_length;i++){
        cout <<"\n Element"<<i <<": " << char_array1[i];
    }

    return 0;
}