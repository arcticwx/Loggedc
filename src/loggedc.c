#include "loggedc.h"

void f_logger(char **message[], char **label){
    //Init file
    FILE *file = label;
    //Open file
    file = fopen(label, "w+"); 
    //Put message in file
    fputs(message, file);
    //Close file
    fclose(file);
}

void t_logger(char message){
    //Print message. Not tested.
    printf(message);
    getchar();
}


//Test Function
// int main(){
//     f_logger("test, test", "loggedc.log");
//     return 0;
// }