#include<iostream>
using namespace std;

int gcd(int x,int y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x, int y){

    int a = 0;
    
    if(x % y !=0)
        a = gcd(y, x%y);
    else
        a = y;

    return a;
    
}
