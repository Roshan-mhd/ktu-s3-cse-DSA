#include<stdio.h>
#include<string.h>
char stack[5];
int top = -1;
void push(char ch){
    top++;
    stack[top]=ch;
}
char pop(){
    int item = stack[top];
    top--;
    return item;

}
void main(){
    char str[10],revstr[10];
    int i,l;
    printf("\n Enter the string (maximum characters should be 5)\t");
    gets(str);
    l = strlen(str);
    for(i=0;i<l;i++){
        push(str[i]);
    }
    for(i=0;i<l;i++){
        revstr[i]=pop();
    }
    printf("The reverse of the string is \t");
    puts(revstr);

}