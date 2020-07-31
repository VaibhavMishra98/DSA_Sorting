#include<iostream>
using namespace std;

void insertion_sort(int b[],int x)
{
    int i,j,key;
    for(j=1;j<x;j++)
    {
        key=b[j];
        i=j-1;
        while(i>=0 && b[i]>key)
        {
            b[i+1]=b[i];
            i=i-1;
        }
        b[i+1]=key;
    }
    x=2;
}
int main()
{
    int a[]={5,2,4,6,1,3};
    int i;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    insertion_sort(a,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
