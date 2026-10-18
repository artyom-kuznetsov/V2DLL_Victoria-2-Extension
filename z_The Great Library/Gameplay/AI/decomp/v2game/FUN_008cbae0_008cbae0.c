// FUN_008cbae0 @ 008cbae0 body=[[008cbae0, 008cbb7d]]


uint FUN_008cbae0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(DAT_012588e8 + 0xacc);
    uVar2 = *(uint *)(iVar1 + *(int *)(param_1 + 0x10) * 4);
    if (*(int *)(uVar2 + 0x16c) ==
        *(int *)(*(int *)(iVar1 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(uVar2 + 300) * 4) + 0xbe4) * 4) + 0x16c)
       ) {
      uVar2 = uVar2 & 0xffffff00;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)*(int *)(uVar2 + 0xe8) >> 8),
                       *(int *)(uVar2 + 0xe8) !=
                       *(int *)(*(int *)(iVar1 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                                  *(int *)(uVar2 + 300) * 4) + 0xbe4
                                                         ) * 4) + 0xe8));
    }
    if ((char)uVar2 == *(char *)(in_ECX + 0x1c)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

