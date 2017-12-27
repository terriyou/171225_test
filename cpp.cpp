#include <iostream>
using namespace std;
int main(void)
{ 
  for (int b = 1; b < 10; b++) 
  {
    cout << b << "단\n" ;  
    for (int a = 1; a < 10; a++)  
    {   
      cout << b << " * " << a << " = " << b * a << endl;  
    }  
    cout << "\n"; }
}
