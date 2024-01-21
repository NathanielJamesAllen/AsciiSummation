#include <iostream>

//Input needs to be int
//summing up the number entered and adding the first digit to the result
//Need to convert ASCII to int form

using namespace std;

int main()
{
   //declaration
   char d1, d2, d3;
   int sum;
   
   //input
   cout << "Enter the first digit: " << endl;
   cin >> d1;
   cout << "Enter the second digit: " << endl;
   cin >> d2;
   cout << "Enter the third digit: " << endl;
   cin >> d3;
  
   //process
   sum = 2*int(d1)-48 + int(d2)-48 + int(d3)-48;//convert to ASCII by the length of the ASCII value from 48 x2 because adding d1 twice
  
   //output
   cout << d1 << d2 << d3 << endl; 
   cout << "The sum of the digits entered is " << sum << end;
   
   return 0;
}