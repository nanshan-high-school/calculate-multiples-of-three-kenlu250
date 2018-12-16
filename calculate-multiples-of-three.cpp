#include <iostream>
using namespace std;

int main() {

  string test2;
  int test1 = 0;
  int test3 = 0;
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int total = 0;
  cout << "請輸入數字:";
  cin >> test1;
  cout << "請輸入符號:";
  cin >> test2;
  cout << "請輸入數字:";
  cin >> test3;
  

  while (test1 >= 1){
    test1 = test1 - 1;
    num1++;
  }

  for (int b = 0; b < test2[b]; b++){
    char numb = test2[b];
    if (test2[b] == '*' || test2[b] == '+' || test2[b] == '-' || test2[b] == '/'){
      num2 = test2[b];
    }
  }
  
  while (test3 >= 1){
    test3 = test3 - 1;
    num3++;
  }

  if (num2 == '*'){
    cout << num1 * num3;
    total = num1 * num3;
  }
  else if (num2 == '/'){
    cout << num1 / num3;
    total = num1 / num3;
  }
  else if (num2 == '+'){
    cout << num1 + num3;
    total = num1 + num3;
  }
  else if (num2 == '-'){
    cout << num1 - num3;
    total = num1 - num3;
  }

  if (total % 3 == 0){
    cout << "是三的倍數";
  }
  else{
    cout << "不是三的倍數";
  }
}
