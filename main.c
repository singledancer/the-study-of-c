#include <stdio.h>
#include <string.h>
int main(){
    //定义函数
    char input[20];
    float battery;
    //循环
    while(1){
        //输入
        printf("请输入电量（输入-1或exit退出）\n");
        scanf("%s",input);
        //判断为字母
        if (0==strcmp(input,"EXIT")||0==strcmp(input,"exit")){
            break;
        }
        //判断为数字
        if (1==sscanf(input,"%f",&battery)){
            if (-1==battery){
                break;
            }else if (battery>100){
                printf("电量应小于等于100%%\n");  
            }else if (100>=battery&&battery>=90){
                printf("电量满格，可以执行高难度任务\n");
            }else if(battery>=70){
                printf("电量正常，可日常巡逻\n");
            }else if(battery>=30){
                printf("电量偏低，建议减少活动\n");
            }else if(battery>=0){
                printf("电量严重不足，立即自动回充\n");
            }else if(battery<0){
                printf("电量不能为负数，请重新输入\n");
            }
        }
        //其他输入无效
        else{
            printf("无效输入\n");
        }
    }
    printf("电量检测已退出\n");
    return 0;
}