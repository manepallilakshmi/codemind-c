#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'
    ||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}