#include <stdio.h>
#include<string.h>
void upper_string(char []);
int main()
{
     FILE *fp1,*fptr;
     char c;
     char a[100], b[100],freq[26];
     int i=0, flag,len;

     fp1= fopen ("input.txt", "r");

     while(1)
     {
        c = fgetc(fp1);
        if(c==EOF)
            break;
        else
        {
            a[i]=c;
            i++;
        }

     }
     strcpy(b,a);
    strrev(b);

    flag = strcmp(a, b);
    if(flag == 0)
    {
        printf("String is Palindrome.\n");
        len = strlen(a);

    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    for(i=0; i<len; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            freq[a[i] - 97]++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            freq[a[i] - 65]++;
        }
    }

    printf("Occurrence of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    }
    else
    {
        printf("String is Not Palindrome.\n");
         upper_string(a);
        fptr = fopen("input.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr,"\n%s",a);
   fclose(fptr);
    }
return 0;
}
void upper_string(char s[]) {
   int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}
