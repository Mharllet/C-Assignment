#include <iostream>
using namespace std;

int main()
{
  int num, i, j=0;

  cout << "Enter number: ";
  cin >> num;

  //checking for prime number
  for (i=1, i <= num; i++)
  {
  if ((num % 1) == 0)
  {
    j++;
  }
 }
 if (j == 2)
	cout << "\n" << num << " is a prime number.\n";
 else
	cout << num << " is not a prime number.\n";
 return 0;
}
