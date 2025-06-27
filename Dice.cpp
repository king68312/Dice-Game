#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
  int Die1, Die2;
  int sum = 0;
  string name;
  cout << "What is your name?" << endl;
  cout << "> ";
  cin >> name;
  cout << "Hello, " << name << "!"<< endl;
  srand((unsigned)time(NULL));
  cout << "Rolling dice..." << endl;
  Die1 = rand()%6+1;//rand()%6で0から5の値を出し、それらすべてを+1する
  cout << "Die 1: " << Die1 << endl;
  Die2 = rand()%6+1;
  cout << "Die 2: " << Die2 << endl;
  sum = Die1+Die2;
  cout << "Total value: " << sum << endl;
  if(sum > 7) cout << name << " won!" << endl;
  else cout << name <<" lost!" << endl;
}
