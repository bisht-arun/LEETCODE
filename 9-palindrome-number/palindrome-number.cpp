class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x<0)
        {
            return false;
            }
        
    int n, num, dig;
    long long rev=0;
    n=x;
   while(x>0){
         dig=x%10;
         x=x/10;
         rev=rev*10+dig;
     }

     if (n==rev)
     {
        return true;
     }
     return false;    
    }
};
