#include <iostream>
#include<string.h>
#include<math.h>
class Solution {
public:
    int integerBreak(int n) {
        if (n==2 || n==3) {return n-1;}
        if (n%3 == 2){return (pow(3,n/3)*2);}
        else if (n%3==1){return(pow(3,n/3-1)*4);}
        return pow(3,n/3);
        
    }
};