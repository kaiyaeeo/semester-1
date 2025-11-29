#include <stdio.h>

struct Jam {
    int hour;
    int min;
    int sec;
};

void jam(struct Jam tm) {
    struct Jam hasil = tm;
    
    if (hasil.sec >= 60) {
        hasil.min += hasil.sec / 60;
        hasil.sec = hasil.sec % 60;
    }
    
    if (hasil.min >= 60) {
        hasil.hour += hasil.min / 60;
        hasil.min = hasil.min % 60;
    }
    
    if (hasil.hour >= 24) {
        hasil.hour = hasil.hour % 24;
    }
    
    printf("Hour: %d\n", hasil.hour);
    printf("Minute: %d\n", hasil.min);
    printf("Second: %d\n", hasil.sec);
}

int main() {
    struct Jam tm = {24, 65, 70};
    jam(tm);
    
    return 0;
}