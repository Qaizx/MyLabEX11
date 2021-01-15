#include<iostream>
using namespace std;

long long int fibonacci(long long int x);

int main(){

    cout << fibonacci(50);

    return 0; 

}

long long int fibonacci(long long int x){
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    
    return fibonacci(x-1) + fibonacci(x-2);
}
