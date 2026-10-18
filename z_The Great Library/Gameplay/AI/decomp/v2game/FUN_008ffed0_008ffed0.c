// FUN_008ffed0 @ 008ffed0 body=[[008ffed0, 008fff26]]


undefined4 FUN_008ffed0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = *(int *)(iVar1 + 0x14dc);
  if ((iVar2 <= *(int *)(in_ECX + 0x24)) &&
     ((iVar2 < *(int *)(in_ECX + 0x24) || (*(uint *)(iVar1 + 0x14d8) < *(uint *)(in_ECX + 0x20)))))
  {
    return 0;
  }
  return 1;
}

