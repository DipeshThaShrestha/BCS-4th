#include<iostream>
#include<thread>
#include<mutex>
#define ll long long
#define num 1000000
using namespace std;
mutex mu;
void print(ll int result)
{
mu.lock();
cout<<result<<endl;
mu.unlock();
}
void sumEven()
{
ll int sum=0;
for(ll int i=2;i<=num;i+=2)
{
sum=sum+i;
}
print(sum);
}
void sumOdd( )
{
ll int sum=0;
for (int i = 1; i <=num; i+=2)
{
sum=sum+i;
}
print(sum);
}
int main()
{
thread t1(sumEven);
thread t2(sumOdd);
t1.join();
t2.join();
sumEven();
sumOdd();
return 0;
}

