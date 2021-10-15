/* This doc is for : Max and min value of sums*/ /* And also it's designed by kappasutra */
#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
using namespace std ; 
cout<< "Please enter first number"<<endl;
double a;
cin>>a;
system("CLS");
cout<< "Please enter second number"<<endl;
double b;
cin>>b;
system("CLS");
cout<< "Please enter third number"<<endl;
double c;
cin>>c;
system("CLS");
int sumMax = a+b+c;
if( (a+b) >= (a+c) && (a+c) > (b+c)) { /*  a>b>c */ /*a>b>=c */ 
cout<<"The result of multiplications of the largest numbers is : " << a*b <<endl;
cout<<"The result of multiplications of the smallest numbers is : " << b*c <<endl;
cout<<"Sums of max two number : "  << a+b <<endl;
cout<<"Sums of min two number : "  << b+c <<endl; 	
}
if( (b+c) >= (a+c) && (b+a) > (b+c)) { /* b>a>c */ /* b>=a>c */
cout<<"The result of multiplications of the largest numbers is : " << b*a <<endl;
cout<<"The result of multiplications of the smallest numbers is : " << a*c <<endl;
cout<<"Sums of max two number : " << a+b <<endl;
cout<<"Sums of min two number : " << a+c <<endl;
}
if( (b+c) > (a+c) && (b+a) >= (b+c)) { /* b>a>c */ /* b>a=>c */
cout<<"The result of multiplications of the largest numbers is : " << b*a <<endl;
cout<<"The result of multiplications of the smallest numbers is : " << a*c <<endl;
cout<<"Sums of max two number : " << a+b <<endl;
cout<<"Sums of min two number : " << a+c <<endl;
}
if( (c+a) > (b+a) && (c+b) >= (c+a) ) { /* c>b>a */ /* c>b>=a*/
cout<<"The result of multiplications of the largest numbers is : " << b*c <<endl;
cout<<"The result of multiplications of the smallest numbers is : " << a*b <<endl;
cout<<"Sums of max two number : " << b+c <<endl;
cout<<"Sums of min two number : " << a+b <<endl;
 }
if( (c+a) > (b+c) && (b+c) >= (b+a)) { /* c>a>b */ /* c>a>=b */ 
cout<<"The result of multiplications of the largest numbers is : " << a*c <<endl;
cout<<"The result of multiplications of the smallest numbers is : " << a*b <<endl; 
cout<<"Sums of max two number : " << a+c <<endl;
cout<<"Sums of min two number : " << a+b <<endl;	
}
if( (b+a) >= (a+c) && (b+c) > (b+a)) { /* b>c>a */ 
cout<<"The result of multiplications of the largest numbers is : " << b*c <<endl;
cout<<"The result of multiplications of the smallest numbers is : " << a*c <<endl;
cout<<"Sums of max two number : " << b+c <<endl;
cout<<"Sums of min two number : " << a+c <<endl; 
}
if(a*b*c == 3*a)
cout<<"Sums of these three same numbers :" << sumMax <<endl;
cout<<"First number is :" << a <<"\n"<<"Second number is :"<< b << "\n"<<"Third number is :" << c <<"\n"<<endl;
}


