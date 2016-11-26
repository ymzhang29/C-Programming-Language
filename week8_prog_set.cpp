#include<set>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    multiset<int> ms;
    set<int> ms_backup;
    int ncmd;
    cin >> ncmd;
    string cmd;
    int val, num;
    for(int i = 0; i < ncmd; i++){
        cin >> cmd;
        //cout << cmd << endl;
        if(cmd == string("ask")){
            cin >> val;
            if(ms_backup.find(val) != ms_backup.end()) cout << 1 << " " << ms.count(val) << endl;
            else cout << 0 << " " << ms.count(val) << endl;
            //cout << "new done" << endl;
        }else if(cmd == string("add")){
            cin >> val;
            ms.insert(val);
            ms_backup.insert(val);
            cout << ms.count(val) << endl;
        }else if(cmd == string("out")){
            //cout << "out done" << endl;
        }if(cmd == string("del")){
            cin >> val;
            cout << ms.count(val) << endl;
            ms.erase(val);
            //cout << "new done" << endl;
        }
    }
    
    return 0;
}
