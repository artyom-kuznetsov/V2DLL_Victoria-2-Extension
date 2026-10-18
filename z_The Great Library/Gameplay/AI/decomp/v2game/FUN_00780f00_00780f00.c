// FUN_00780f00 @ 00780f00 body=[[00780f00, 00781091]]


int FUN_00780f00(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = *(int *)(param_2 + 0x6c);
  local_30 = 0;
  local_2c = 0;
  if ((int)(*(int *)(param_2 + 0x70) - iVar2 & 0xfffffffcU) < 1) {
    return 0;
  }
  do {
    iVar2 = *(int *)(iVar2 + local_2c * 4);
    if (param_3 == '\0') {
      if (*(int *)(param_1 + 0xab0) != 0) {
        iVar1 = DAT_01258a94;
        if (*(uint *)(iVar2 + 0xc) < 0x1269) {
          iVar1 = DAT_01258a98;
        }
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_009c1d40();
        }
        iVar3 = DAT_01258a94;
        *(int *)(iVar2 + 8) = iVar1;
        if (*(uint *)(param_1 + 0xabc) < 0x1269) {
          iVar3 = DAT_01258a98;
        }
        if (iVar3 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_009c1d40();
        }
        *(int *)(param_1 + 0xab8) = iVar2;
        if (iVar1 != iVar2) goto LAB_0078105b;
      }
LAB_00781057:
      local_30 = local_30 + 1;
    }
    else {
      iVar1 = FUN_00967f50();
      if (iVar1 != 0) {
        iVar1 = DAT_01258a94;
        if (*(uint *)(iVar2 + 0x34) < 0x1269) {
          iVar1 = DAT_01258a98;
        }
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_009c1d40();
        }
        iVar3 = DAT_01258a94;
        *(int *)(iVar2 + 0x30) = iVar1;
        if (*(uint *)(param_1 + 0xabc) < 0x1269) {
          iVar3 = DAT_01258a98;
        }
        if (iVar3 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_009c1d40();
        }
        *(int *)(param_1 + 0xab8) = iVar2;
        if (iVar1 == iVar2) goto LAB_00781057;
      }
    }
LAB_0078105b:
    iVar2 = *(int *)(param_2 + 0x6c);
    local_2c = local_2c + 1;
    if (*(int *)(param_2 + 0x70) - iVar2 >> 2 <= local_2c) {
      return local_30;
    }
  } while( true );
}

