#include<stdio.h>
int main(char *data)
{
char *username;
char *password;
data=getenv("QUERY_STRING");
printf("Content-type: text/plain; charset=utf-8\n\n");
printf("hello world!\n\n");
sscanf(data,"name=%[^&]&password=%s",username,password);
printf("username=%s",username);
printf("password=%s",password);
//printf("%s:",data);
return 0;
}
