#include<vector>
#include<list>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    vector< list<int> > v(32);
    vector<int> vid(32);
    list<int> l;
    l.push_back(2);
    v[0] = l;
    
    int ncmd;
    cin >> ncmd;
    string cmd;
    for(int i = 0; i < ncmd; i++){
        cin >> cmd;
        cout << cmd << endl;
        switch(cmd){
            case string("new"):{
                cout << "new done";
                break;
            default: break;
            }
        }
    }
    
    return 0;
}
