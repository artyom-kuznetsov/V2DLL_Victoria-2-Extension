// FUN_00936a80 @ 00936a80 body=[[00936a80, 00936b99]]


void FUN_00936a80(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined8 uVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0xf0) - *(int *)(unaff_EDI + 0xec) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(unaff_EDI + 0xec) + local_14 * 4);
      if ((*(int *)(iVar1 + 0x14) == *(int *)(param_2 + 4)) &&
         (iVar2 = local_c, *(int *)(iVar1 + 0x54) == *(int *)(param_3 + 4))) {
        local_10 = local_10 + 1;
        FUN_005935d0(&local_18);
        if (*(char *)(iVar1 + 0x88) == '\0') {
          local_8 = local_8 + local_18;
          iVar2 = local_c;
        }
        else {
          iVar2 = local_c + local_18;
          local_c = iVar2;
        }
      }
      else if ((*(int *)(iVar1 + 0x14) == *(int *)(param_3 + 4)) &&
              (*(int *)(iVar1 + 0x54) == *(int *)(param_2 + 4))) {
        local_10 = local_10 + 1;
        FUN_005935d0(&local_1c);
        if (*(char *)(iVar1 + 0x88) == '\0') {
          iVar2 = iVar2 + local_1c;
          local_c = iVar2;
        }
        else {
          local_8 = local_8 + local_1c;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(unaff_EDI + 0xf0) - *(int *)(unaff_EDI + 0xec) >> 2);
  }
  if (local_10 < param_4) {
    *param_1 = 0;
    return;
  }
  if (0 < local_8) {
    uVar3 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar3,local_8,local_8 >> 0x1f);
  }
  *param_1 = iVar2;
  return;
}

