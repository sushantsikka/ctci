/*

Given an unsorted array, sort it in such a way that the first 
element is the largest value, the second element is the smallest, 
the third element is the second largest element and so on. 
[2, 4, 3, 5, 1] -> [5, 1, 4, 2, 3] 

*/
#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
int arr[]={6,3,1,2,4,5}; // initialize an array arr
int temp=0;
int pos_max=0; // variable to store position of max element
int pos_min=0; // variable to store position of min element
int max_arr=-1;
int min_arr=INT_MAX;
int i=0;
int beg=0;
int len=sizeof(arr)/sizeof(arr[0]); // variable to store length of array
while(beg<len)
{
    max_arr=0;
    min_arr=INT_MAX;
for(i=beg;i<len;i++)
{
    if(arr[i]>max_arr)
    {
        max_arr=arr[i];
        pos_max=i;
    } // finding max element in the array
    if(arr[i]<min_arr)
    {
        min_arr=arr[i];
        pos_min=i;
    } // finding min element in the array
}
temp=arr[pos_max]; // swap max element with the element in beg position
arr[pos_max]=arr[beg];
arr[beg]=temp;

temp=arr[pos_min]; // swap min element with the element in beg+1 position
arr[pos_min]=arr[beg+1];
arr[beg+1]=temp;

beg+=2;
}
for(i=0;i<len;i++){cout<<endl<<arr[i];} // Printing output
return 0;
}
