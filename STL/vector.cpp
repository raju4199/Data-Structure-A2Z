#include<iostream>
#include<vector>
using namespace std;
 void explainVector(){
     vector<int> v;
     v.push_back(1);
     v.emplace_back(2);
     v.push_back(11);
     v.pop_back();
 }
int main(){
    explainVector();

     return 0;
}