#include <stdio.h>
void evaluatebattery(float battery){
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
int main(){
    float mo;
    printf("请输入机器人电量\n");
    scanf("%f",&mo);
    evaluatebattery(mo);
    return 0;
}