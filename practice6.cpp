//
// Created by 周儀 on 2022/4/18.
//
#include <iostream>
using namespace std;

class Topology1{
public:
    int getArea(int l,int b){
        return l*b;
    }
};
class Topology2{
public:
    int getPerimeter(int l, int b) {
        return 2*(l+b);
    }
};
class Rectangle:public Topology1,public Topology2{
    int length,breadth;
public:
    Rectangle() = default;
    Rectangle(int l,int b):length(l),breadth(b){}
    int area(){
        return Topology1::getArea(length,breadth);
    }
    int perimeter(){
        return Topology2::getPerimeter(length,breadth);
    }
};
int main(){
    Rectangle rt;
    cout << "Area : " << rt.area() << endl;
    cout << "Perimeter : " << rt.perimeter() << endl;
    return 0;
}