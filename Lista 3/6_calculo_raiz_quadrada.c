#include <stdio.h>

/**
 * @brief Valor absoluto de um numero qualquer
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */
double num_absol( double n );

/**
 * @brief Função que calcula a raiz quadrada de n.
 * @param n um numero real qualquer
 * @param p precisão do cálculos
 * @return a raiz quadrada de n
 */
double raiz_quad( double n, double p, double *erro );

int main() {

    double n, err, err_fin, r;

    scanf("%lf%lf", &n, &err);

    r = raiz_quad(n, err, &err_fin);

    printf("r: %.9lf, err: %.9lf\n", r, err_fin);
    
    return 0;
}

double num_absol(double n) {

    if (n < 0) n = -n;

    return n;
}

double raiz_quad(double n, double p, double *erro) {

    double r, err_at;

    r = 1;
    err_at = n - (r * r);;
    while (err_at > p) {

        r = (r + (n / r)) / 2;
        err_at = num_absol (n - (r * r));
        if (err_at > p) printf("r: %.9lf, err: %.9lf\n", r, err_at);

    }

    *erro = err_at;

    return r;
}