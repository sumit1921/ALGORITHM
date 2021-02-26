#include <iostream>
using namespace std; 
void swap(int *a,int *b) 
 { 
    int t=*a; 
    *a=*b; 
    *b=t; 
 } 
int partition(int arr[],int low,int high) 
 { 
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++) 
     {  
        if (arr[j]<pivot) 
        { 
		  i++; 
          swap(&arr[i],&arr[j]); 
        } 
    } 
    swap(arr[i+1],arr[high]); 
    return (i+1); 
}  
void quicksort(int arr[],int low,int high) 
{ 
    if (low<high) 
     {
	    int d=partition(arr,low,high);  
        quicksort(arr,low,d-1); 
        quicksort(arr,d+1,high); 
    } 
} 
int main ()
  {
    int s;
    cout<<"Enter the size of an array"<< endl;
    cin>>s;
    int arr[s];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<s;i++)
     {
       cin>>arr[i];
     }
    quicksort(arr,0,s-1);
    cout<<"Elements of array after sorting are"<<endl;
    for(int i=0;i<s;i++)
     {
      cout<<arr[i]<<"  " ;
     }
    cout<<endl;
}
