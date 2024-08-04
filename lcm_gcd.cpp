#include <iostream>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int num1,num2,gcd,lcm;
cin>>num1>>num2;
    int reminder,a,b;
    a=num1;
    b=num2;
    if(a==0)
    gcd=b;
    else if(b==0)
    gcd=a;
else{

    reminder=a%b;
    while (reminder!=0)
    {
a=b;
b=reminder;
reminder=a%b;

    }
    
    gcd=b;
    
}
lcm=(num1*num2)/gcd;
cout<<lcm;
    return 0;
}