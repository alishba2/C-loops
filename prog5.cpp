#include <iostream>
using namespace std;

int main()
{
    int i,j;
     int k = 2 * 4 - 2;

    for(i=1;i<=4;i++){
         for (int j = 0; j < k; j++)
            cout << " ";
            k = k - 1;
           
        for(j=1;j<=i;j++){
             if(i==1 || i==3)
           cout<<"*"<<" ";
            else if(i==4)
             cout<<3<<" ";
            else
            cout<<0+i<<" ";
        }
    
        cout<<endl;
    }
   
}