/*
 * @Author: 李佳修
 * @Date: 2022-03-26 15:04:20
 * @LastEditTime: 2022-03-26 15:24:38
 * @LastEditors: 李佳修
 * @FilePath: /未命名文件夹/fib.c
 */
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
