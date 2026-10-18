// FUN_005a9e80 @ 005a9e80 body=[[005a9e80, 005a9f02]]


int FUN_005a9e80(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                  *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x18) + 0x134) * 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((*(int *)(param_1 + 0xc4) != *(int *)(iVar1 + 0x20)) &&
     (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(param_1 + 0xc4) * 4) + 0x34) != 0 ||
       (((*(char *)(param_1 + 0xc0) == 'R' && (*(char *)(param_1 + 0xc1) == 'E')) &&
        (*(char *)(param_1 + 0xc2) == 'B')))) ||
      (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
       (*(char *)(iVar1 + 0x1e) == 'B')))))) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

