#include <iostream>
#include<vector>
using namespace std;
int iterativeSum(vector<int>num)
{
    int sum=0;
     for(int i=0;i<num.size();i++)
    {
        sum=num[i]+sum;
    }
    cout<<"iterative Sum:"<<sum;
}
int recursiveSum(vector<int>num,int index)
{
if (index < 0)
        return 0;
    return num[index] + recursiveSum(num, index - 1);
}

int main()
{
    int n;
    cout<<"enter the number you create arry:";
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<num.size();i++)
    {
        cout<<"enter the " <<i+1<<"number"<<endl;
        cin>>num[i];

    }
    iterativeSum(num);
     int rec=recursiveSum(num, n - 1);
    cout<<"recursive Sum is:"<<rec;
}
