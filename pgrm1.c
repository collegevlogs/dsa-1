#include <stdio.h>
#include <stdlib.h>
#define sz 5
void push(int s[sz],int *top,int item){
    if(*top==sz-1){
        printf("\nstack overflow");
        return;
    }
    *top=*top+1;
    s[*top]=item;
}
void pop(int s[sz],int *top){
    if(*top==-1){
        printf("\n stack underflow");
        return;
    }
    printf("\n %d is deleted from stack",s[*top]);
    *top=*top-1;
}
void display(int s[sz],int top){
    if(top==-1){
        printf("\n Empty stack ");
        return;
    }
    printf("\n contents of stack:\n");
    for(int i=0;i<=top;i++)
    printf("%d\t\t",s[i]);
}
void main(){
    int s[sz],top=-1,item,ch;
    while(1){
        printf("\n1:insert 2:delete 3:display 0:Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the value to insert:");
                   scanf("%d",&item);
                   push(s,&top,item);
                   break;
            case 2:pop(s,&top);
                   break;
            case 3:display(s,top);
                   break;
            default:exit(0);
        }
    }
}
