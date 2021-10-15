#include <stdio.h>
using namespace std;
#include <iostream>
 
int main()
{
	
  int array[10], n, c, d;
 
  printf("Enter %d integers\n", n);
  
  for (c = 0; c < n; c++)
    // scanf("%d", &array[c]);
  
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < (n-c) ; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        int swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);     
	 int ii;
//	 cin >> ii;
 
  return 0;
}
