#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
ostream & operator<<(ostream & os, string (*p)()){
    cout << p();
    return cout;
}
ostream & operator<<(ostream & os, int (*p)()){
    cout << p();
    return cout;
}
string Print1() 
{
	return "****";	
}
int Print2() 
{
	return 100;	
}

int main()
{
	cout << Print1 << Print2 << endl; 
	return 0;
}
