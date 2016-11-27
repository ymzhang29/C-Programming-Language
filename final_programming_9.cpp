#include <iostream>
using namespace std;
// 在此处补充你的代码

class A{
    public:
    int num;
    char name;
    //A(int n, char c = 'A'): num(n), name(c) {}
    A(int n): num(n), name('A') {}
};

class B: public A{
    public:
    //B(int n): A(n, 'B') {}
    char name;
    B(int n): A(n), name('B') {}
};

void PrintInfo(A* & a){
    cout << a->name << " " << a->num << endl;
}

int main()
{
    A *a[100];
	int t;
	cin >> t;
	while( t -- ) {
		int n;
		cin >> n;
		for( int i = 0;i < n; ++i)	{
			char c; int k;
			cin >> c >> k;
			if( c == 'A'){
				a[i] = new A(k);
			}
			else{
				a[i] = new B(k);
			}
		}
		cout << n << endl;
		for( int i = 0;i < n; ++i)
			PrintInfo(a[i]);
		cout << "****" << endl;
	}
}

