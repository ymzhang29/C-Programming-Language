#include<vector>
#include<list>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    vector< list<int> > v;
    vector<int> vid;
    //list<int> l;
    //l.push_back(2);
    //v[0] = l;
    
    int ncmd;
    cin >> ncmd;
    string cmd;
    int id, id1, id2, num;
    int R, R1, R2;
    for(int i = 0; i < ncmd; i++){
        cin >> cmd;
        //cout << cmd << endl;
        if(cmd == string("new")){
            cin >> id;
            vid.push_back(id);
            list<int> l;
            v.push_back(l);
            //cout << "new done" << endl;
        }else if(cmd == string("add")){
            cin >> id >> num;
            R = find(vid.begin(), vid.end(), id) - vid.begin();
            v[R].push_back(num);
            //cout << "add done  " << endl;
        }else if(cmd == string("out")){
            cin >> id;
            list<int>::iterator it;
            R = find(vid.begin(), vid.end(), id) - vid.begin();
            for(it = v[R].begin(); it != v[R].end(); it++){
                cout << *it << " ";
            }
            cout << endl;
            //cout << "out done" << endl;
        }else if(cmd == string("merge")){
            cin >> id1 >> id2;
            R1 = find(vid.begin(), vid.end(), id1) - vid.begin();
            R2 = find(vid.begin(), vid.end(), id2) - vid.begin();
            v[R1].merge(v[R2]);
            //cout << "merge done" << endl;
        }else if(cmd == string("unique")){
            cin >> id;
            R = find(vid.begin(), vid.end(), id) - vid.begin();
            v[R].unique();
            //cout << "unique done" << endl;
        }
    }
    
    return 0;
}
