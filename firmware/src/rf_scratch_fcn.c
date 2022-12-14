#include <stdio.h>
#include "rf_scratch_fcn.h"
#include "conv2d.inc"

static unsigned char region0[1285];
static float region1[3175];
static float region2[310];
static float region3[45];
static float region4[72];
static float region5[1];
static unsigned short row[6] = {0};
static unsigned short st[5] = {257,635,310,5,8};
static unsigned short sz[5] = {1285,3175,310,45,72};
static unsigned char cnt[5] = {5,5,1,9,9};

unsigned char *rowptr() {
  return region0+row[0];
}

float *rowout() {
  return (float *)region5;
}

void incrow(int i) {
  row[i]+=st[i];
  if (row[i]>=sz[i]) row[i]-=sz[i];
}

int pushrow() {
  cnt[0]-=1;
  incrow(0);
  if (cnt[0]==0) {
    conv2di(253,2,5,5,1,5,region0,row[0],st[0],sz[0],(float *)W0,B0,region1+row[1]);
    cnt[0]=2;
  } else
    return 0;
  cnt[1]-=1;
  incrow(1);
  if (cnt[1]==0) {
    conv2df(123,2,5,5,5,5,region1,row[1],st[1],sz[1],(float *)W1,B1,region2+row[2]);
    cnt[1]=2;
  } else
    return 0;
  cnt[2]-=1;
  incrow(2);
  if (cnt[2]==0) {
    conv2df(1,1,1,62,5,5,region2,row[2],st[2],sz[2],(float *)W2,B2,region3+row[3]);
    cnt[2]=1;
  } else
    return 0;
  cnt[3]-=1;
  incrow(3);
  if (cnt[3]==0) {
    conv2df(1,1,9,1,5,8,region3,row[3],st[3],sz[3],(float *)W3,B3,region4+row[4]);
    cnt[3]=1;
  } else
    return 0;
  cnt[4]-=1;
  incrow(4);
  if (cnt[4]==0) {
    conv2df(1,1,9,1,8,1,region4,row[4],st[4],sz[4],(float *)W4,B4,region5+row[5]);
    cnt[4]=5;
  } else
    return 0;
  return 1;
}
