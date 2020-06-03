#include<stdio.h>
#include<string.h>
  struct book_data{
  int id;
  char title[50];
  char author[50];
  char topic[60];
  char temp[150];
  };
int main(){
FILE *fptr;
int p;
 struct book_data *ptr;
   int i, n;

   printf("Enter the number of books: ");
   scanf("%d", &n);

   // allocating memory for n numbers of structure books
   ptr = (struct book_data*) malloc(n * sizeof(struct book_data));
 printf("Enter title, author, topic and id respectively:\n");
   for(i = 0; i < n; ++i)
   {

       scanf("%s %s %s %d", (ptr+i)->title, (ptr+i)->author,(ptr+i)->topic,&(ptr+i)->id);
   }
printf("Enter your search book id: ");
scanf("%d", &p);
printf("\n Search Book Information:\n");
for(i=0;i<n;i++)
{
if(p==((ptr+i)->id))
{
    printf("%s %s %s %d", (ptr+i)->title, (ptr+i)->author,(ptr+i)->topic,(ptr+i)->id);
}

}
 fptr = fopen("BooksInfo.txt","w");

   fprintf(fptr,"All Books Information:");
 for(i=0;i<n;i++)
{
    fprintf(fptr,"\n%s %s %s %d", (ptr+i)->title, (ptr+i)->author,(ptr+i)->topic,(ptr+i)->id);
}

   fclose(fptr);

   return 0;
}
