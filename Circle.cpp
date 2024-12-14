#include<iostream>
using namespace std;
class Circle{
    int r;
    public :

    void setData(){
        cout<<"enter the radius :"<<endl;
        cin>>r;
    }

    void getData(){
        cout<<"the radius is : "<<r<<endl;
    }


    void displayArea(){
        cout<<"the area is : "<<3.14*r*r<<endl;
    }

    void displayCircumference(){
        cout<<"the circumference is "<<2*3.14*r<<endl;
    }
};
int main () {
    Circle c1, c2;

    c1.setData();
    c1.getData();
    c1.displayArea();
    c1.displayCircumference();
return 0;
}