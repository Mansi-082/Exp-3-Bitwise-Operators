//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b; //taking inputs 
    //operations: 
    cout<<"Bitwise AND ("<<a<<"&"<<b<<"): "<<(a&b)<<endl;
    cout<<"Bitwise OR ("<<a<<"|"<<b<<"): "<<(a|b)<<endl;
    cout<<"Bitwise XOR ("<<a<<"^"<<b<<"): "<<(a^b)<<endl;
    cout<<"Bitwise NOT (~"<<a<<"): "<<(~a)<<endl;
    cout<<"Left Shift ("<<a<<"<<1): "<<(a<<1)<<endl;
    cout<<"Right Shift ("<<a<<">>1): "<<(a>>1)<<endl;
    return 0;
}
