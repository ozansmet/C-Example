/* This doc is for : Creating and sorting array list*/ /* And also it's designed by kappasutra */
#include <iostream>
using namespace std;
int main() {
	cout<<"enter number to declare array element:" <<endl;
int n;
cin>>n;
cout<<"Enter " << n <<"  number: "<<endl;
int array[n];
for(int i=0; i<n; i++) {
	cin >> array[i];
}
cout<< endl;
cout<<"inputs are :\n ";
for(int j=0; j<n; j++) {
	cout<<" \t Value at" <<j<<" Index : "<<array[j]<<endl;
}
cout <<endl;
int swap;
for(int i2=0; i2<(n-1); i2++){
	for(int j=0; j<(n-1); j++) {
		if(array[j] > array[j+1]) {
			swap = array[j];
			array[j] = array[j+1];
			array[j+1] = swap;
}
}
}
cout<<"Sorted array is :\n";
for(int i3=0; i3<n; i3++) {
	cout<<"\t Value at "<<i3<<" Index : " <<array[i3]<<endl; 
}
return 0;
}
