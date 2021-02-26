#include <iostream>
#include <cmath>
using namespace std;
int count;
void heapify(int arr[],int s,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(l<s && arr[l]>arr[largest])
    {
        largest=l;
    }
    if(l<s)
    {
        count++;
    }
    if(r<s)
    {
        count++;
    }
    if(r<s && arr[s]>arr[largest])
    {
        largest=s;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,s,largest);
    }
}
void heapsort(int arr[],int s)
{
    for(int i=floor((s-1)/2);i>=0;i--)
    {
        heapify(arr,s,i);
    }
    for(int i=s-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void printArray(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{ 
  int s;
  cout<<"Enter the size of array"<<endl;
  cin>>s;
  int arr[s];
  for(int i=0;i<s;i++)
  {
      cout<<"Enter "<<i+1<<" elements of array"<<endl;
      cin>>arr[i];
  }
  cout<<"Your entered array is"<<endl;
  printArray(arr,s);
  cout<<endl;
  count=0;
  heapsort(arr,s);
  cout<<"Sorted array is"<<endl;
  printArray(arr,s);
  cout<<"number of comparisions are "<<count;
  return 0;
}
