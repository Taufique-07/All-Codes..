#include<iostream>

using namespace std;

bool safe(int** a,int x, int y,int num)
{
    for(int row=0; row<x; row++)
    {
        if(a[row][y]==1)
        {
            return false;
        }
    }

    int row=x;
    int col=y;

    while(row>=0 && col>=0)
    {
        if(a[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

    row=x;
    col=y;

    while(row>=0 && col<num)
    {
        if(a[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool nQueen(int** a,int x, int num)
{
    if(x>=num)
    {
        return true;
    }

    for(int col=0; col<num; col++)
    {
        if(safe(a,x,col,num))
        {
            a[x][col]=1;

            if(nQueen(a,x+1,num))
             {
            return true;
             }
        }


        a[x][col]=0;
    }
    return false;
}

int main()
{
    int num;
    cin>>num;

    int** a= new int*[num];
    for(int i=0; i<num; i++)
    {
        a[i] = new int[num];
        for(int j=0; j<num; j++)
        {
            a[i][j]=0;
        }
    }

    if(nQueen(a,0,num))
    {
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                cout<<a[i][j]<< " ";
            }
            cout<<endl;
        }

    }


    return 0;
}
