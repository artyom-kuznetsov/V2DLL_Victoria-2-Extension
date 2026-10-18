// FUN_008551f0 @ 008551f0 body=[[008551f0, 008552a3]]


int FUN_008551f0(undefined4 *param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = (in_EAX - (int)param_1) / 0xc;
  if (1 < iVar1) {
    puVar2 = (undefined4 *)(in_EAX + -4);
    local_8 = 4 - (int)param_1;
    do {
      local_14 = puVar2[-2];
      local_10 = puVar2[-1];
      local_c = *puVar2;
      puVar2[-2] = *param_1;
      puVar2[-1] = param_1[1];
      *puVar2 = param_1[2];
      FUN_00855400(&local_14,param_2);
      puVar2 = puVar2 + -3;
      iVar1 = (local_8 + (int)puVar2) * 0x2aaaaaab;
    } while (1 < (local_8 + (int)puVar2) / 0xc);
  }
  return iVar1;
}

