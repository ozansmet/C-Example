#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "\tDate :  " <<(timePtr->tm_mday)<<"/"<<(timePtr->tm_mon)+1 <<"/"<<(timePtr->tm_year)+1900<<endl;
	cout<< "\tTime :  " <<(timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<<(timePtr->tm_sec) <<endl<<"\n";
	cout << "\tWeekday :  " <<(timePtr->tm_wday) <<endl;
	cout << "\tDay of year = " << (timePtr->tm_yday) <<endl;
	cout << "\tDaylight savings = " << (timePtr->tm_isdst) <<endl;
	cout <<endl;
	return 0;
}  



