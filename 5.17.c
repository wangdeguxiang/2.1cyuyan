
// 声明枚举类型
enum Color{
    RED,//0
    GREEN,//1
    BLUE//2
};



int main(){
    // enum Color c = BLUE;
    enum Color c = 2;
    printf("%d\n",RED);
    printf("%d\n",GREEN);
    printf("%d\n",BLUE);

    return 0;

}




void menu(){
    printf("*************  1  **********");
    printf("*************  2  **********");
    printf("*************  3  **********");
    printf("*************  0  **********");

}

int main(){
    int input = 0;
    do{
        menu();
        printf("请选择");
        sacnf("%d",&input);
        switch(input){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                break;
        }
    }while(input);
}









void menu(){
    printf("*************  1  **********");
    printf("*************  2  **********");
    printf("*************  3  **********");
    printf("*************  0  **********");

}
enum Option{
    EXIT;
    ADD;
    SUB;
    MUL;
    DIV;
}

int main(){
    int input = 0;
    do{
        menu();
        printf("请选择");
        sacnf("%d",&input);
        switch(input){
            case EXIT:
                break;
            case ADD:
                break;
            case SUB:
                break;
            case MUL:
                break;
            case DIV:
                break;
            default:
                break;
        }
    }while(input);
}


union Un{
    char c;//1
    int i;//4

};
int main(){
    union Un u;
    // printf("%d\n",sizeof(u));
    printf("%d\n",&u);
    printf("%d\n",&(u,c));
    printf("%d\n",&(u,i));


    return 0;
}




union Un{
    char c;//1
    int i;//4

};
int main(){
    union Un u={10};
    u.i=1000;
    u.c=100;
    printf("%d\n",&u);
    printf("%d\n",&(u,c));
    printf("%d\n",&(u,i));


    return 0;
}



check_sys(){
    int a = 1;
    if((*(char*)&a)==1){
        printf("小端\n");

    }else{
        printf("大端\n");
    }

}

int main(){
    check_sys();
    return 0;
    
}






check_sys(){
    union U
    {
        char c;
        int i;
    }u;
    u.i=1;
    return u.c;
}

int main(){
    int ret=check_sys();
    if(ret == 1){
        printf("小端\n");
    }else{
        printf("大端\n");
    }

    return 0;
    
}



