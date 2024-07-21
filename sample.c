#include <stdio.h>
 
int main(void) {
    char str[] = "Hello";
    int i_arr[] = {0, 1, 2, 3, 4};
    float f_arr[] = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f};
    double d_arr[] = {0.0, 0.1, 0.2, 0.3, 0.4};
    
    char *p_chr; // char型ポインタ変数
    int *p_int; // int型ポインタ変数
    float *p_flt; // float型ポインタ変数
    double *p_dbl; // double型ポインタ変数
    
    // ポインタにアドレスを代入
    p_chr = str;
    p_int = i_arr;
    p_flt = f_arr;
    p_dbl = d_arr;
    
    printf("char型ポインタ変数p_chr:%p, アドレス先の値:%c\n", p_chr, *p_chr);
    printf("char型配列要素str[0]のアドレス:%p, アドレス先の値:%c\n", &str[0], *(&str[0]));
    printf("char型ポインタ変数(p_chr + 1):%p, アドレス先の値:%c\n", p_chr + 1, *(p_chr + 1));
    printf("char型配列要素str[1]のアドレス:%p, アドレス先の値:%c\n", &str[1], *(&str[1]));
 
    printf("int型ポインタ変数p_int:%p, アドレス先の値:%d\n", p_int, *p_int);
    printf("int型配列要素i_arr[0]のアドレス:%p, アドレス先の値:%d\n", &i_arr[0], *(&i_arr[0]));
    printf("int型ポインタ変数(p_int + 1):%p, アドレス先の値:%d\n", p_int + 1, *(p_int + 1));
    printf("int型配列要素i_arr[1]のアドレス:%p, アドレス先の値:%d\n", &i_arr[1], *(&i_arr[1]));
    
    printf("float型ポインタ変数p_flt:%p, アドレス先の値:%.1f\n", p_flt, *p_flt);
    printf("float型配列要素f_arr[0]のアドレス:%p, アドレス先の値:%.1f\n", &f_arr[0], *(&f_arr[0]));
    printf("float型ポインタ変数(p_flt + 1):%p, アドレス先の値:%.1f\n", p_flt + 1, *(p_flt + 1));
    printf("float型配列要素f_arr[1]のアドレス:%p, アドレス先の値:%.1f\n", &f_arr[1], *(&f_arr[1]));
    
    printf("double型ポインタ変数p_dbl:%p, アドレス先の値:%.1lf\n", p_dbl, *p_dbl);
    printf("double型配列要素d_arr[0]のアドレス:%p, アドレス先の値:%.1lf\n", &d_arr[0], *(&d_arr[0]));
    printf("double型ポインタ変数(p_dbl + 1):%p, アドレス先の値:%.1lf\n", p_dbl + 1, *(p_dbl + 1));
    printf("double型配列要素d_arr[1]のアドレス:%p, アドレス先の値:%.1lf\n", &d_arr[1], *(&d_arr[1]));
    
    return 0;
}
