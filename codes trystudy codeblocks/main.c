#include <stdio.h>
#include <stdlib.h>

/*
int main(void)
{

int x,y,z,result;
scanf("%d%d%d",&x,&y,&z);

result = (x<y?(x<z?x:z):(y<z?y:z));
printf("result=%1d",result);
   return 0;
}
*/
///////////////////////////////////////////////
/*
int main(void)
{

int x;
int y[8]={1,1,1,1,1,1,1,1};
int i = 0;
scanf("%d",&x);

if((x==1)||(x==2)||(x==3)||(x==5)||(x==7))
{
    printf("%7d is a primeNUMBER",x);
}
else
    {
        do
        {
        y[i]= x%(i+2);
        i++;
        }while((i<8)&&(y[i-1]!=0));
    }

    if((y[i-1]==0))
    {
        printf("%7d isnot a primeNUMBER",x);
    }
    else
    {
        printf("%7d is a primeNUMBER",x);
    }

   return 0;
}
*/
/////////////////////////////////////////////////////
/*
int main(void)
{

char x='A';

for(x='A';x<='Z';x++)
{
    printf("%3c\n",x);
}


   return 0;
}
*/
/////////////////////////
/*
int main(void)
{

int i,j,x;
scanf("%d",&x);

for( i=1;i<(2*x+1);i++)
{
    for( j=1;j<11;j++)
    {
        if((j==i)||(j==11-i))
        {
            printf("*");
        }
        printf(" ");
    }
        printf("\n");
}
/*
*        *
 *      *
  *    *
   *  *
    **
    **
   *  *
  *    *
 *      *
*        *
*//*
   return 0;
}
*/
/////////////////////////
/*
int fn(int x);
int main(void)
{
   int x= 3 ;
   int y ;
   y = fn(x);
   printf("%d",y);
   return 0;
}
int fn(int x )
{
if(x==1)
{return 1;}
else{
return (x*fn(x-1));
}
}
*/
//////////////////////////
/*
int main(void)
{
   int y=3000 ;
   int *ptr;
   int **pptr;
   ptr=&y;
   pptr=&ptr;

   printf("*ptr=%d\n",*ptr);     //3000
   printf("**pptr=%d\n",**pptr); //3000
   printf("*pptr=%p\n",*pptr);   //0x0060FEFB
   printf("ptr=%p",ptr);         //0x0060FEFB
   return 0;
}
*/
//////////////////////
/*
int main(void)
{
   int arr[5] ;

   printf("arr=\n%d\n",arr);
   printf("arr+1=\n%d\n",arr+1);
   printf("&arr+1=\n%d\n",&arr+1);
   return 0;
}
*/
//int outarr[256];
/*
void conc( char* ptr1,char* ptr2,char* ptr3)
{
   // int size = s1_length>s2_length?s1_length:s2_length ;

    while( (*ptr1 != '\0') && (*ptr2 != '\0') )
    {
        *ptr3 = *ptr1 ;
         ptr3++;
        *ptr3 = *ptr2 ;
         ptr3++;
    //    printf("%c",*ptr1);
     //   printf("%c",*ptr2);
        ptr1++;
        ptr2++;
    }
    while((*ptr1 != '\0'))
    {
        *ptr3 = *ptr1 ;
        ptr3++;
      //  printf("%c",*ptr1);
        ptr1++;
    }
    while((*ptr2 != '\0'))
    {
        *ptr3 = *ptr2 ;
        ptr3++;
      //  printf("%c",*ptr2);
        ptr2++;
    }
    *ptr3='\n';
    return 0;
}

int main(void)
{
char s1[256] = "11111";
char s2[256] = "22222222";
char s3[256];
conc(s1,s2,s3);
printf("%s",s3);
   return 0;
}
*/
/*
void sel_sort(int arr[]);
int main(void)
{
 int arr[5]={4,6,2,3,1};
 sel_sort(arr);
 int i =0;
 for(i=0;i<5;i++)
 {
     printf("arr[i]= %d\n",arr[i]);
 }
   return 0;
}
void sel_sort(int arr[])
{
    int i,j,min,temp;
    for(i=0;i<4;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
*/
/*
#define SIZE 10
void sorting(int*ptr2arr)
{
    int i,j,min,temp;
    for(i=0;i<SIZE-1;i++)
    {
        min=i;
        for(j=i+1;j<SIZE;j++)
        {
            if(ptr2arr[j]<ptr2arr[min])
            {
                min =j;
            }
        }
        temp=ptr2arr[i];
        ptr2arr[i]=ptr2arr[min];
        ptr2arr[min]=temp;
    }
}
void print_array(int *ptr2arr)
{
    int i =0;
 for(i=0;i<SIZE;i++)
 {
     printf("arr[%d]= %d\n",i,ptr2arr[i]);
 }
}
*/

int main(void)
{
    unsigned int num = 0b10000001100000111110000010101010;
    unsigned int i,j,count=0,max_count=0,mask=0x80000000;
    for(i=0;i<32;i++)
    {
        if((num<<i)&(mask))
        {
            for(j=i+1;j<32;j++)
            {
                if((num<<j)&(mask))
                {
                 if(count>max_count)
                    {
                    max_count=count;
                    }
                    count=0;
                    j=32;
                }
                else
                {
                count++;
                }
            }
        }
            i=j;

    }
    printf("max_count=%d",max_count);
    /*
    int arr[SIZE]={1,4,6,1,7,3,4,2,8,3};
    sorting(arr);
    print_array(arr);
*/
    /*
    char *dptr=(char*)malloc(0);
    printf("  %d  \n",dptr);
    printf("  %d  \n",(char*)sizeof(dptr));

    char *dptr1=(char*)malloc(200);
    printf("  %d  \n",dptr1);

    char str[]={'A','S','D','F','G','\0'};
    char str1[]="AHMED";
    char str2[10][10]={"AHMED","IBRAHIM"};
    char *ptr = str2;
    printf("  %d  \n",str2[0][9]);
    printf("  %c  \n",str2[1][3]);
    printf("  %d  \n",*(ptr+9));


    printf("  %d  \n",sizeof(str));
    printf("  %d  \n",sizeof(str1));

    unsigned char n1 =~0;
    unsigned char n2 = !0;
    printf("   %d    %d   \n",n1,n2);
    int arr[6]={6,3,1,12,2,4};
    int count =1;
    int max_num ,max_count=1;
    int i,j;
    for( i=0;i<6;i++)
    {
        for( j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
            count++;
            if(count>=max_count)
                {
                max_count=count;
                max_num=arr[i];
                }
            }
        }
        if(i==5)
        {
            if(max_count==1)
            {
                max_num=arr[i];
            }
        }
        count=1;
    }
    printf("   %d\n",max_count);
    printf("   %d\n",max_num);
   // printf("   %d\n",);

    //int a=1,b=2,c=3;
//printf("a= %d , b= %d",a,b,c);

//stream=arr;

 //for(i=0;i<5;i++)
// {
 //    printf("\n %d",*(stream++));
 //}
  //    printf("\n %llu %llu",stream,arr);
*/
   return 0;
}
