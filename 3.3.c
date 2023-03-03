// 算数操作符  +   -    *    /     %
// 移位操作符   << 左移运算符      >>  右移运算符
// 位操作符    &     |      ^
// 
// 
// 

int main(){
    int a = 3/5;//0.6
    printf("%d\n",a);//0

    float a = 3.0f/5.0f;//0.6
    printf("%f\n",a);//0.6
    
    return 0;
}
int main(){
    int a = 7%3;//1
    printf("%d\n",a);//1

    return 0;
}


int main(){
    int a = 2;
    int b = a << 1;
    
   
    printf("b = %d\n",b);
    return 0;
    return 0;
}



int main(){
    int a = 20;
    int b = a >> 1;
    
   
    printf("b = %d\n",b);
    return 0;
    return 0;
}





int main(){
    
    int a = 3;
    int b = 5;
    // & - 按位与
    int c = a & b;
    printf("c  = %d\n",c);
    // | - 按位或
    int c = a | b;
    printf("c  = %d\n",c);

    // ^ 按位异或
    //相同为0；相异为1
    int c = a ^ b;
    printf("c  = %d\n",c);


    return 0;
}


