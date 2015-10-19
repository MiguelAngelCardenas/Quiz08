#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int sumsquares_list (vector<int> list){
  int size = list.size();
  int sum = 0;
  for (int i = 0; i<size; i++){
    sum = sum + (pow(list[i],2));
  }
  return sum;
}

int main(){
  vector<int> list(5);
  int n = 0;
  for (int i=0; i<list.size();i++){
    n = n + 1;
    list[i]=n;
  }
  int sum = sumsquares_list(list);
  cout << sum << endl;
  return 0;
}
