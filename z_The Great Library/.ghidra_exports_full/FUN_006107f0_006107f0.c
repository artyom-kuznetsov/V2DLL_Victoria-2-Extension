// FUN_006107f0 @ 006107f0 body=[[006107f0, 00610865]]


void FUN_006107f0(undefined4 param_1)

{
  undefined8 *in_EAX;
  uint uVar1;
  int in_ECX;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = in_ECX - (int)in_EAX;
  if (0x10 < (int)(uVar1 & 0xfffffff0)) {
    puVar2 = (undefined8 *)(in_ECX + -0x10);
    do {
      local_18 = *puVar2;
      local_10 = puVar2[1];
      *puVar2 = *in_EAX;
      puVar2[1] = in_EAX[1];
      FUN_00612200((int)(uVar1 - 0x10) >> 4,&local_18,param_1);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (0x10 - (int)in_EAX);
    } while (0x10 < (int)(uVar1 & 0xfffffff0));
  }
  return;
}

