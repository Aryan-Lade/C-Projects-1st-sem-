#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

void fill_time(char*, int);
void fill_date(char*);
int input_format();
void clear_screen();

int main(){
    char time[50], date[100];
    int format = input_format();

    while(1){
        fill_time(time, format);
        fill_date(date);
        clear_screen();
        printf("Current Time: %s\n", time);
        printf("Current Date: %s\n", date);
        sleep(1);        
    }
    return 0;
}
void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int input_format(){
    int format;
    do {
        printf("\nChoose time format");
        printf("\n1. 24 Hour Format");
        printf("\n2. 12 Hour Format[Default]");
        printf("\nYour Choice: ");
        scanf("%d", &format);
        if (format < 1 || format > 2) {
            printf("Invalid input. Please enter 1 or 2.\n");
        }
    } while (format < 1 || format > 2);
    return format;
}
void fill_date(char* buffer){
    time_t raw_time;
    struct tm *current_time;
    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(buffer,100,"%A %B %d %Y",current_time);
}
void fill_time(char* buffer,int format){
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    if(format ==1){
        strftime(buffer,50, "%H:%M:%S", current_time);        
    } else{
        strftime(buffer,50, "%I:%M:%S %p", current_time);
    }
    printf("\nCreated by: Aryan Lade");
}