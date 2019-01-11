#include <iostream>
using namespace std;

int main(){
    double x,i;
    double sum;
    double y=1;
    i = 2;
     
    
    while(i<70){
        sum = (y/i)+sum;
        i=i+1;
    }
    cout << sum ;
    return 0;
}