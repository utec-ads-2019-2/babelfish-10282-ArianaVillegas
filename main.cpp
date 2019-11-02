#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

unordered_map<string,string> dict;
unordered_map<string,string>::iterator itr;

int main(){
    string to,en,fg; getline(cin,to);
    while(to.size()){
	stringstream ss(to);
	getline(ss,en,' ');
        getline(ss,fg,' ');
	dict[fg]=en;
	getline(cin,to);
    }
    while(cin>>fg){
	itr=dict.find(fg);
	if(itr!=dict.end()) cout<<dict[fg]<<'\n';
	else cout<<"eh\n";
    }
    return 0;
}
