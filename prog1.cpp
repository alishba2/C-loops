#include<iostream>
using namespace std;

int main(){

    int i , j,count;

    for(i=4;i>=1;i--){
        for(j=1;j<=i;j++){
            count++;
            cout<<char('A' +  count)<<" ";
        }
        cout<<endl;
    }
}