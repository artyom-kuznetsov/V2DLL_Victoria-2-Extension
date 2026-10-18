// FUN_0058b3d0 @ 0058b3d0 body=[[0058b3d0, 0058b438]]


void FUN_0058b3d0(void)

{
  int iVar1;
  int in_ECX;
  int local_c;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  FUN_00579e80(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
  for (iVar1 = *(int *)(iVar1 + 0x4c4); (iVar1 != 0 && (*(int *)(iVar1 + 0x24) != local_c));
      iVar1 = *(int *)(iVar1 + 0x2c)) {
  }
  FUN_00549a20(iVar1);
  return;
}

