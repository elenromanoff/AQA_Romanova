#include<iostream>

using namespace std;

public class Main {
	setlocale(LC_ALL,"rus");
    public static void main(String[] args) {
    int[] myList = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    int share = myList[0];
    for (int i = 0; i < myList.length; i++) {
            if (myList[i] % 3 == 0) {
                System.out.println(myList[i]); 
            }
            if (isPrime(myList[i]) == 1) {
               System.out.println(myList[i]); 
            }
        }
    }
    static int isPrime(int n) {
      if (n < 2) return 0;

      for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
           return 0;
        }
      }
      return 1;
    }
}
