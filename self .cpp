#include<iostream>
using namespace std;
int main()
{
int a[4][5],b[4][5];
int c[4][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

for (int i = 0; i <4; i++)
{
    for (int j = 0; j <5; j++)
    {
    cout<<"enter the element for a["<<i+1<<"]["<<j+1<<"]=";
cin>>a[i][j];
    }

}
for (int i = 0; i <4; i++)
{
    for (int j = 0; j <5; j++)
    {
    cout<<"enter the element for b["<<i+1<<"]["<<j+1<<"]=";
cin>>b[i][j];
    }

}
for (int k= 0; k <4; k++)
{
for (int l = 0; l <5; l++)
{
    c[k][l]=a[k][l]+b[k][l];
}
}
for (int i = 0; i <4; i++)
{
    for (int j = 0; j <5; j++)
    {
       cout<<c[i][j]<<" ";
    }cout<<endl;

}
    return 0;
}
