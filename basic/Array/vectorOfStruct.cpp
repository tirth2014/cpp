#include<bits/stdc++.h>
using namespace std;

struct Student{
	int en;
	string name;
};


int main(){

vector<Student> v;
v.push_back(Student());
v[0].en=18;  v[0].name = "tirth";
v.push_back({19,"milan"});

for(int i=0; i<v.size(); i++){
	cout<< "en.no: " <<v[i].en << "  Name: "<<v[i].name << endl;
}
  return 0;
}
