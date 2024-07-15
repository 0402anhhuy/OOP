#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    double length;
    double width;
public:
    Rectangle(){
        // Default Constructor
    }

    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }
    
    //Dùng khi truyền vào không có tham số
    //Setter
    void setLength(double length){
        this->length = length;
    }

    void setWidth(double width){
        this->width = width;
    }

    //Getter
    double getLength(){
        return length;
    }

    double getWidth(){
        return width;
    }
    
    double getArea(){
        return length * width;
    }

    double getPerimeter(){
        return (length + width) * 2;
    }

};

int main(){
    system("cls");
    Rectangle *r1 = new Rectangle();
    double a, b; cin >> a >> b;
    r1->setLength(a);
    r1->setWidth(b);
    cout << "Area = " << r1->getArea() << endl;
    cout << "Perimeter = " << r1->getPerimeter() << endl;
    return 0;
}