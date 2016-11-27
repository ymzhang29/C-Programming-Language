#include <iostream>
#include <list>
using namespace std;
// 在此处补充你的代码
class MyLess{
    public:
    bool operator()(const int & first, const int & second){
        if(first % 10 == second % 10){
            return first > second;
        }else{
            return first % 10 > second % 10;
        }
    }
};
int main()
{
	int t;
	cin >> t;
	list<int> lst;
	while( t--) {
		int n;
		cin >> n;
		lst.clear();
		int m;
		for( int i = 0;i < n; ++i) {
			cin >> m;
			lst.push_back(m);
		}
		lst.sort(MyLess());
		list<int>::iterator it;
		for( it = lst.begin(); it != lst.end(); ++ it) {
			cout << * it  << " ";
		}
		cout << endl;
	}
	return 0;
}
