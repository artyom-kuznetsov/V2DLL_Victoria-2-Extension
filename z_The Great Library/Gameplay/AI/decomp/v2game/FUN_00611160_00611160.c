// FUN_00611160 @ 00611160 body=[[00611160, 006111e5]]


void FUN_00611160(undefined4 *param_1,undefined4 param_2)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  if (0x10 < (int)(in_EAX - (int)param_1 & 0xfffffff0U)) {
    puVar1 = (undefined4 *)(in_EAX + -8);
    local_8 = 8 - (int)param_1;
    do {
      local_1c[0] = puVar1[-2];
      local_14 = *puVar1;
      local_10 = puVar1[1];
      puVar1[-2] = *param_1;
      *puVar1 = param_1[2];
      puVar1[1] = param_1[3];
      FUN_00612760(local_1c,param_2);
      puVar1 = puVar1 + -4;
    } while (0x10 < (int)(local_8 + (int)puVar1 & 0xfffffff0U));
  }
  return;
}

