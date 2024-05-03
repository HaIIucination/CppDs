#include<iostream>
#include<fstream>
#include<string>

int main(){
  std::ofstream file("hello.txt");
  std::string x;
  file >> x;
  std::cout << x;
  file.close();
}
