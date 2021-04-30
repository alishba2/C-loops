#include <iostream>
using namespace std;

int main()
{
    int rows = 4; ;
    int k = 2 * 4 - 2;


    for(int i = rows; i >= 1; --i)
    {
        for(k=rows-i;k>0;k--){
          cout<<" ";
        }
     
        for(int j = 1; j <= i; ++j)
       
        {
            if(i==1){
              cout<< 'D';
            }
            else if(i==3){
              cout<<char(j+'A'-1);
            }
            else
            cout << "*" ;

           
        }
        cout << endl;
    }

    return 0;
}
   
