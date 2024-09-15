#include<bits/stdc++.h> 
using namespace std; 
  
int ans=0; 
mutex mu; 
void print(int result) 
{ 
    mu.lock();     cout<<result<<endl;     mu.unlock(); 
} 
  
void add(int a, int b) 
{ 
    int ans=a+b;     print(ans); 
} 
void sub(int a, int b) 
{ 
    int ans=a-b;     print(ans); 
} 
void multiply(int a, int b) 
{ 
    int ans=a*b;     print(ans); 
} 
void divide(int a, int b) 
{ 
    int ans=a/b;     print(ans); 
} 
  
int main(int argc, char const *argv[]) 
{     int a,b; 
    cin>>a>>b; 
     
    thread t1(add,a,b);     thread t2(sub,a,b);     thread t3(divide,a,b);     thread t4(multiply,a,b); 
  
    t1.join();     t2.join();     t3.join();     t4.join(); 
  
    return 0; 
} 
 
