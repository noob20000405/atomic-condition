#include <math.h>
#include <stdio.h>
//#include <cadna.h>

/*double_st foo(double_st x) {
    // This function calculate the motivation example:
    // y = (1-cos(x))/(x^2)
    // See details at: https://www.wolframalpha.com/input/?i=(1-cos(x))%2F(x%5E2)

    // It triggers significant error when x->0, where y should be ->0.5.
    double_st val = (1-cos(x))/(x*x);
    return val;
}*/

int main(int argc, char * argv[]) {
    //cadna_init(-1);
    FILE * f = fopen("pipe.txt", "w");
    //double_st x = strtod(argv[1], NULL);
    //double_st res = foo(x);
    //int c = res.getaccuracy();
    //double cond = (pow(10, -c) * pow(2, 53));
    double cond = 10;
    fprintf(f, "%lf\n", cond);
    fclose(f);
    //cadna_end();
}
