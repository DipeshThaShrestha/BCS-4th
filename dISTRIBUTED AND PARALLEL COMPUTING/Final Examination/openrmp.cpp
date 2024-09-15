#include<iostream>
#include<omp.h>
using namespace std;

int main()
{
    cout<<"Parent: 4 Thread running"<<"\n";
    #pragma omp parallen num_threads(3)
    {
        #pragma omp thread1
        {
            cout<<"Thread # 2:running"<<"\n";
        }
         #pragma omp thread2
        {
            cout<<"Thread # 3:running"<<"\n";
        }
         #pragma omp thread3
        {
            cout<<"Thread # 1:running"<<"\n";
        }

    }

    
}