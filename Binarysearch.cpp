#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,data[20],n,k,beg,end,mid,lb,ub,item,loc;
    // cout<<"enter the size of array:";
    // cin>>p;

    cout<<"How many numbers you want to enter in array:\n";
    cin>> n;

    cout<<"enter the numbers:\n";
    for (int k=1; k<=n;k++)
    {
        cin>>data[k];
    }
    cout<<"you have entered the following numbers:\n";
    for(int k=1;k<=n;k++)
    {
        cout<<data[k]<<",";
    }
    cout<<"Enter the number you want to search :\n";
    cin>>item;

    lb=data[1],ub=data[n];
    beg=lb,end=ub, mid= int(lb+ub)/2;
    cout<<"Lower bound="<<lb<<endl;
    cout<<"upper bound="<<ub<<endl;

    while(data[mid]!=item && beg!=item)
    {
        if(item<data[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=int(beg+end)/2;
    }
    if(data[mid]==item)
    {
        cout<<"!NUmber found!";
        loc=mid;
        cout<<loc<<endl;
    }
    else
    {
        loc=0;
        cout<<loc<<endl;
    }
    return 0;
}
