#include<bits/stdc++.h> typedef unsigned long long int ull ; using namespace std; 
  
//ull sum=0; 
ull bigSum=0; 
mutex mu; 
void print(ull result) 
{ 
    mu.lock(); 
    bigSum=bigSum+result; 
    mu.unlock(); 
     
} 
void loop1() 
{ 
    ull sum1=0;     for(ull i=1;i<250000000;i++) 
    { 
        sum1=sum1+i; 
    } 
   print(sum1);    
} 
  
void loop2() 
{ 
    ull sum2=0;     for(ull i=2500000000;i<5000000000;i++) 
    { 
        sum2=sum2+i; 
    } 
    print(sum2); 
     
} 
  
  
void loop3() 
{ 
    ull sum3=0;     for(ull i=5000000000;i<7500000000;i++) 
    { 
        sum3=sum3+i; 
    } 
    print(sum3); 
     
} 
  
  
void loop4() 
{ 
    ull sum4=0;     for(ull i=7500000000;i<=10000000000;i++) 
    { 
        sum4=sum4+i; 
    } 
    print(sum4); 
     
} 
int main(int argc, char const *argv[]) 
{ 
    thread t1(loop1);     thread t2(loop2);     thread t3(loop3);     thread t4(loop4); 
  
  
    t1.join();     t2.join();     t3.join();     t4.join(); 
     
    cout<<bigSum<<endl; 
    return 0; 
} 
 

