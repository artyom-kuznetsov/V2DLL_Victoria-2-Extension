// FUN_00610f00 @ 00610f00 body=[[00610f00, 00610fc3]]


void FUN_00610f00(undefined4 param_1)

{
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  if (1 < (in_EAX - (int)in_ECX) / 0x18) {
    puVar1 = (undefined4 *)(in_EAX + -8);
    local_c = 8 - (int)in_ECX;
    do {
      local_28[0] = puVar1[-4];
      local_1c = puVar1[-1];
      local_20 = puVar1[-2];
      local_18 = *puVar1;
      local_14 = puVar1[1];
      puVar1[-4] = *in_ECX;
      puVar1[-2] = in_ECX[2];
      puVar1[-1] = in_ECX[3];
      *puVar1 = in_ECX[4];
      puVar1[1] = in_ECX[5];
      FUN_006125c0(local_28,param_1);
      puVar1 = puVar1 + -6;
    } while (1 < (local_c + (int)puVar1) / 0x18);
  }
  return;
}

