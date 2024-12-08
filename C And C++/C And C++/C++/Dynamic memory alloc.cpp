#include<iostream>


using namespace std;
int main(){
    // int a,b,c;
    // printf("Enter values of a and b\n");
    // cin>>a>>b;
    // c=a+b;
    // cout<<"The sum is "<<c;
    char *str=new char[10];
    cout<<sizeof str<<endl;// this will always give a fixed valu
                // coz memory has been allocated dynamically
    
    cout<<("Enter a string")<<endl;
    getline(cin,str);//Why is it showing the error mismatched types 'std::__cxx11::basic_string<_CharT, _Traits, _Alloc>' and 'char*'
                      //getline(cin,str);
    cout<<(str)<<endl;




    return 0;
}