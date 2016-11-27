#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;

int main()
{
	string s = "132";
	while (next_permutation(s.begin(),s.end())) {
		cout << s << endl; 
	}
	return 0;
}
