#include <bits/stdc++.h>
using namespace std;

void swapNumbers(int *a,int *b){

int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

int num1 = 5;
int num2 = 11;

cout<<"Before swaping Numbers: "<<endl;
cout<<num1<<endl;
cout<<num2<<endl;



swapNumbers(&num1,&num2);
cout<<"After swaping Numbers: "<<endl;
cout<<num1<<endl;
cout<<num2;

return 0;

}


