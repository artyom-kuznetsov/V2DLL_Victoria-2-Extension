// FUN_008676e0 @ 008676e0 body=[[008676e0, 0086773e]]


undefined4 FUN_008676e0(void)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0xa0);
  if (-1 < iVar3) {
    FUN_0099e240(iVar3);
    piVar1 = (int *)FUN_00868600(iVar3);
    if ((int *)*piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)*piVar1;
    }
    uVar2 = (uint)piVar1[2] >> 2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    return *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4);
  }
  return 0;
}

