#include <stdio.h>

typedef enum{
        INIT,
        IDLE,
        RUNNING,
        ERROR
    }State;

int main(){
    State state = INIT;
    while(1){
        switch (state)
        {
            case INIT:
                printf("初始化设备...\n");

                state = IDLE;
                break;
            
            case IDLE:
                printf("等待启动...\n");
                
                state = RUNNING;
                break;

            case RUNNING:
                printf("设备运行中...\n");

                state = ERROR;
                break;
            
            case ERROR:
                printf("运行故障...\n");

                state = INIT;
                break;

            default:
                break;
        }
        getchar();
    }

    return 0;
}