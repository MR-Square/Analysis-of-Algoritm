#include <stdio.h>
#include <string.h>

int match(char [], char[]);

int main()
{
    char a[100],b[100];
    int position;
    printf("Enter some text\n");
    gets(a);
    printf("Enter string to Find\n");
    gets(b);
    position = match(a,b);
    if(position != -1)
    {
        printf("Pattern found at location %d\n", position + 1);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}
int match( char text[], char pattern[])
{
    int c, d, e, text_length, pattern_length, position;
    
    text_length = strlen(text);
    printf("Text Length = %d\n", text_length);
    pattern_length = strlen(pattern);
    printf("Pattern Length = %d\n", pattern_length);
    
    if (pattern_length > text_length)
    {
        return -1;
    }

    for(c = 0; c<= text_length - pattern_length; c++)
    {
        e=c;
        for (d = 0; d < pattern_length; d++)
        {
            if (pattern[d] == text[e])
            {
                e++;
            }

            else
            {
                break;
            }
        }
        if (d == pattern_length)
        {
            printf("Values of e and c :%d,%d\n", e,c);
            return c;
        }
    }
    return -1;
}

