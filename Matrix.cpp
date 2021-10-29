#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

template <typename T>
T **Matrix( int nRows, int nCols)
{
      T **dynamicArray;

      dynamicArray = new T*[nRows];
      for( int i = 0 ; i < nRows ; i++ )
      dynamicArray[i] = new T [nCols];

      return dynamicArray;
}

template <typename T>
void FreeMatrix(T** dArray)
{
      delete [] *dArray;
      delete [] dArray;
}

int main()
{
    int row;
    cin>>row;
    int column;
    cin>>column;
    double **A = Matrix<double>(row,column);

    srand(time(0));
    //input array elements
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            A[i][j]=(rand()%100)/100.00;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


      FreeMatrix<double>(A);
      return 0;
}
