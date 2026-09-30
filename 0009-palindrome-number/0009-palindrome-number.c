bool isPalindrome(int x) {
    int copy;
    int rem=0;
    long long int rev=0;
    
    int origin=x;
    if(x<0)
    {
        return false;
    }
    else
    {
    while(x!=0)
    {
       rem=x%10;
       rev=rev*10+rem;
       x=x/10;
    }
    }
    return origin==rev;
    
    
}