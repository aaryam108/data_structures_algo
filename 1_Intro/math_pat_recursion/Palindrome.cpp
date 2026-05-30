// palindrome

// Input: n = 12321
// Output: True
// Explanation: 12321 is a palindrome number because it reads same  forward and backward.

// Input: n = -121
// Output: True
// Explanation:  We number is palindrome, we mainly ignore sign.

// Input: n = 1234
// Output:  False
// Explanation: 1234 is not a palindrome number because it does not read the same forward and backward.


#include<iostream>
using namespace std;


bool isPalindrome(string n)
{   
    int l =0;
     if(n[0] == '-')
    {
        l = 1;
    }
    int r = n.length()-1;

    while( n[l]!= n[r])
    {
        return false;

        l++;
        r--;
    }
    return true;

}
int main()
{

    string n;
    cin>>n;

    cout<<isPalindrome(n);






    return 0;
}