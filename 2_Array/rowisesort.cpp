// Input : mar[][] = [ [77, 11, 22, 3],
//                               [11, 89, 1, 12],
//                               [32, 11, 56, 7],
//                              [11, 22, 44, 33] ]
// Output : mat[][] = [ [3, 11, 22, 77],
//                                  [1, 11, 12, 89],
//                                  [7, 11, 32, 56],
//                                 [11, 22, 33, 44] ]

// Input : mat[][] = [ [8, 6, 4, 5],
//                                [3, 5, 2, 1],
//                                [9, 7, 4, 2],
//                                [7, 8, 9, 5] ]
// Output :mat[][] = [ [4, 5, 6, 8],
//                                  [1, 2, 3, 5],
//                                  [2, 4, 7, 9],
//                                  [5, 7, 8, 9] ]

#include <iostream>
using namespace std;

void rowisesort(int mat[4][4])
{

    for(int i=0;i<4;i++)
    {
        sort(mat[i], mat[i]+4);
    }
       for(int i=0;i<4;i++)
    {
       for(int j=0;j<4;j++)
       {
         cout<<mat[i][j]<<" ";
       }
       cout<<endl;

    }

}


int main()
{
    int mat[4][4] = {{8, 6, 4, 5},
                     {3, 5, 2, 1},
                     {9, 7, 4, 2},
                     {7, 8, 9, 5}};



    rowisesort(mat);                

    return 0;
}