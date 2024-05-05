#include<iostream>

struct Rectangle
{
  double length;
  double width;
};

double area(double length, double width){
  return length*width;
}
double area(double length){
  return length*length;
}
double area(Rectangle rect){
  return rect.length*rect.width;
}

int main(){
  Rectangle rect;
  rect.length = 10;
  rect.width = 10;
  std::cout << area(rect.length, rect.width) << std::endl;
  std::cout << area(rect.length) << std::endl;
  std::cout << area(rect) << std::endl;
  

}
