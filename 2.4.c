
int main(){
    //转义字符：转不了它的意思
    printf("c:\test\test.c");
    return 0;
}


int main(){
    
    printf("(are you ok??)");
    //(are you ok]
    return 0;
}
//  ??)  ---  ]


// printf("%d",100);
// printf("%d",'a');
// printf("%d","abc");




int main(){
    
    printf("%c\n",'130');//八进制的130是十进制的多少
    //X  --ASCII码值是88
   
    return 0;
}



int main(){
    int input=0;
    printf("学习(1/0)?");
    scanf("%d",&input);
    if(input==1)
    printf("nb\n");
    else
    printf("垃圾\n");
   
    return 0;
}




int main(){
    int m=0;
    while(m<3000){
        printf("写:%d",m);
        m++;
    }
    if(m==3000)
    printf("good");
   
    return 0;
}






int Add(int x,int y){
    int k = 0;
    k = x + y;
    return k;

}
int main(){
    int m = 0;
    int n = 0;
    scanf("%d%d",&m,&n);
    //int z = m + n;
    int z=Add(m,n);
    printf("%d",&z);
    return 0;
}