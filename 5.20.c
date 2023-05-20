
#include<string.h>
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
typedef struct Contact{
    PeonInfo data[MAX];
    int sz;

}Contact;
 void InitContact(Contact* pc);
 void AddContact(Contact* pc);
 void PrintContact(const Contact* pc);
 void DelContact(Contact* pc);
 static int FindByName(contact *pc ,char name[]);
 void SearchContact(Contact* pc);
 void MondifyContact(Contact* pc);
 void SortContact(Contact* pc);





#inclue "contact.h"

void InitContact(Contact* pc){
    pc->sz=0;
    // memset();---内存设置
    memset(pc->data,0,sizeof(pc->data));
}

void AddContact(Contact* pc){
    if(pc->sz==MAX){
        printf("以满\n");
        return ;
    }
    printf("请输入名字\n");
    scanf("%s",pc->data[px->sz].name);
    printf("请输入年龄\n");
    scanf("%s",&pc->data[px->sz].age);
    printf("请输入性别\n");
    scanf("%s",pc->data[px->sz].sz);
    printf("请输入电话\n");
    scanf("%s",pc->data[px->sz].teele);
    printf("请输入地址\n");
    scanf("%s",pc->data[px->sz].adder);



    pc->sz++;
    printf("增加成功");

}
void PrintContact(const Contact* pc){
    int i  = 0;
    printf("%-20s\t %-5s \t%-5s\t %-12s \t%-20s\n","名字","年龄","性别","电话","地址");
    for(i = 0;i <pc->sz;sz++){
    printf("%-20s\t %-5d \t%-5s\t %-12s \t%-20s\n",
       pc->data[i].name,
       pc->data[i].age,
       pc->data[i].sex,
       pc->data[i].tele,
       pc->data[i].addr,
       );
       
        
    }
}
void DelContact(Contact* pc){
    if(pc->sz==0){
        printf("通讯录为空");
        return ;

    }
    printf("请输入删除人的名字");
    scanf("%s",name);
    FindByName(pc,name);
    int pos=FindByName(pc,name);
    if(pos==-1){
        printf("要删除的人不存在");
        return ;

    }
    int i =0;
    for(i = pos;i<pc->sz-1;i++){
        pc->data[i]=pc->data[i+1];
    }
    pc->sz--;
    peintf("删除成功");




}

static int FindByName(contact *pc ,char name[]){
    int i = 0;
    for(i = 0; i < pc->sz;i++){
        if(strcmp(pc->data[i].name,name)==0){
            return 0;

        }
    }
    return -1;


 }
void SearchContact(Contact* pc){
     printf("请输入查找人的名字");
    scanf("%s",name);
    FindByName(pc,name);
    int pos=FindByName(pc,name);
    if(pos==-1){
        printf("要查找人不存在");
        return ;

    }else{
        printf("%-20s\t %-5s \t%-5s\t %-12s \t%-20s\n","名字","年龄","性别","电话","地址");
        for(i = 0;i <pc->sz;sz++){
        printf("%-20s\t %-5d \t%-5s\t %-12s \t%-20s\n",
       pc->data[pos].name,
       pc->data[pos].age,
       pc->data[pos].sex,
       pc->data[pos].tele,
       pc->data[pos].addr,
       );
       
        
    }
    }
}

void MondifyContact(Contact* pc){
     printf("请输入修改人的名字");
    scanf("%s",name);
    FindByName(pc,name);
    int pos=FindByName(pc,name);
    if(pos==-1){
        printf("要修改人不存在");
        return ;

    }else{
       
    printf("请输入名字\n");
    scanf("%s",pc->data[px->sz].name);
    printf("请输入年龄\n");
    scanf("%s",&pc->data[px->sz].age);
    printf("请输入性别\n");
    scanf("%s",pc->data[px->sz].sz);
    printf("请输入电话\n");
    scanf("%s",pc->data[px->sz].teele);
    printf("请输入地址\n");
    scanf("%s",pc->data[px->sz].adder);

        
    
    }
}











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
    InitContact(&con);

    do{
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch(input){
            case ADD:
                AddContact(&con);
                break;
            case DEL:
                DelContact(&con);
                break;
            case SEARCH:
                SearchContact(&con);
                break;
            case MODIFY:
                MondifyContact(&con);
                 break;
            case SORT:
                SortContact(&con);
                break;
            case PRINT:
                PrintContact(&con);
                break;
            case EXTY:
                 printf("退出");
                break;
            default:
                 printf("选择错误");
                break;
        }

    }while();
    return 0;


}














