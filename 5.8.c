int main(){
    FILE*pf=fopen("text.txt","r");
    if(pf == NULL){
        // printf("%s\n",strerror(errno));
        perror("fopen");
        return 1;
    }
    // 读文件

    // 关闭文件


    return 0;
}



// strerror把错误码转换成错误信息打印
// perror 打印错误信息
// 




int main(){
    char ch='2';
    // isdigit 数字字符返回非0的值，不是数字字符返回0
    // int ret = isdigit(ch);

    int ret = islower(ch);
    printf("%d\n",ret);
}


int main(){
    char arr[20]={ 0 };
    scanf("%s",arr);
    while(arr[i] != '\0'){
        if(isupper(arr[i])){
            arr[i]=tolower(arr[i])
        }
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}


int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[20]={  0  };
    // strcpy
    // char *strcpy(char*dest,const char * str);
    return 0;
}




// 内存操作函数
// memcpy
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[20]={  0  };
    memcpy(arr2,arr1,20)
    return 0;
}




// 字符分类函数: 

// 函数                             如果他的参数符合下列条件就返回真

// iscntrl   任何控制字符

// isspace   空白字符: 空格' ,换页\f' ,换行^n' ,回车\r' ,制表符\t'或者垂直制表符"IV'

// isdigit  十进制数字0-9

// isxdigit  十六进制数字,包括所有十进制数字,小写字母a~f,大写字母A~F

// islower  小写字母a~z

// isupper  大写字母A~Z

// isalphaisalnum   字母a~z或A~Z

// ispunct  标点符号,任何不属于数字或者字母的图形字符(可打印)任何图形字符

// isgraph  任何图形

// isprint  任何可打印字符,包括图形字符和空白字符

























