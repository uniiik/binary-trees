class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {
            return str1.substr(0,gcd(str1.length(),str2.length()));
        }
           
        else
            return "";
        
    }
};
/*

If the two strings have a common prefix, then concatenating them in either order should result in the same string.
The length of the common prefix is equal to the greatest common divisor of the lengths of the two strings.strings.
Approach:

Concatenate the two strings in two different orders: str1+str2 and str2+str1.
Compare the two concatenated strings.
If the two concatenated strings are equal, then the two original strings share a common prefix.
Find the greatest common divisor of the lengths of the two strings.
Use the GCD as the length of the common prefix and return it using str1.substr(0, gcd(str1.length(), str2.length())).
If the two concatenated strings are not equal, then there is no common prefix, so return an empty string.
*/