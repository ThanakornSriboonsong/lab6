#include<iostream>
using namespace std;

int main(){
    int a = 1 ;
    int b = 0 ;
    int c = 0 ;

    while( a != 0 ){
    
    cout << "Enter an integer: ";
    cin >> a ;
    if( a %2 == 0){
        b++ ;
    }else if(a%2 == 1) {
        c++ ;
    }
    
    
    
    }
    cout << "#Even numbers = ";
    cout << b-1<< endl ;
    cout << "#Odd numbers = ";
    cout << c ;
   
    return 0;
}