#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int findSmallest(int * begin, int * end)
{
    int small = *begin;
    while(begin != end){
        if(small > (*begin)) small = *begin;
        begin++;
    }
    return small;
}

int findBiggest(int * begin, int * end)
{
    int big = *begin;
    while(begin != end){
        if(big < (*begin)) big = *begin;
        begin++;
    }
    return big;
}

int main() {
	int array[100]; 
	srand(time(NULL));
	for(int i = 0; i < 100; i++) 
		array[i] = rand() % 100;
		cout << "Smallest number is : " << findSmallest(array, array+100) << endl;
		cout <<	"Biggest number is : " << findBiggest(array, array+100) <<endl;
		cin.get();
	
}
