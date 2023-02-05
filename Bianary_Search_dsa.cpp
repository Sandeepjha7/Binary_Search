#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2 ;   //mid=(start+end)/2

    while(start <= end)
   { 
    if (arr[mid] == key)
    {
       return mid;
    }

    //go to right wala part
    if(key > arr[mid])
    {
        start = mid+1;
    }
    else
    {
        end = mid-1;
    }

      mid = start + (end-start)/2 ;
   } 

   return -1;
}

int main()
{
    int even[6]={2,6,11,15,18,25};
    int odd[5]={3,8,13,17,20};

    int index = binarySearch(even,6,18);
    int index1 = binarySearch(odd,5,13);

    cout<<"Index of 18 is "<< index <<endl;
    cout<<"Index of 13 is "<< index1 <<endl;

  return 0;
}
