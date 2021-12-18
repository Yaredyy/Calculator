//
//  main.cpp
//  Calculator
//
//  Created by yared yohannes on 11/29/21.
//
class calculation{
public:
    calculation(){
        
    }
    int add(int first, int second){
        int result= first+second;
        return result;
    }
    int minus(int first, int second){
        int result= first-second;
        return result;
    }
    int multi(int first, int second){
        int result= first*second;
        return result;
    }
    int divide(int first, int second){
        int result= first/second;
        return result;
    }
};


#include <iostream>
using namespace std;


int main(){
    int first=0,second=0;
    bool flag=true;
    char sign;
    int loop=1;
    calculation calc;
    cout<<"Welcome to the calculator program.\n";
    
    do{
        cout<<"Please enter the first value: ";
        cin>>first;
        cout<<"Please enter the desired operation(+,-,*,/): ";
        cin>>sign;
        cout<<"Please enter the second value: ";
        cin>>second;
        if(sign=='+'){
            cout<<"Result: "<< calc.add(first, second)<<"\n";
        }
        else if(sign=='-'){
            cout<<"Result: "<< calc.minus(first, second)<<"\n";
        }
        else if(sign=='*'){
            cout<<"Result: "<< calc.multi(first, second)<<"\n";
        }
        else if(sign=='/'){
            cout<<"Result: "<< calc.divide(first, second)<<"\n";
        }
        
        loop++;
        
        cout<<"Do you want to continue(true or false): ";
        cin >> boolalpha >> flag;
        
        if(flag==true){
            loop=1;
            cout<<"------------------------------------------------------------------------------------\n";
        }
        
    }while(loop<2);
    
    return 0;
    
}
