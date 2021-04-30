#include<iostream>
using namespace std; 

int main(){
    int i , j;

     for(i=4;i>=1;i--){
        for(j=1;j<=i;j++){

          
         if(i!=2 && i!=1){
            cout<<"*"<<" ";
         }
         else if(i==1){
            cout<<j*3;
         }
         else
         cout<<j<<" ";
        }
    
        cout<<endl;
     }
}