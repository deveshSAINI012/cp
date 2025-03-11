//CodeNCode,GFG
// A simple C++ program to calculate
// Euler's Totient Function 
//Time Complexity: O(n log n)
#include <iostream>
using namespace std; 

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

// A simple method to evaluate Euler Totient Function 
int phi(unsigned int n) 
{ 
    unsigned int result = 1; 
    for (int i = 2; i < n; i++) 
        if (gcd(i, n) == 1) 
            result++; 
    return result; 
} 

// Driver program to test above function 
int main() 
{ 
    int n; 
    for (n = 1; n <= 10; n++) 
        cout << "phi("<<n<<") = " << phi(n) << endl; 
    return 0; 
} 

//EUler Tution Fn is Multiplicative Ie- 
// f(n*m)=f(n)*f(m), when Gcd(n,m)=1   !!!!!








// C++ program to calculate Euler's 
// Totient Function using Euler's
// product formula
//Time Complexity: O(√n)
#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{
    
    // Initialize result as n
    float result = n; 
 
    // Consider all prime factors of n 
    // and for every prime factor p,
    // multiply result with (1 - 1/p)
    for(int p = 2; p * p <= n; ++p)
    {
        
        // Check if p is a prime factor.
        if (n % p == 0)
        {
            
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
                
            result *= (1.0 - (1.0 / (float)p));
        }
    }
 
    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
  //Since in the set {1,2,....,n-1}, all numbers are relatively prime with n
  //if n is a prime number
 
    return (int)result;
}
 
// Driver code
int main()
{
    int n;
    
    for(n = 1; n <= 10; n++)
    {
        cout << "Phi" << "(" 
             << n << ")" << " = "
             << phi(n) <<endl;
    }
    return 0;
}




//[Further Optimization] Avoiding Floating-point Calculations
//Time Complexity: O(√n)
// C++ program to calculate Euler's
// Totient Function
#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{
    // Initialize result as n
    int result = n; 
 
    // Consider all prime factors of n 
    // and subtract their multiples 
    // from result
    for(int p = 2; p * p <= n; ++p)
    {
        
        // Check if p is a prime factor.
        if (n % p == 0) 
        {
            
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
                
            result -= result / p;
        }
    }
 
    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
        
    return result;
}
 
// Driver code
int main()
{
    int n;
    for(n = 1; n <= 10; n++)
    {
        cout << "Phi" << "(" 
             << n << ")" << " = "
             << phi(n) << endl;
    }
    return 0;
}

