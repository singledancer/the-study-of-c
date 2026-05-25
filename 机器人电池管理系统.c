#include <stdio.h>
void evaluateBattery(float battery) {
    if (battery > 100) {
        printf("电量应小于等于100%%\n");
    } else if (battery >= 90) {
        printf("电量满格，可以执行高难度任务\n");
    } else if (battery >= 70) {
        printf("电量正常，可日常巡逻\n");
    } else if (battery >= 30) {
        printf("电量偏低，建议减少活动\n");
    } else if (battery >= 0) {
        printf("电量严重不足，立即自动回充\n");
    } else {
        printf("电量不能为负数，请重新输入\n");
    }
}
void evaluateAll(int arr[],int length){
    for(int i=0;i<length;i++){
        printf("机器人%d:",i+1);
        evaluateBattery((float) arr[i]);
    }
}
int findMax(int arr[],int length){
    int max=arr[0];
    for (int i=0;i<length;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int robotBattery[5];
    printf("请输入5个机器人的电量");
    for(int i=0;i<5;i++){
        scanf("%d",&robotBattery[i]);
    }
    printf("\n-----电量评估-----\n");
    evaluateAll(robotBattery,5);
    int maxBattery=findMax(robotBattery,5);
    printf("\n最高电量是%d%%\n",maxBattery);
    return 0;
}