#include <iostream>
#include <map>
using namespace std;

struct Student
{
	int id;
	string name;
	int score;
	Student(int id_,const string & nm,int sc):
		id(id_),name(nm),score(sc) { }
	Student() { }
};

struct Info
{
	string name;
	int score;
	Info(const string & s,int sc):name(s),score(sc) { }
};

// 在此处补充你的代码
pair<int, Info> MyMakePair(Student & st){
    pair<int, Info> p(st.id, Info(st.name, st.score));
    //p.first = st.id;
    //p.second = Info(st.name, st.score);
    return p;
}

Student MyFind(map<int, Info> & mp, int n){
    map<int, Info>::iterator it;
    it = mp.find(n);
    Student st(it->first, it->second.name, it->second.score);
    //st.id = it->first;
    //st.name = it->second.name;
    //st.score = it->second.score;
    return st;
}

int main()
{
	map<int,Info>  mp;
	int t;
	cin >> t;
	while( t -- ) {
		mp.clear();
		int n;
		cin >> n;
		Student st;
		for( int i = 0;i < n; ++i) {
			cin >> st.id >> st.name >> st.score;
			mp.insert(MyMakePair(st));
		}
		cin >> n;
		st = MyFind(mp,n) ;
		cout << st.name << " " << st.score  << endl;
	}
	return 0;
}
