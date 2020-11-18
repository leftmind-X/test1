#include <iostream>
using namespace std;
[[deprecated("not use this")]]int test(int a , int b);


int main()

{
  std::cout<< "test1"<< std::endl;
//  test(1,3);
  return 0;  
}

int test(int a, int b)
{

cout << a+b << endl;

return 0;

}
