
int product(int num)
{
    int ans=1;
    while(num>0)
    {
        int rem=num%10;
        num=num/10;
        ans=ans*rem;
    }
    return ans;
}


int sum(int num)
{
    int ans=0;
    while(num>0)
    {
        int rem=num%10;
        num=num/10;
        ans=ans+rem;
    }
    return ans;
}


class Solution {
public:
    int subtractProductAndSum(int num) {
        
      int productResult=product(num);
       int sumResult=sum(num);
        
        int ans=productResult-sumResult;
        return ans;
    }
};