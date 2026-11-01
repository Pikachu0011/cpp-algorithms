//#include<stdio.h>
//#include<string.h>
//const int max = 510;
//int i, j;
//void multiply(int a[], int b[], int* lena, int* lenb)
//{
//    int c[max] = {}, d[max] = {};
//    for (i = 0; i < *lenb; i++)d[i] = b[i];
//    for (i = 0; i < *lena; i++)c[i] = a[i], a[i] = 0;
//    //memset(a,0,max);
//    for (i = 0; i < *lena; i++)for (j = 0; j < *lenb && i + j < max - 2; j++)
//    {
//        a[i + j] += c[i] * d[j];
//        if (a[i + j] >= 10)a[i + j + 1] += a[i + j] / 10, a[i + j] %= 10;
//    }
//    for (i = max - 2; i >= 0; i--)if (a[i])break;
//    *lena = i + 1;
//}
//void ksm(int n, int k[])
//{
//    int b[max] = { 2 }, lena = 1, lenb = 1;
//    k[0] = 1;
//    while (n)
//    {
//        if (n & 1)multiply(k, b, &lena, &lenb);
//        multiply(b, b, &lenb, &lenb);
//        n >>= 1;
//    }
//}
//void Out(int k[])
//{
//    k[0]--;
//    if (k[0] < 0)
//        for (i = 0; i < 500; i++)if (k[i] < 0)k[i + 1]--, k[i] += 10;
//    for (i = 499; i >= 0; i--)
//    {
//        printf("%d", k[i]);
//        if (i != 499 && i % 50 == 0)printf("\n");
//    }
//}
//main()
//{
//    int n, k[max] = {};
//    scanf("%d", &n);
//    ksm(n, k);
//    printf("%d\n", (n *= 0.30103) += 1);//2的次方位数的规律
//    Out(k);
//}

