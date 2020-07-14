#include<iostream>
using namespace std;
int Fib(int n) {
   int fibo[n];
   fibo[0] = 0;
   fibo[1] = 1;
   for (int i = 2; i <= n; i++) {
      fibo[i] = fibo[i-1] + fibo[i-2];

   }
   return fibo[n];
}
int main () {
   int n;
   cout << "Enter number of terms: "; cin >>n;
   cout << n<<" th Fibonacci Term: "<<Fib(n)<<endl;
}
