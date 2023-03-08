// Write a Program to reverse a string.
#include <iostream>
using namespace std;
void revers(string a) {
  int len = a.length();
  int k = len - 1;
  int i = 0;
  while (i <= k) {
    swap(a[i], a[k]);
    k = k - 1;
    i = i + 1;
  }
  cout << a;
}

int main() {
  // std::cout << "Hello World!\n";
  string a = "Hello";
  revers(a);
}