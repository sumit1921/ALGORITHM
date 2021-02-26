#include<iostream>
using namespace std;
int main()
 {
   int i,j,n,temp,arr[50],count=0;
   cout<<"Enter the number of elements:";
   cin>>n;
   cout<<"\nEnter the elements\n";
   for(i=0;i<n;i++)
    {
		cin>>arr[i];
    }
	for(i=1;i<=n-1;i++)
    {
        temp=arr[i];
        j=i-1;
    while((temp<arr[j])&&(j>=0))
        {
          arr[j+1]=arr[j];  
          j=j-1;
        }
    count++;
    arr[j+1]=temp;
    }
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<"\nNo of comparisons: "<<count;
    return 0;
}
