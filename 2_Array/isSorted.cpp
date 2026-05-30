// Input: arr[] = [10, 20, 30, 40, 50]
// Output: true
// Explanation: The given array is sorted.

// Input: arr[] = [90, 80, 100, 70, 40, 30]
// Output: false
// Explanation: The given array is not sorted.


#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){

    
    for(int i=0;i<n-1;i++)
    {

     if(arr[i]>arr[i+1])
       {
        return false;
       } 

    }
    return true;

}
int main()
{

    int arr [4]= {10,20,30,40};
    cout<<isSorted(arr,4);







    return 0;
}