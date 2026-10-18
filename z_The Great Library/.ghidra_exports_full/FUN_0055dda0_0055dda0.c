// FUN_0055dda0 @ 0055dda0 body=[[0055dda0, 0055de47]]


uint FUN_0055dda0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  int *piVar6;
  uint local_8;
  
  piVar1 = (int *)DAT_012587e4[1];
  uVar5 = *(uint *)(*(int *)(piVar1[*(int *)(in_EAX + 4)] + 0xe64) + 0x50);
  iVar2 = *(int *)(uVar5 + 0x20);
  if (iVar2 != 0) {
    uVar3 = *DAT_012587e4;
    local_8 = 0;
    uVar5 = uVar3;
    piVar6 = piVar1;
    if (0 < (int)uVar3) {
      do {
        if ((0 < (int)(*(int *)(piVar1[*(int *)(*piVar6 + 0x20)] + 0x9dc) -
                       *(int *)(piVar1[*(int *)(*piVar6 + 0x20)] + 0x9d8) & 0xfffffffcU)) &&
           (iVar4 = *(int *)(*(int *)(piVar1[*(int *)(*piVar6 + 0x20)] + 0xe64) + 0x50),
           *(int *)(iVar4 + 0x20) == iVar2)) {
          return CONCAT31((int3)((uint)iVar4 >> 8),1);
        }
        uVar5 = local_8 + 1;
        piVar6 = piVar6 + 1;
        local_8 = uVar5;
      } while ((int)uVar5 < (int)uVar3);
    }
  }
  return uVar5 & 0xffffff00;
}

