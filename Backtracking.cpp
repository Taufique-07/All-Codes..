#include<iostream>

using namespace std;

bool safe( int** a,int x, int y,int n)
{
    if(x<n &&y<n &&a[x][y]==1)
    {
        return true;
    }

    return false;

}

bool maze(int** a,int x, int y,int num,int** sol)
{
    if(x==num-1 && y==num-1)
    {
        sol[x][y]=1;
        return true;
    }

    if(safe(a,x,y,num))
    {
        sol[x][y]=1;
        if(maze(a,x+1,y,num,sol))
        {
            return true;
        }
        if(maze(a,x,y+1,num,sol))
        {
            return true;
        }
        sol[x][y]=0; //backtracking
        return false;
    }
    return false;
}

int main()
{
    int num;
    cin>>num;

    int** a=new int*[num];
    for(int i=0; i<num; i++)
    {
        a[i]=new int[num];
    }

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            cin>>a[i][j];
        }
    }

    int** sol=new int*[num];
    for(int i=0; i<num; i++)
    {
        sol[i]=new int[num];
        for(int j=0; j<num; j++)
        {
            sol[i][j]=0;
        }
    }

    if(maze(a,0,0,num,sol))
    {
        for(int i=0; i<num; i++)
        {
          for(int j=0; j<num; j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}

/*  1 0 1 0 1
    1 1 1 1 1
    0 1 0 1 0
    1 0 0 1 1
    1 1 1 0 1
*/
