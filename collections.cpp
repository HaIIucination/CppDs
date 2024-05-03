#include<iostream>
#include<vector>

void print_vector(std::vector<int> );

int main(){
  std::vector<int> a;
  a.push_back(10);
  int n;
  while(1){
  if(std::cin >> n) a.push_back(n);
  else break;
  }
  print_vector(a);
  for(int i=0;i<a.size();i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
}


void print_vector(std::vector<int> a)//use &a for pass by reference and share data
{
  
  a.push_back(999);
  for(int i=0;i<a.size();i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
}
