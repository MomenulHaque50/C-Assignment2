#include<stdio.h>
#include<string.h>
  struct studentInfo{
  int id;
  char name[50];
  float cgpa;
  char temp[150];
  };
int main(){
FILE *fp1,*fptr;
char c;
char a[100];
int i,j,n=3,q=0;
float p=0;
char r[100];
struct studentInfo s[n];
printf("Enter all student Name, ID and CGPA in sequential way:\n ");
for(i=0;i<n;i++)
{
    scanf("%s%d%f",s[i].name,&s[i].id,&s[i].cgpa);
}
printf("Student Information:\n");
for(i=0;i<n;i++)
{
    printf("  %s      %d       %f",s[i].name,s[i].id,s[i].cgpa);
    printf("\n");
}
for(i=0;i<n-i;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(s[j].cgpa<s[j+1].cgpa)
        {
            p=s[j].cgpa;
            s[j].cgpa=s[j+1].cgpa;
            s[j+1].cgpa=p;
             q=s[j].id;
            s[j].id=s[j+1].id;
            s[j+1].id=q;
            strcpy(s[j].temp,s[j].name);
            strcpy(s[j].name,s[j+1].name);
            strcpy(s[j+1].name,s[j].temp);

        }
    }
}
i=0;
printf("\n  Highest CGPA Student Name and ID\n");
printf("   %s   %d",s[i].name,s[i].id);
fptr = fopen("Highest.txt","w");
    fprintf(fptr,"Highest CGPA Info:\n  %s   %d    %f",s[i].name,s[i].id,s[i].cgpa);
   fclose(fptr);
 fp1= fopen ("Highest.txt", "r");
 i=0;
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
     printf("\n\nAfter file read highest CGPA Info:\n %s",a);
return 0;
}
