// FUN_00748d90 @ 00748d90 body=[[00748d90, 00748e0b]]


void FUN_00748d90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x44);
  local_c = 0;
  if (0 < (int)(*(int *)(param_1 + 0x48) - iVar1 & 0xfffffff0U)) {
    local_8 = 0;
    do {
      iVar3 = 0;
      if (0 < (int)(((int *)(iVar1 + local_8))[1] - *(int *)(iVar1 + local_8) & 0xfffffffcU)) {
        do {
          FUN_00749bb0();
          piVar2 = (int *)(*(int *)(param_1 + 0x44) + local_8);
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar2[1] - *piVar2 >> 2);
      }
      iVar1 = *(int *)(param_1 + 0x44);
      local_8 = local_8 + 0x10;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x48) - iVar1 >> 4);
  }
  return;
}

