/* name.c */
#include <stdio.h>

int main()
{
 char name[32];

 printf("你的名字是什么?");
 scanf("%s", name);
 printf("Hello %s\n", name);

 return 0;

}
