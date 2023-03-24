#include<stdio.h>
#include<ctype.h>
int main() {
    printf("Enter size of your string : ");
    int size;
    scanf("%d",&size);
    char str[size];
    int alphabets, digits, spec;

alphabets = digits = spec = 0;

printf("Enter a string: ");
scanf("%s",str);

for(int i = 0; i < sizeof(str); i++) {
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
        alphabets++;
    }
    else {
        spec++;
    }
}

printf("Total Alphabets: %d\n", alphabets);
printf("Total Digits: %d\n", digits);
printf("Total Special Characters: %d\n", spec);

return 0;
}