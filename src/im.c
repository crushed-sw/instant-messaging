/*信息的加解密*/

#include <stdio.h>

#define MAX_MESSAGE_LEN 1024

int main()
{
    int key=3;

    /*用户发送消息的字符数组*/
    char mes[MAX_MESSAGE_LEN] = {0};

    /*获取用户消息*/
    printf("请输入要发送的信息：");
    scanf("%s",mes);

    

    return 0;
}
