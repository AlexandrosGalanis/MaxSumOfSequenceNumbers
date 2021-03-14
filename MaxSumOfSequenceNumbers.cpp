//O(n^3)
#include<iostream>

using namespace std;


int maxSubArraySum(int a[],int lenght){

    int maximumSum=0;
    int starting=0;
    int ending =0;

    for (int left = 0; left < lenght; left++) {
        int sum = 0;

        for (int right = left; right < lenght; right++) {
            sum = sum + a[right];

            if (sum > maximumSum) {
                maximumSum = sum;
                starting = left;
                ending = right;
            }
        }
    }
    cout<<"Max subarray sum is between:"<<starting<<" and :"<<ending<<endl;
    return maximumSum;
}


int main(){
    int a[]= {-9 , 5, -4, 7, 10,-2};

    int lenght = sizeof(a)/sizeof(int);
    int max_sum = maxSubArraySum(a,lenght-1);


    cout<<"The table with length:"<<lenght<<" has max sequence sum:"<<max_sum<<endl;

    return 0;
}
