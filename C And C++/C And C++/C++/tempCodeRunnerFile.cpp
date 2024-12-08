//Class called circles
#include<iostream>
#include<cmath>
#define PI 3.14
//#define A

using namespace std;
 
class Circle1{
    private:
    int radius=0;
     
    public:
    void getdata(){
    cout<<"Enter Radius"<<endl;
    cin>>radius;
    //cout<<radius<<endl;
    }
    void circumference(){
        cout << 2*PI*radius<<endl;
    }
    void area(){
        cout <<PI*pow(radius,2);
    }
};

class Circle{
    private: 
    int radius =0;
    public:
    Circle(int rad): radius(rad){}   
    void Printarea(){
        cout<<PI*pow(radius,2);
        }
    void PrintCircumf(){
        cout<<2*PI*radius<<endl;
    }

};

  
    

int main(){
#ifdef A
{
    Circle1 cr ;
    cr.getdata();
    cr.circumference();
    cr.area();
    return 0;
}
#endif
#ifndef A
{int radius;
cout<<"Enter Radius"<<endl;
cin>>radius;
    Circle cr(radius);
cr.PrintCircumf();
cr.Printarea();
return 0;
}
#endif
}

