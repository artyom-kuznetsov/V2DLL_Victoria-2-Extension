// FUN_005898e0 @ 005898e0 body=[[005898e0, 005899ab]]


void FUN_005898e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + *(int *)(in_ECX + 0x3c) * 4);
  iVar2 = FUN_004cd300(in_ECX + 0x40);
  FUN_00536fd0(iVar1,*(undefined4 *)(in_ECX + 0x48));
  iVar3 = 0;
  piVar4 = (int *)(iVar1 + 0x98);
  do {
    if (*piVar4 == *(int *)(in_ECX + 0x44)) {
      iVar3 = *(int *)(iVar1 + 0xa0 + iVar3 * 0x1c);
      goto LAB_00589950;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 7;
  } while (iVar3 < 4);
  iVar3 = 0;
LAB_00589950:
  FUN_004cd550(iVar1,iVar3 + iVar2);
  FUN_004cbfb0();
  FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4));
  *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x1c) = 1;
  return;
}

