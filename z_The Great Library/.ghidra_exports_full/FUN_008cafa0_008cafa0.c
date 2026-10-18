// FUN_008cafa0 @ 008cafa0 body=[[008cafa0, 008caff6]]


uint FUN_008cafa0(uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 uVar3;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x4c0) +
            0xab18;
    bVar1 = *(int *)(DAT_012588e8 + 0xb0c) < iVar2;
    uVar3 = (undefined3)((uint)iVar2 >> 8);
    param_1 = CONCAT31(uVar3,bVar1);
    if (bVar1 == (bool)*(char *)(in_ECX + 0x1c)) {
      return CONCAT31(uVar3,1);
    }
  }
  return param_1 & 0xffffff00;
}

