#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int c[64], i = 0, a , b;
    char base_digits[16] =
            {'0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; //All the possible digits you can have.

    cout<<"Insert the number you want to convert\n\n"; //The user will digit a 10 number base.
    cin>>a;
    cout<<"\nInsert the base you want to convert to\n\n"; /*The user chooses whatever base he wants to convert
 * the number to.*/
    cin>>b;
    do //Method of subsequent divisions.
    {
        c[i] = a % b; //The rest will be the new converted digit into the new base.
        a/= b;
        ++i;
    }
    while(a!=0);

    --i; /*Since an array starts from index 0, we must substract 1 to the total dimension;
 * e.g. array[6] has indexes 0, 1, 2, 3, 4, 5.*/
    for(  ; i>=0; i--)
    {
        cout << base_digits[c[i]]; /*I go backward through the array in order to display
 * the digits in the correct way. I use base_digits, so I can access to every possible digit of every base. */
    }
    cout<<endl;
    system("pause");
    return 0;
}

