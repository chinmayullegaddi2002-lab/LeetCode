int addDigits(int num) {
    if(num<1)
    {
        return 0;
    }
    else if(num%9==0)
    {
        return 9;
    }
    else
    {
        return num%9;
    }
}