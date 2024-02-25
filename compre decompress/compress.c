#include<stdio.h>
#include<string.h>

void compressText(char text[]){
int length=strlen(text);
for(int i=0;i<length;i++){
int count=1;
while(i <length-1&&text[i]==text[i+1]){
count++;
i++;
}
printf("%c%d",text[i],count);
}}
void decompressText(const char text[]) {
int length=strlen(text);
for (int i=0; i<length; i++) {
char current=text[i];
int count=text[i+ 1] -'0' ; 
for (int j=0; j<count; j++) {
printf("%c", current);
}}}
int main() {
char text[100];
int choice;
printf("1compress\n2decompress\nentre ton choix: ");
scanf("%d", &choice);
if (choice == 1) {
printf("Enter text to compress: ");
scanf("%s", text);
printf("Compressed text: ");
compressText(text);
} else if (choice == 2) {
printf("Enter text to decompress: ");
scanf("%s", text);
printf("Decompressed text: ");
decompressText(text);
} else {
printf("invalid choice\n");
}
return 0;
}

