// FUN_00841640 @ 00841640  (requested 00841640, first bytes: 55 8B EC 83 EC 1C 8B 0D)


undefined4 FUN_00841640(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 local_c [2];
  
  local_c[0] = 0;
  if (*(int *)(in_EAX + 0xc) == param_3) {
    iVar1 = *(int *)(in_EAX + 0x14);
  }
  else {
    iVar1 = *(int *)(in_EAX + 0xc);
  }
  FUN_0083ec10(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4),
               *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4),local_c,param_1);
  return local_c[0];
}

