#include<iostream>

double pol(double base, int pow = 2)
{
  int total = 1;
  for(int i=0;i<pow;i++)
  {
    total*=base;
  }
  return total;
}

int main(){
  int base,pow;
  std::cin >> base >> pow;
  std::cout << pol(base) << std::endl;
  std::cout << pol(base, pow) << std::endl;


}
