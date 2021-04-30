#include <iostream>
using namespace std;

int main()
{
    int rows = 3; ;
    int k = 2 * 4 - 2;


    for(int i = 1; i <= rows; i++)
    {
        for(k=rows-i;k>0;k--){
          cout<<" ";
        }
     
        for(int j = i; j >0; --j)
       
      
            cout << j*i;
    
    cout << endl;

    }
    rows=2;
     for(int i = rows; i >= 1; --i)
    {
        for(k=rows-i+1;k>0;k--){
          cout<<" ";
        }
     
        for(int j = i; j  >0; --j)
       
        {
            
            cout << j*i;

           
        }
        cout << endl;
         
    }
   

       
       
    
}
    
  