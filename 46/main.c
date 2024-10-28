#include <stdio.h> 

int main(){
    int h1, m1, s1;
    int h2, m2, s2;
    int hR, mR, sR;
    
    // 1min -> 60sec
    // 1hr -> 60min

    printf("first time (hours, minutes, seconds): ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("second time (hours, minutes, seconds): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    sR = s1 + s2;
    if (sR >= 60) {
        sR -= 60;
        m1++;
    }

    mR = m1 + m2;
    if (mR >= 60) {
        mR -= 60;
        h1++;
    }

    hR = h1 + h2;
    if(hR >= 24){
        printf("Error: Exceeded the limit of calculator!!\n");
        return -1;
    }

    printf("Total time: %d hours, %d minutes, %d seconds\n", hR, mR, sR);

    return 0;
}