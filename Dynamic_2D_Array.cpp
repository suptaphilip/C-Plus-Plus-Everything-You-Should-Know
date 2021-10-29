#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void show(int **arr,int r,int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int m,n;
    //input number of rows and columns
    cout<<"Enter No. of rows: ";
    cin>>m;
    cout<<"Enter No. of columns: ";
    cin>>n;

    //pointer to 2D array
    int **A=new int*[m];
    //int **A = (int **)malloc(m * sizeof(int *));


    //pointer initialization
    for(int i=0; i<m; i++)
    {
        A[i]=new int[n];
        //A[i] = (int *)malloc(n * sizeof(int));
    }
    srand(time(0));
    //input array elements
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            A[i][j]=rand()%100;
        }
    }

    //display 2D array
    show(A,m,n);

    return 0;
}
