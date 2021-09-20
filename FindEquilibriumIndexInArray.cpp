#include<bits/stdc++.h>
#include<numeric>
using namespace std;


void  findEquilibriumIndex(int A[],int n)
{
    //'Total' stores the sum of all the array elements
    int total = accumulate(A, A + n, 0);

    //'right' stores the sum of elements of subarray'A[i+1...n]'
    int right = 0;

    // traverse the array from right to left
    for (int i=n-1;i>=0;i--)
    {


    if(right == total -(A[i] + right)) {


    cout<<"Equalibrium Index found"<< i <<endl;


    }

    // new right is'A[i] + (A[i+1] + A[i+2] +A[i+3]....A{n-1}'

        right +=A[i];

    }
}



int main()


{
    int n;
     cout<<"enter the array size";
    cin>>n;

    int A[n],i;

    cout<<"Enter The array"<<endl;
    for(i=0;i<n;i++)
    cin>>A[i];
    findEquilibriumIndex(A,n);

    return 0;

}



