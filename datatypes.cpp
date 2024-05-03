#include<iostream>
#include<climits>

using std::endl;

int main()
{
    std::cout << "Integer types" << endl;
    std::cout << "short: " << sizeof(short)*8 << "bits" << endl;
    std::cout << "int: " << sizeof(int)*8 << "bits" << endl;
    std::cout << "long: " << sizeof(long)*8  << "bits" << endl;
    std::cout << "long long: " << sizeof(long long)*8  << "bits" << endl;

    std::cout << endl;
    std::cout << "Floating points" << endl;
    std::cout << "float:" << sizeof(float)  << "bits" << endl;
    std::cout << "double:" << sizeof(double)  << "bits" << endl;
    std::cout << "long double:" << sizeof(long double)  << "bits" << endl;


    std::cout << endl;
    std::cout << "char:" << sizeof(char)*8  << "bits"  << endl;
    std::cout << "string:" << sizeof(std::string)  << "bits" << endl;
    
    std::cout << endl;
    std::cout << "Max and Min values" << endl;
    std::cout << endl;
    std::cout << "Max and Min of short: "<< SHRT_MAX << " " << SHRT_MIN << endl;
    std::cout << "Max and Min of unsigned short: "<< USHRT_MAX << " 0" << endl;

    std::cout << endl;
    std::cout << "Max and Min of int: "<< INT_MAX << " " << INT_MIN << endl;
    std::cout << "Max and Min of unsigned int: "<< UINT_MAX << " 0" << endl;


    std::cout << endl;
    std::cout << "Max and Min of long: "<< LONG_MAX << " " << LONG_MIN << endl;
    std::cout << "Max and Min of unsigned long: "<< ULONG_MAX << " 0" << endl;


    std::cout << endl;
    std::cout << "Max and Min of long long: "<< LLONG_MAX << " " << LLONG_MIN << endl;
    std::cout << "Max and Min of unsigned long long: "<< ULLONG_MAX << " 0" << endl;
}