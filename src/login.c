#include <stdio.h>
#include <string.h>

#define USERNAME "USER1"
#define PASSWORD "12345"

#define USER1 123456
#define PASS1 "pass1"
#define USER2 223456
#define PASS2 "pass2"
#define USER3 323456
#define PASS3 "pass3"

int check_for_single(char *username, char *password)
{
    /*提示用户输入用户名*/
    printf("请输入用户名：");
    scanf("%s", username);

    /*提示用户输入密码*/
    printf("请输入密码：");
    scanf("%s", password);

    /*判断输入的用户名是否合法*/
    if (strcmp(username, USERNAME))
    {
        printf("用户名与密码不匹配！");
        return -1;
    }

    /*判断输入的密码是否合法*/
    if (strcmp(password, PASSWORD))
    {
        printf("用户名与密码不匹配！");
        return -1;
    }

    printf("用户名与密码匹配！");

    return 0;
}

int check_for_users(int username, char *password)
{
    int result = -1;

    /*提示用户输入用户名*/
    printf("请输入用户名：");
    scanf("%d", &username);

    /*提示用户输入密码*/
    printf("请输入密码：");
    scanf("%s", password);

    /*判断用户名与密码是否匹配*/
    switch (username)
    {
    case USER1:
        result = strcmp(password, PASS1);
        break;
    case USER2:
        result = strcmp(password, PASS2);
        break;
    case USER3:
        result = strcmp(password, PASS3);
        break;
    }

    if (result)
        printf("用户名与密码不匹配！");
    else
        printf("用户名与密码匹配！");

    return result;
}