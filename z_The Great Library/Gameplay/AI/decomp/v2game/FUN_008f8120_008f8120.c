// FUN_008f8120 @ 008f8120 body=[[008f8120, 008f820a]]


ulonglong FUN_008f8120(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if ((char)uVar3 != '\0') {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                    *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
    return CONCAT44(iVar1,(uint)((*(int *)(iVar1 + 0xe68) ==
                                 *(int *)(*(int *)(param_1 + 0x14) + 0x70)) ==
                                (bool)*(char *)(in_ECX + 0x1c)));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    iVar2 = *(int *)(iVar1 + 300);
    iVar1 = iVar1 + 0x1a8;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    iVar2 = *(int *)(iVar1 + 0x5c);
    iVar1 = iVar1 + 200;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xe68);
  iVar1 = FUN_00969210(iVar1);
  return (ulonglong)
         CONCAT31((int3)((uint)iVar1 >> 8),(iVar1 == iVar2) == (bool)*(char *)(in_ECX + 0x1c));
}

