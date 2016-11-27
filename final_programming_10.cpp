#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 在此处补充你的代码
template<typename Tval, typename Tfuc>
void my_for_each(Tval a, Tval b, Tfuc fp){
    while(a != b){
        fp(*a++);
    }
}
void Print(int n)
{
	cout << n*n << ",";
}
struct MyPrint
{
	void operator()( const string & s ) {
		cout << s << ",";
	}
};
int main()
{
	int t;
	int a[5];
	vector<string> vt;
	cin >> t;
	while( t--) {
		vt.clear();
		for(int i = 0;i < 5; ++i)
			cin >> a[i];
		for(int i = 0;i < 5; ++i) {
			string s;
			cin >> s;
			vt.push_back(s);
		}
		my_for_each(a,a+5,Print);
		cout << endl;
		my_for_each(vt.begin(),vt.end(),MyPrint());
		cout << endl;
	}

	return 0;
}
