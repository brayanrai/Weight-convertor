#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,data[20],n,k,beg,end,mid,lb,ub,item,loc;
    // cout<<"enter the size of array:";
    // cin>>p;

    cout<<"\nHow many numbers you want to enter in array:\n";
    cin>> n;

    cout<<"enter the numbers:\n";
    for (int k=1; k<=n;k++)
    {
        cin>>data[k];
    }
    cout<<"\nyou have entered the following numbers:\n";
    for(int k=1;k<=n;k++)
    {
        cout<<data[k]<<",";
    }
    cout<<"\nEnter the number you want to search :\n";
    cin>>item;

    lb=1,ub=n;
    beg=lb,end=ub, mid= int(lb+ub)/2;
    cout<<"Lower bound="<<lb<<endl;
    cout<<"upper bound="<<ub<<endl;

    while(data[mid]!=item && beg!=end)
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
        cout<<"NUMBER FOUND at index:\n";
        loc=mid;
        cout<<loc<<endl;
    }
    else
    {
        cout<<"Number is not in the data"<<endl;

    }
    return 0;
}
