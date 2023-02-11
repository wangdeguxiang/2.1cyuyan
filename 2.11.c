

int main(){
    char arr1[]="welcome to bit !!!!";
    char arr2[]="###################";
    int left = 0;
    int right = strlen(arr1)-1;

    arr2[left]=arr1[left];
    arr2[right]=arr1[right];
    printf("%s\n",arr2);
    while(left<=right){
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//睡眠一秒
        system("cls");//清空屏幕
        left++;
        right--;
    }

    return 0;
}





#include<sring.h>
int main(){

    int i = 0;
    char password[20] = { 0 };
    for(i = 0; i < 3; i++){
        printf("请输入密码：");
        scanf("%s",password);
        //if(password=="123456");//err - 两字符串比较，不能用==，应该使用strcmp
        if(strcmp(password,"123456") == 0){
            printf("登陆成功\n");
            break;

        }else{
            printf("密码错误\n");
        }

    }
    if(i == 3)
    printf("三次密码均错误\n");
 
}



//猜数字游戏
#include<stdlib.h>
#include<time.h>


void game(){
    //int ret = rand();//rand返回了一个1-32767的数字
    

    int ret = rand()%100+1;//%100的余数是0-99，加1范围是1-100
    printf("%d\n",ret)
    int guess = 0;
    while(1){
        printf("请猜数字：");
        scanf("%d"&guess);
        if(guess<ret){
            printf("猜小了");
        }else if(guess>ret){
            printf("猜大了");

        }else{
            printf("猜对了");
            break;
        }

    }
}


void main(){
    printf("*********************");
    printf("****** 1.play *******");
    printf("****** 0.exit *******");
    printf("*********************");
}


int main(){
    int input = 0;
    srand((unsigned int )time(NULL)); 
    do{
        menu();//打印菜单
        printf("请选择：");
        scanf("%d",&input);
        switch(input){
            case 1:
               game();
               printf("猜数字\n");
               break;
            case 0:
               printf("退出\n");
               break;

            default:
               printf("选择错误\n");
               break;
        }


    }while();

    return 0;
}