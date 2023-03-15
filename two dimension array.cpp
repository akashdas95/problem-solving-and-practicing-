#include<bits/stdc++.h>//AC
using namespace std;

int main()
{
    int r,c,k;
    cin>>r>>c>>k;
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    //spiral order print
    /*cout<<"spiral print: ";
    int row_start=0,row_off=r-1,col_start=0,col_off=c-1;
    while(row_start<=row_off && col_start<=col_off)
    {
        //row-start print
        for(int col=col_start; col<=col_off; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //col-off print
        for(int row=row_start; row<=row_off; row++)
        {
            cout<<arr[row][col_off]<<" ";
        }
        col_off--;

        //row-end print
        for(int col=col_off; col>=col_start; col--)
        {
            cout<<arr[row_off][col]<<" ";
        }
        row_off--;

        //col-start print
        for(int row=row_off; row>=row_start; row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
    cout<<endl;
    //matrix transpose
    for(int i=0; i<r; i++)
    {
        for(int j=i;j<c; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"transpose of matrix: "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //search element in sorted two dimensional array
    int row=0,col=c-1;
    bool flag=false;
    while(row<r && col>=0)
    {
        if(arr[row][col]==k)
        {
            flag=true;
            cout<<row<<col;
            break;
        }
        else if(arr[row][col]>k)
            col--;
        else
            row++;
    }
    if(flag==false)
        cout<<"element not found";
    return 0;
}

