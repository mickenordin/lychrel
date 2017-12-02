#include <iostream>
#include <cstring>
#include "lychrel.hpp"


int main(int argc, char **argv)
{
    string a = argv[1];
    string b(a.rbegin(),a.rend());
    string added = add(a,b);
    long long it = 0;
    do {
        cout << "Iteration " << ++it << " currently working on " << added <<  endl;	
	a = added;
        b = string(a.rbegin(),a.rend());
        added = add(a,b);
    } while(! is_palindrome(added) );
    cout << "Iteration " << ++it << " currently working on " << added <<  endl;	
    cout << "That consists of\n" << a << "\n+\n" << b << "\nand that it is a palindrome." << endl;	


    return 0;
}
