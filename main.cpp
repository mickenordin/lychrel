#include <iostream>
#include <cstring>
#include <climits>
#include "lychrel.hpp"


int main(int argc, char **argv)
{
    string a = argv[1];
    cout << "Starting with " << a;
    string added = a;
    long long it = 0;
    do {
	    a = added;
        string b = string(a.rbegin(),a.rend());
        added = add(a,b);
        if(added == "-1") {
	        cerr << "ERROR: adding error detected, we might have reached the end of our datatype or some how the two numbers don't have the same legth\n";
            return 1;
	    }
        it++;
    } while(! is_palindrome(added));
    cout << " " << added << " is a palindrome and was found after " << it << " iterations.\n"; 
    return 0;
}
