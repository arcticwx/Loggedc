#include "loggedc.h"

f_logger(char **message[], char **label){
    //Init file
    FILE *file = label;
    //Open file
    file = fopen(label, "w+"); 
    // Info i found said to do this, but it doesn't affect program, hence the comment. //fprintf(file, message);
    //Put message in file
    fputs(message, file);
    //Close file
    fclose(file);
}

t_logger(char message){
    //Print message. Not tested.
    printf(message);
    getchar();
}


//Test Function
int main(){
    f_logger("test, test", "loggedc.log");
    return 0;
}