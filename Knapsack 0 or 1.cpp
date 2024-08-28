#include<iostream>

using namespace std;

int knapsack(int value[],int weight[],int num,int capacity)
{

    if(num==0 || capacity==0)
        return 0;

    if(weight[num-1]>capacity)
        return knapsack(value,weight,num-1,capacity);

    int a=knapsack(value,weight,num-1,capacity-weight[num-1])+value[num-1];
    int b=knapsack(value,weight,num-1,capacity);

    return max(a,b);
}

int main()
{
    int weight[]={10,20,30};
    int value[]={100,50,150};
    int bag=50;
    //cin>>bag;

    cout<<knapsack(value,weight,3,bag)<<endl;
}
