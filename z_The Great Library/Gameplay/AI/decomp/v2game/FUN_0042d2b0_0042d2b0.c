// FUN_0042d2b0 @ 0042d2b0 body=[[0042d2b0, 0042d2cc] [0042d2d0, 0042d317]]


void FUN_0042d2b0(undefined4 param_1)

{
  undefined4 *in_EAX;
  uint uVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = in_ECX - (int)in_EAX;
  if (8 < (int)(uVar1 & 0xfffffff8)) {
    puVar2 = (undefined4 *)(in_ECX + -8);
    do {
      local_10 = *puVar2;
      local_c = puVar2[1];
      *puVar2 = *in_EAX;
      puVar2[1] = in_EAX[1];
      FUN_0042d520(0,(int)(uVar1 - 8) >> 3,&local_10,param_1);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (8 - (int)in_EAX);
    } while (8 < (int)(uVar1 & 0xfffffff8));
  }
  return;
}

