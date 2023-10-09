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
int insertFirst(int val){
    if(top>=n-1){
        printf("Stack is Overflow\n");
    }
    else{
        top++;
        for(int i=top;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;        
    }
}
int delete()
{
    if(top<0)
    printf("array...");
    else{
        for(int i=top;i<=0;i++)
        top--;
    }
}
int main(){
    insertFirst (10);
    insertFirst (20);
    insertFirst (30);
    insertFirst (40);
    insertFirst (50);
    insertFirst (60);
     delete();
    // delete();
    // delete();
    // delete();
    // delete();
    display();
}