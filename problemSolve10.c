#include<stdio.h>
int main()
{
    long int Longint_Value = 2147483647;
    long long int LongLongint_Value = 9223372036854775807;
    long double LongDouble_Value = 1.1E+4932L;
    short int Shortint_Value = 32767;

    printf("The long int value :%ld\n",Longint_Value);
    printf("The long long int value :%lld\n",LongLongint_Value);
    printf("The long double value :%Lg\n",LongDouble_Value);
    printf("The short int value :%hd\n",Shortint_Value);

    long int Long_intValue = -2147483648;
    long long int LongLong_intValue = 9223372036854775808;
    long double Long_DoubleValue = 3.4E-4932L;
    short int Short_intValue = -32768;

    printf("The long int value :%ld\n",Long_intValue);
    printf("The long long int value :%lld\n",LongLong_intValue);
    printf("The long double value :%Lg\n",Long_DoubleValue);
    printf("The short int value :%hd\n",Short_intValue);

    return 0;
}
