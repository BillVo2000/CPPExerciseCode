#include <iostream>
using namespace std;

int checkforprimenumber(int); // function declaration, not statement yet ({})

int main()
{
  int n;

  cout << "input an integer: ";
  cin >> n;

  if(checkforprimenumber(n)==0)
    cout << n << " is a prime number ";
  else
    cout << n << " is not a prime number ";
  return 0;
}


int checkforprimenumber(int n)
{
  bool flag = 0;

    if (n<2)
        return true;
  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;}
