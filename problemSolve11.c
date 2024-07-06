#include<stdio.h>
int main()
{
    unsigned int IntValue = 4294967295;
    unsigned long int LongIntValue = 4294967295;
    unsigned long long int LongLongIntValue = 18446744073709551615;
    unsigned short int ShortIntValue = 65535;

    printf("The unsigned int value :%u\n",IntValue);
    printf("The unsigned long int value :%lu\n",LongIntValue);
    printf("The unsigned long long int value :%llu\n",LongLongIntValue);
    printf("The unsigned short int value :%hu\n",ShortIntValue);
    return 0;
}
