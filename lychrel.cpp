#include <iostream>
#include <cstring>
#include <climits>
#include "lychrel.hpp"

long long get_len (string a, string b) {

    return a.length() == b.length() ? a.length(): -1;

}

string add (string a, string b) {
    
    long long len = get_len(a,b);
    
    char result[len + 2] = { '0' };

    if(len == -1 or len == LLONG_MAX) {
        return "-1";
    } else {
	int reg = 0;
	for(long long i = len +1; i >= 0; i--) {
	    long long rescount = i;
	    long long numcount = i - 1;
	    if(rescount == 0) {
		result[rescount] = (char) reg + '0';
	    } else {
		    int x = a[numcount] - '0';
		    int y = b[numcount] - '0';
		    int temp = x+y+reg;
		    if(temp > 9) {
			result[rescount] = (char) temp - 10 + '0';
			reg = 1;
		    } else {
			result[rescount] = (char) temp + '0';
			reg = 0;
		    }
	    }
	}

    }
    result[len+1] = '\0';
    string  finresult = result;
    if(result[0] == 0 + '0') 
	    finresult.erase(0,1);
    return finresult;

}

bool is_palindrome (string str) {
    return str == string(str.rbegin(),str.rend());
} 

