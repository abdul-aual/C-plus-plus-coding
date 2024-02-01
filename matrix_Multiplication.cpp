#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int row1,row2,col1,col2;
        cout<<"Enter row and column of first matrix ";
        cin>>row1>>col1;

        cout<<"Enter row and column of second matrix ";
        cin>>row2>>col2;

        int first[row1][col1],second[row2][col2],mul[row1][col2],sum=0;

        cout<<"Enter the elements of the first matrix = "<<endl;
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col1; j++)
            {
                cin>>first[i][j];
            }
        }
        //showing first matrix
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col1; j++)
            {
                cout<<first[i][j]<<" ";
            }
            cout<<endl;
        }


        //second matrix

                cout<<"Enter the elements of the second matrix = "<<endl;
        for(int i=0; i<row2; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cin>>second[i][j];
            }
        }
        //showing 2nd matrix
        for(int i=0; i<row2; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cout<<second[i][j]<<" ";
            }
            cout<<endl;
        }

        //now multiplication

        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                for(int k=0; k<col1; k++)
                {
                    sum+=first[i][k]*second[k][j];
                }
                mul[i][j]=sum;
                sum=0;
            }
        }


        cout<<"multiplication of both matrix is = "<<endl;
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cout<<mul[i][j]<<" ";
            }
            cout<<endl;
        }





    }

}
