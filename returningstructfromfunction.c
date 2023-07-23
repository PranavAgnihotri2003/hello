#include<stdio.h>
struct distance
{
    int m;
    int cm;
};
void add(struct distance d1,struct distance d2)
{
    struct distance d3;
    d3.m=d1.m+d2.m;
    d3.cm=d1.cm+d2.cm;
    return d3;
}
