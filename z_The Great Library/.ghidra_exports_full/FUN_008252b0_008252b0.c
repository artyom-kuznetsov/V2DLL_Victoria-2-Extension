// FUN_008252b0 @ 008252b0 body=[[008252b0, 00825378]]


undefined4 FUN_008252b0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x8c) - (int)puVar3 >> 2;
  if (iVar2 != 0) {
    local_c = *puVar3;
    if (1 < iVar2) {
      local_8 = 999999;
      while ((*(undefined4 **)(param_1 + 0x88) <= puVar3 &&
             (puVar3 < *(undefined4 **)(param_1 + 0x8c)))) {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        if ((param_3 != '\0') && (0 < *(int *)(param_2 + 0xa0))) {
          FUN_00826f50();
        }
        FUN_0049b7f0(&local_10,uVar1,0);
        if ((int)((double)local_10 / 1000.0) < local_8) {
          local_c = uVar1;
          local_8 = (int)((double)local_10 / 1000.0);
        }
      }
    }
    return local_c;
  }
  return 1;
}

