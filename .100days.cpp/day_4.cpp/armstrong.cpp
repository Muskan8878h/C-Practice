                            
#include <bits/stdc++.h> 
using namespace std;
bool isArmstrong(int num) {
    int count = to_string(num).length();
    int sum = 0;
    int org = num;
    while(org > 0){
        int ld = org % 10;
        sum += pow(ld, count); 
        org = org / 10;
    }
    if(sum==num)
        return true;
    else
        return false;
};
int main() {
    int number;
    cin>>number;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
                            
                        