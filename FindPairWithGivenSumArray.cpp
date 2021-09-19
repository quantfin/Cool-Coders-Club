
#include<bits/stdc++.h>
using namespace std;


void findPair(int arr[],int n , int target)
 {

 sort(arr,arr+n);

 int low =0;
 int high = n-1;


 while(low<high)
 {
     if(arr[low]+arr[high] == target)
     {{

         cout<<"pair found ("<<arr[low]<<" , "<<arr[high]<<" ) "<< endl;
         //return;
     }


     ( arr[low]+arr[high]<target)?low++:high--;

     }


 }


    cout<<"Pair not found";




    }


 int main()
{
        int arr[] = {1,2,3,45,6,7,8,0};
        int target = 3;


        int n = sizeof(arr)/sizeof(arr[0]);

        findPair(arr,n,target);


return 0;

}


