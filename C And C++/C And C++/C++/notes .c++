#include<iostream>
#include<cstring>//#include<string.h> both will work


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
    cin.getline(str,10);
    cout<<(str)<<endl;
    cin.ignore();//just like fflush(stdin);
    
    cin.getline(str,10);
    //one new function
    
    
    strstr(main,substr); this will check for a substring in
    a main string if main string contains a substring it will point to ist 
    char of main string and return the rest of the string
    
    
    //another function of string
    strchr(mainstr,char);
    it will return occurence of given char
    strrchr(same as above)
    it will search from right hand side in a string
    
    //another function of string
    strtol(str,NULL,radix of number sys); will convert all the integers in a string to long int
    strtof(str,NULL,radix of number sys); will convert all the integers in a string to a float 
    NULL implies the end of the string

    to tokenise the string
    use strtok(str,"the symbols which are used in the string");
    example:
    str="x=10;y=20;z=5;"
    so here 
    cout<<strtok(str," ; ");
    we have to use it in a loop in oreder to get the next token
    and next time if we are using for same str we write
    strtok(NULL,";");
    NULL is written in place of str to allow it to continue in same string inside a for loop


    return 0;
}