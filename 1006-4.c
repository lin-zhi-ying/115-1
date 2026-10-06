#include <stdio.h>
int main()
{
    int login;
    int money_all;
    int money_get;
    int black;
    printf("請輸入登入狀態1登入0無：");
    scanf("%d",&login);
    printf("請輸入帳戶餘額：");
    scanf("%d",&money_all);
    printf("請輸入提款金額：");
    scanf("%d",&money_get);
    printf("請輸入黑名單狀態1是0否：");
    scanf("%d",&black);
    if (login==1 && money_all>=money_get && !black)
    {
        printf("可提款");
    }
    else
    {
        printf("不可提款");  
    }
    return 0;
}