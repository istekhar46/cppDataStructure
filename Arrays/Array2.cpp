#include <iostream>
using namespace std;

int main()
{
  // Array intialization ....
  int A[10] = {4, 4, 6, 5, 3, 4};
  int n = 10;

  // Adding Elements on a specific index .....

  A[6] = 154;

  // Displaying the Elements of the array ...

  for (int i = 0; i < n; i++)
    cout << A[i] << " ";
  cout << endl;

  // Displaying the size of the Array .....

  cout << sizeof(A) / sizeof(A[0]);

  return 0;
}