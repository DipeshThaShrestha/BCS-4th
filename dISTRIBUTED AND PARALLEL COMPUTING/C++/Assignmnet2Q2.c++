#include<iostream>
#include<omp.h>
using namespace std;

int main(){
    long long n = 100000000;
    long long total = 0;
    #pragma omp parallel for num_threads(4)
    for(long long i =1;i<=n;i++){
    #pragma omp critical
    {
    long long it, num;
    bool isPrime = true;
    num = i;
    if (num == 0 || num == 1) {
        isPrime = false;
    }
    else {
        for (it = 2; it <= num / 2; ++it) {
            if (num % it == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime){
        total = total+num;
        cout<<"prime : "<<num<<"\n";
        cout<<"total : "<<total<<"\n";
        }
}

    
    }
cout<<"Total sum of prime number up to "<<n<<" is "<<total<<"\n";
    

    return EXIT_SUCCESS;
}
