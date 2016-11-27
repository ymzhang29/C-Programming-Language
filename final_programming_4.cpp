#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
// 在此处补充你的代码
class Student{
    public:
    string name;
    int score;
    bool operator<(Student & s){
        return score < s.score;
    }
};
ostream & operator<<(ostream & os, Student & a){
    os << a.name;
    return os;
}
istream & operator>>(istream & is, Student & a){
    is >> a.name >> a.score;
    return is;
}
int main()
{
	int t;
	vector<Student> v;
	cin >> t;

	while( t--) {
		int n;
		cin >> n;
		Student st;
		v.clear();
		for( int i = 0;i < n; ++i ) {
			cin >> st;
			v.push_back(st);
		}
		sort(v.begin(),v.end());
		for( int i = 0;i < v.size(); ++ i)
			cout << v[i] << endl;
		cout << "****" << endl;
	}
	return 0;
}
