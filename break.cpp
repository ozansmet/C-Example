#include <iostream>
using namespace std;
	int main()
	{
	   int count; 
	   for ( count = 1; count <= 10; count++ )
	   {
	      if ( count % 3 == 0 )                     
	         continue; 
	        cout << count << " ";   
	    if ( count % 5 == 0 )                     
	         break; 	    		      
	         cout << count << " ";
	    } 	
		   cout << "\nBroke out of loop at count = " << count << endl;
		   return 0;
	}
