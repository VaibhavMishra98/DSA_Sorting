#include<iostream>
using namespace std;
int part(int a[], int p, int r)
{
    int x=a[r];
    int i=p-1,j;
    for(j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quick_sort(int a[], int p ,int r)
{
    int q;
    if(p<r)
    {
        q=part(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[]={3,2,1,5,8,4,3,7};
    int i;
    int n=sizeof(a)/sizeof(a[0]);
    quick_sort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
