// FUN_00881450 @ 00881450 body=[[00881450, 008814d0]]


void FUN_00881450(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 200);
  iVar2 = *(int *)(in_ECX + 0x24);
  do {
    if (piVar1 == (int *)0x0) {
      if (iVar2 == 0) {
        return;
      }
      FUN_00408ed0(iVar2 + 0x30,0,0xffffffff);
      FUN_004b3a30(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4));
      return;
    }
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar3 + 8) != iVar2);
  return;
}

