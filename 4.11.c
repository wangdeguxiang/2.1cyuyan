int main(){
    unsigned char a = 200;
    unsigned char b = 100;
    unsigned char c = 0;
    c = a + b;
    printf("%d%d",a+b,c);
    return 0;
}




int main(){
    unsigned int a = 0x1234;
    unsigned char b = *(unsigned char*)&a;
    return 0;

}


int main(){
    int arr[10][10];
    int i = 0;
    int j = 0;
    for(i = 0; i <10; i++){
        for(j = 0; j < =i;j++){
            if(j==0){
                arr[i][j]=1;

            }
            if(i == j){
                arr[i][j]= 1;
            }
        }
    }
}


int main(){
    char killer = 0;
    for(killer = 'A';killer <='D';killer++){
        if(killer!='A'+(killer=='c')+(killer='D')+(killer!='d')==3){
            printf("%c\n",killer);
            
        }
    }
    return 0;
}





int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    for(a = 1; a<=5;a++){
        for(b = 1; b<=5;b++){
            for(c = 1; c<=5;c++){
                for(d = 1; d<=5;d++){
                    for(e = 1; e<=5;e++){
                        if(((b==2)+(a==3)==1)
                        &&((b==2)+(e==4)==1)
                        &&((c==1)+(d==2)==1)
                        &&((c==5)+(d==3)==1)
                        &&((e==4)+(a==1)==1)){
                            if(a*b*c*d*e==120)
                            printf("a=%db=%dc=%dd=%de=%d"a,,b,c,d,e);
                        }
                       

                    }
                }
            }
        }
    }
    return 0;
}























