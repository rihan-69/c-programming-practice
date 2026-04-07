int main() {
    int ch;
    FILE *ptr;
    ptr = fopen("akku.txt","r");
    if(ptr == NULL){
        printf("file not found\n");
        return 1;
    }
    for(int i = 0; i<3; i++){
        ch = fgetc(ptr);
        if(ch == EOF){
            break;
        }
        printf("%c\n",ch);
    }
    fclose(ptr);
    return 0;
    }