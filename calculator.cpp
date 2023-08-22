#include<iostream>
using namespace std;

float add(float x, float y){
    return x+y;
}
float subtract(float x, float y){
    if(x>y)
        return x-y;
    else
        return y-x;
}

float product(float a, float b){
    return a*b;
}

float divide(float a, float b){
    return a/b;
}

int main(){
    float a,b,c;
    int choice;
    char repeat;
    do{
        cout<<"Enter two numbers : ";
        cin>>a>>b;
        cout<<"Choose an operation \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
        cin>>choice;
        switch(choice){
            case 1:
               c =  add(a,b);
                break;
            case 2:
                c = subtract(a,b);
                break;
            case 3:
                c = product(a,b);
                break;
            case 4 :
                c = divide(a,b);
                break;
            default:
                cout<<"Choose correct option !!"<<endl;
        }
        cout<<"The result is "<<c<<endl;
        cout<<"Do you want to Repeat calculator??(Y/N) ";
        cin>>repeat;
    }while(repeat == 'Y' || repeat == 'y');
}