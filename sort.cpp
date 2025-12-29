#include<iostream>
using namespace std;
void sort(int*arr,int size)
{
   for(int i=0;i<size;i++)
   {
      for(int j=i+1;j<size;j++)
	      if(arr[i]>arr[j])
		  swap(arr[i],arr[j]);
   }
}
void print(int*arr,int size)
{
   for(int i=0;i<size;i++)
	  cout<<arr[i]<<endl;
}
int main()
{

int arr[5]={5,4,3,2,1};
int size=arr/sizeof(arr[0]);
sort(arr,5);
  print(arr,5);
}
