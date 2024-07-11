#include<iostream>
using namespace std;
class Solution
{
public:
    long long sumOfDivisors(long long  N)
    {
        // Write Your Code here
        long long sum=0;
        for (long long i=1; i<=N;i++) {
            sum=sum+(N/i)*i;
        }
        return sum;
    }
};
int main(){
    int N;
    cin >> N;
    Solution obj;
    long long result = obj.sumOfDivisors(N);
    cout << "Sum of divisors: " << result << endl;
    return 0;
}