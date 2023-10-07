#include<stdio.h>
# define n 5
int a[5],top=-1;
int display(){
    if(top<0){
        printf("Array Is Empty...");
    }
    else{
        for(int i=0;i<=top;i++)
        printf("%d ",a[i]);
    }
}
int insertEnd(int val){
    if(top>=n-1){
        printf("Stack is Overflow\n");
    }
    else{
        top++;
        a[top]=val;
    }
}
int delete()
{
    if(top<0)
    printf("array...");
    else{
        top--;

    }
}
int main(){
    
    insertEnd (10);
    insertEnd (20);
    insertEnd (30);
    insertEnd (40);
    insertEnd (50);
    // insertEnd (60);
    delete();
    delete();
    delete();
    // delete();
    // delete();
    display();
}