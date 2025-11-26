#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[20] ="Hello";
    char str2[20] = "World";
    char str3[20];

    int len = strlen(str1);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("Length of str1 = %d\n" ,len);

    strcpy(str3,str1);

    printf("After strcpy, str3 = %s\n", str3);

    int cmp1= strcmp(str1,str2);
    int cmp2 = strcmp(str1, str3);

    printf("\nComparing str1 and str2: result =%d\n",cmp1);
    printf("Comparing str1 and str3: result = %d\n", cmp2);

    if(cmp1 == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else if (cmp1<0)
    {
        printf("str1 is smaller than str2\n");
    }
    else
    {
    printf("str1 is greater than str2\n");   

    }
    if (cmp2== 0)
    {
        printf("str1 and str3 are equal\n");
    }
    return 0;


}