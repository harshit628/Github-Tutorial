// 14)accept marks of 4 subjects and calculate percentage if percentage is below 35% - F
//    below 45% - D below 55% - C below 75% - B above 75% - A 
 
 #include<stdio.h>
 int main(){
 
 int p,c,m,e;                               //her p=physics c= chemistry m= mathamatics e= english

printf("enter the physics marks");
scanf("%i",&p);

printf("enter the chemistry marks");
scanf("%i",&c);

printf("enter the mathamatics marks");
scanf("%i",&m);

printf("enter the english marks");
scanf("%i",&e);

int per;               // per=> percent
per = (p+c+m+e)/4;


if(per<35)
{
    printf("F GRADE");
}

else if(per<45)
{
  printf("D GRADE");   
}
else if (per<55)
{
     printf("C GRADE");
}

else if (per<75)
{
     printf("B GRADE");

}
else
{
     printf(" A GRADE");
}

 return 0;
 }
