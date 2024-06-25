# Problems

1. https://www.geeksforgeeks.org/problems/count-digits5716/1

```
class Solution{
public:
    int evenlyDivides(int N){
        int n = N;
        int count = 0;
        while(N>0){
            int lastDigit = N % 10;
            if(lastDigit > 0){
                if(n % lastDigit == 0){
                    count++;
                }
            }
            N = N / 10;
        }
        return count;
    }
};
```

2. https://leetcode.com/problems/reverse-integer/description/

```
class Solution {
public:
  int reverse(int x) {
    int reverse = 0;
    while (x != 0) {
      int temp = x % 10;
      if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        return 0;
      reverse = reverse * 10 + temp;
      x = x / 10;
    }
    return reverse;
  }
};
```

3. https://leetcode.com/problems/palindrome-number/

```
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int value = x;
        int reverse = 0;
        while (x > 0) {
            if(reverse > INT_MAX/10 || reverse < INT_MIN){
                return 0;
            }
            reverse = reverse * 10 + (x % 10);
            x = x / 10;
        }
        return value == reverse;
    }
};
```

4. Premium Question -> error money not found

5. https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

```
long long sumOfDivisors(int N) {
  long long sum = 0;
  for (int i = 1; i <= N; i++) {
    sum += i * (N / i);
  }
  return sum;
}

```

6. https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

```

```

7. https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

```
class Solution {
public:
  vector<long long> lcmAndGcd(long long A, long long B) {
    // code here
    long long product = A * B;
    long long gcd;
    while (A != 0 && B != 0) {
      if (A > B) {
        A = A % B;
      } else {
        B = B % A;
      }
    }
    if (A == 0)
      gcd = B;
    else
      gcd = A;
    long long lcm = product / gcd;
    return {lcm, gcd};
  }
};
```
