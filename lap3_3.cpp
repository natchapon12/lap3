#include <iostream>
using namespace std;

int main(){
    double x,i;
    double sum;
    double y=1;
    i = 6;
     
    
    while(i<19){
        sum = (y/i)+sum;
        i=i+1;
    }
    cout << sum ;

    return 0;
}