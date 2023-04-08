int main(){
    int line=0;
    scanf("%d",&line);
    int i = 0;
    for(i = 0; i < line; i ++){

        int j = 0;
        for(j = 0; j < line - 1- i;j ++){
            printf("");

        }
        for(j = 0; j < 2*i+1;j ++){
            printf("*");
             
        }
    }
    for(i = 0; i < line - 1; i ++){

        int j = 0;
        for(j = 0; j <= i;j ++){
            printf("");

        }
        for(j = 0; j < 2*(line - 1- i)-1;j ++){
            printf("*");
            
        }
    
    }
}


















int main(){
    int money = 0;
    scanf("%d",&money);
    int total = money;
    int empty = money;
    while(empty>=2){
        total +=empty/2;
        empty = empty/2+empty%2;
    }
    printf("%d\n",total);
    return 0;
}



void print(int arr[],int sz){
    int i = 0;
    for( i = 0; i <sz; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}


void move (int arr[],int sz){
    int left = 0;
    int right = sz -1;
    while(left<right){
        while((left<right)&&arr[left%2 == 1]){
           left++;
        }
        while((left<right)&&arr[right%2 == 1]){
            right--;
        }
       if(left<right){
            int  tmp = arr[left];
            arr[left]= arr[right];
            arr[right] = tmp;
        }

    }
}
    


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz =sizeof(arr)/sizeof(arr[0]); 
    move(arr,sz);
    printf(arr,sz);
    return 0;
}




















































