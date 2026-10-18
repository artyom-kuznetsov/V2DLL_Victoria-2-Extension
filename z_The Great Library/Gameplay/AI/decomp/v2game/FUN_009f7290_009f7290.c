// FUN_009f7290 @ 009f7290 body=[[009f7290, 009f733e]]


int FUN_009f7290(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  local_8[0] = 0x20;
  iVar1 = FUN_005484e0(unaff_EDI,local_8,1);
  local_8[0] = 10;
  iVar2 = FUN_005484e0(unaff_EDI,local_8,1);
  if ((iVar2 != -1) && ((iVar2 < iVar1 || (iVar1 == -1)))) {
    return -1;
  }
  local_8[0] = 0x20;
  iVar2 = FUN_005484e0(unaff_EDI,local_8,1);
  if (iVar2 < param_1) {
    local_c[0] = 0x20;
    local_8[0] = 0x20;
    do {
      iVar2 = FUN_005484e0(unaff_EDI,local_c,1);
      if (iVar2 == -1) {
        return iVar1;
      }
      local_10[0] = 0x20;
      iVar1 = FUN_005484e0(unaff_EDI,local_10,1);
      iVar2 = FUN_005484e0(unaff_EDI,local_8,1);
    } while (iVar2 < param_1);
  }
  return iVar1;
}

