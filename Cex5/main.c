//
//  main.c
//  Cex5
//
//  Created by 이수연 on 2023/06/25.
//

#include <stdio.h>

void main(){
    float a = 1.234;
    int b = 10;
    printf("%.2f\n", a);
    printf("%5.1f\n", a);
    printf("%05.1f\n", a);
    printf("%-05.1f\n", a);
    printf("%5d\n", b);
    printf("%05d\n", b);
    printf("%-5d\n", b);
    printf("%-5d\n", b);

}
