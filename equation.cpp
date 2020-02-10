#include <iostream>
using namespace std;

void func(int arr[],int start,int end,int c)
{

    if(start>end)
    {
        
        if(c==0)
        { 
            for(int i=0;i<=end;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            func(arr,start+1,end,c-arr[start]);      
    }  
}

  int main()
  {
      int c, n;
      cout<<"Enter number of integers  = ";
      cin>>n;
      cout<<"\nEnter the value of c(sum) = ";
	  cin>>c;
      int* array=new int[n];
      func(array,0,n-1,c);

      return 0;
  }
