#include<stdio.h>
#include<stdlib.h>


int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

    //Function to find the maximum product of two integers in an array
    void findMaximumProduct(int arr[], int n)
    {
        //base case
        if(n<2){
            return;
        }

        //sort array in ascending order
        qsort(arr, n ,sizeof(int),compare);

        /* choose the maximum of the following:
        1.Product of first two elements or
        2.Product of last two elements
        */

        if((arr[0] * arr[1])> (arr[n-1]*arr[n-2]))
        {
        printf("Pair is(%d,%d)", arr[0],arr[1]);
        }
        else{

        printf("Pair is (%d,%d)",arr[n-1],arr[n-2]);
        }

    }


    int main()
    {

        int arr[] = {-10,-3,5,6,-20};
        int n = sizeof(arr)/sizeof(arr[0]);
        findMaximumProduct(arr,n);

        return 0;

    }
