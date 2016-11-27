#include <iostream>
using namespace std;
int main()
{
    int num, i, j, ncmd;
    cin >> ncmd;
    while(ncmd--){
        cin >> num >> i >> j;
        cout << (( num & 1 << i) + (num & 1 << j) ^ (1 << j)) << endl;
    }
	return 0;
}
