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
    /*��ʾ�û������û���*/
    printf("�������û�����");
    scanf("%s", username);

    /*��ʾ�û���������*/
    printf("���������룺");
    scanf("%s", password);

    /*�ж�������û����Ƿ�Ϸ�*/
    if (strcmp(username, USERNAME))
    {
        printf("�û��������벻ƥ�䣡");
        return -1;
    }

    /*�ж�����������Ƿ�Ϸ�*/
    if (strcmp(password, PASSWORD))
    {
        printf("�û��������벻ƥ�䣡");
        return -1;
    }

    printf("�û���������ƥ�䣡");

    return 0;
}

int check_for_users(int username, char *password)
{
    int result = -1;

    /*��ʾ�û������û���*/
    printf("�������û�����");
    scanf("%d", &username);

    /*��ʾ�û���������*/
    printf("���������룺");
    scanf("%s", password);

    /*�ж��û����������Ƿ�ƥ��*/
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
        printf("�û��������벻ƥ�䣡");
    else
        printf("�û���������ƥ�䣡");

    return result;
}