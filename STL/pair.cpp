#include<iostream>
#include<utility>
using namespace std;
 void explainpair(){
pair <int, int> p= {1,2};
cout << p.first << p.second << endl;
pair <string, int> p1 = {"raju", 1};
cout << p1.first << p1.second << endl;
 }

int main(){
  //code here
explainpair();

return 0;
}
