// FUN_008d8030 @ 008d8030 body=[[008d8030, 008d808d]]


int FUN_008d8030(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  int in_ECX;
  
  piVar1 = (int *)FUN_00519a40(*(undefined4 *)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  iVar2 = piVar1[1] - *piVar1;
  iVar3 = iVar2 >> 3;
  uVar4 = (uint3)(iVar2 >> 0xb);
  if (0 < iVar3) {
    piVar1 = (int *)(*piVar1 + 4);
    iVar2 = 0;
    do {
      if (*piVar1 == *(int *)(in_ECX + 0x20)) {
        return CONCAT31(uVar4,1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < iVar3);
  }
  return (uint)uVar4 << 8;
}

