#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=1;
    int c;
    char op = '+';

    switch(op){
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            if(b == 0){
                cout << "Dividing by 0 is not allowed " << endl;
                return 0;
            } else {
                c=a/b;
            }
            break;
        default:
            cout << "Invalid operator" << endl; 

    }

    cout <<" a "<<op<<" b = "<<c<<endl;
        return 0;
}