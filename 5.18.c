union Un{
    char a[5];//5
    int i;//4
}
int main(){
    union Un u;
    printf("%d\n",sizrof(u));
    return 0;
}












#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 20
#define MAX_ADDR 20
struct struct PeoInfo{
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;
struct Contact{

};











void menu(){
    printf("*********************************\n");
    printf("****** 1.add     2.del     ******\n");
    printf("****** 3.search  4.modify  ******\n");
    printf("****** 5.sort    6.print   ******\n");
    printf("****** 0.exit              ******\n");
    printf("*********************************\n");

}

enum Option{
    EXLY,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT

};
int main(){
    
    int input = 0;
    Contact con;

    do{
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch(input){
            case ADD:
                AddContact();
                break;
            case DEL:
                
                break;
            case SEARCH:
                 
                break;
            case MODIFY:
                 
                 break;
            case SORT:
                 
                break;
            case PRINT:
                 
                break;
        }

    }while();
    return 0;


}














