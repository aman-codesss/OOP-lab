//Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.
#include<stdio.h>
#include<conio.h>
int getSize(char* str){
    int size =0;
    for(int i=0;str[i]!='\0';i++){
         size++;
    }
    return size;
}


int findPosition(char* str, int size){
for(int i=0;i<size;i++){
    if(str[i]=='c'){
        return i;
    }
}
}

int main(){
char str[]="idea without execution is worthless";

int size = getSize(str);
// printf("%d",size);
int position = findPosition(str,size);
printf("%d",position);

}