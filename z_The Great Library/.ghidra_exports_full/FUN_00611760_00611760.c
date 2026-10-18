// FUN_00611760 @ 00611760 body=[[00611760, 0061180f]]


void FUN_00611760(undefined4 param_1)

{
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  if (0x20 < (int)(in_EAX - (int)in_ECX & 0xffffffe0U)) {
    puVar1 = (undefined4 *)(in_EAX + -0x10);
    local_c = 0x10 - (int)in_ECX;
    do {
      local_28 = puVar1[-2];
      local_30[0] = puVar1[-4];
      local_24 = puVar1[-1];
      local_20 = *puVar1;
      local_1c = puVar1[1];
      local_18 = puVar1[2];
      local_14 = puVar1[3];
      puVar1[-4] = *in_ECX;
      puVar1[-2] = in_ECX[2];
      puVar1[-1] = in_ECX[3];
      *puVar1 = in_ECX[4];
      puVar1[1] = in_ECX[5];
      puVar1[2] = in_ECX[6];
      puVar1[3] = in_ECX[7];
      FUN_00612ac0(local_30,param_1);
      puVar1 = puVar1 + -8;
    } while (0x20 < (int)(local_c + (int)puVar1 & 0xffffffe0U));
  }
  return;
}

