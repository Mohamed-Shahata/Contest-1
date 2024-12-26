#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;


// ======================== A. Winter Sale ========================//

void Winter_Sale(){
  float discount , price , priceBeforDiscount;
  cin >> discount >> price;
  priceBeforDiscount = (price / (1 - (discount / 100)));
  cout << fixed << setprecision(2) << priceBeforDiscount;
}

// ======================== B. Memo and Momo ========================//

  void MemoAndMomo(){
    long long a , b ,c;
    cin >> a >> b >> c;

    if((a % c) == 0 && (b % c) == 0){
      cout << "Both";
    }else if((a % c) == 0){
      cout << "Memo";
    }
    else if((b % c) == 0){
      cout << "Momo";
    }
    else{
      cout << "No One";
    }
  }

// ======================== C. Next Alphabet ========================//

void NextAlphabet(){
  char ch;
  cin >> ch;

  if((int(ch) >= 97 && int(ch) <= 122)){
    if(int(ch) == 122){
      cout << char(int(97));
    }else{
      cout << char(int(ch) + 1);
    }
  }
}

// ======================== D. Ali Baba and Puzzles ========================//

void AliBabaAndPuzzles(){
  long long A , B , C , D;
  cin >> A >> B >> C >> D;

  if((A + B - C) == D || (A + B * C) == D || (A - B + C) == D || (A - B * C) == D || (A * B + C) == D || (A * B - C) == D){
    cout << "YES";
  }else{
    cout << "NO";
  }
}

// ======================== E. Interval Sweep ========================//

void IntervalSweep(){
  int num1 , num2;
  cin >> num1 >> num2;

  if((num1 + 1) == num2 || num1 == num2 || (num1 - 1) == num2){
    if(num1 == 0 && num2 == 0){
      cout << "NO";
    }else{
      cout << "YES";
    }
  }else{
    cout << "NO";
  }
}

// ======================== F. Adding Bits ========================//

void AddingBits(){
  long long num1 , num2 , result;
  cin >> num1 >> num2;

  result = num1 ^ num2;

  cout << result;
}

// ======================== G. Katryoshka ========================//

void Katryoshka(){
  long long n , m , k , count = 0 , result;
  cin >> n >> m >> k;


  result = min({n, m , k});
  count += result;
  n -= result;
  m -= result;
  k -= result;

  result = min({n / 2, m , k});
  count += result;
  n -= result;
  m -= result;
  k -= result;

  result = min({n / 2, k});
  count += result;
  cout << count;
}

// ======================== H. Data Type Guessing ========================//

void DataTypeGuessing(){
  double num1, num2, num3, result ;
  cin >> num1 >> num2 >> num3;

  result = (num1 * num2) / num3;

  if(floor(result) == result){
    if(result > 2147483647 || result < -2147483648){
      cout << "long long";
    }else{
      cout << "int";
    }
  }else{
    cout << "double";
  }
}

// ======================== I. Lucky Numbers ========================//

void LuckyNumbers(){
  string num;
  cin >> num;

  int num1,num2;
  num1 = int(num[0]) - 48;
  num2 = int(num[1]) - 48;

  if(num1 == 0 || num2 == 0){
    cout << "YES";
  }else{
    if(num1 % num2 == 0 || num2 % num1 == 0){
      cout << "YES";
    }else{
      cout << "NO";
    }
  }
}