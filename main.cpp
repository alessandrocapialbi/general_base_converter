#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, c[64], i = 0, a , b;
    char base_digits[16] =
            {'0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    cout<<"Insert the number you want to convert\n\n";
    cin>>a;
    cout<<"\nInsert the base you want to convert to\n\n";
    cin>>b;
    do
    {
        c[i] = a % b;
        a/= b;
        ++i;
    }
    while(a!=0);

    --i;
    for(  ; i>=0; i--)
    {
        cout << base_digits[c[i]];
    }
    cout<<endl;
    system("pause");
    return 0;
}

