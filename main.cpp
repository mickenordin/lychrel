#include <iostream>
#include <cstring>
#include <climits>
#include "lychrel.hpp"


int main(int argc, char **argv)
{
    string a = argv[1];
    string b(a.rbegin(),a.rend());
    string added = add(a,b);
    if(added == "-1") {
	cerr << "ERROR: adding error detected, we might have reached the end of our datatype or some how the two numbers don't have the same legth\n";
        return 1;
    }
    long long it = 0;
    do {
        cout << "Iteration " << ++it << " currently working on " << added <<  endl;	
	a = added;
        b = string(a.rbegin(),a.rend());
        added = add(a,b);
            if(added == "-1") {
	        cerr << "ERROR: adding error detected, we might have reached the end of our datatype or some how the two numbers don't have the same legth\n";
                return 1;
	    }
        } while(! is_palindrome(added));
    cout << "Iteration " << ++it << " currently working on " << added <<  endl;	
    cout << "That consists of\n" << a << "\n+\n" << b << "\nand that it " << (is_palindrome(added) ? "is" : "is not") << " a palindrome." << endl;	

    return 0;
}
