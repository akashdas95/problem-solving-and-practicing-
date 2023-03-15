#include "bits/stdc++.h"
using namespace std;

main()
{
    int row,col;
    cin>>row>>col;
    int matrix[row+1][col+1];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int row_count = 0;
    int column_sum = 0;
    int column_arr[col+1];
    for(int i=0; i<row*col; i++)
    {
        column_sum+=matrix[i%row][i/row];

        if(row_count == row-1)
        {
            column_arr[i/row]= column_sum;
            row_count = 0;
            column_sum = 0;
        }
        else
        {
            row_count++;
        }
    }


    int column_mx = 0;
    int column_num = 0;
    for(int i=0; i<col; i++)
    {
        if(column_arr[i]>column_mx)
        {
            column_mx = column_arr[i];
            column_num = i;
        }
    }


    int col_count = 0;
    int row_sum = 0;
    int row_arr[row+1];
    for(int i=0; i<row*col; i++)
    {
        row_sum+=matrix[i/col][i%col];

        if(col_count == col-1)
        {
            row_arr[i/row] = row_sum;
            col_count = 0;
            row_sum = 0;
        }
        else
        {
            col_count++;
        }
    }

    int row_mx = 0;
    int row_num = 0;
    for(int i=0; i<row; i++)
    {
        if(row_arr[i]>row_mx)
        {
            row_mx = row_arr[i];
            row_num = i;
        }
    }


    if(column_mx > row_mx)
    {
        cout<<column_num+1<<" column";
    }
    else
    {
        cout<<row_num+1<<" row";
    }
    return 0;
}
