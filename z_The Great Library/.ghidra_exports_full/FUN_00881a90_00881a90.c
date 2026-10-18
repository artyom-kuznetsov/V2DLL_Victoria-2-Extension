// FUN_00881a90 @ 00881a90 body=[[00881a90, 00881b3e]]


void FUN_00881a90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  piVar2 = *(int **)(iVar1 + 0x4d8);
  iVar3 = *(int *)(in_ECX + 0x24);
  do {
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(iVar1 + 0x4e8);
      do {
        if (piVar2 == (int *)0x0) {
          if (iVar3 != 0) {
            FUN_00408ed0(iVar3 + 0x30,0,0xffffffff);
            FUN_005114d0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
          }
          return;
        }
        iVar1 = *piVar2;
        piVar2 = (int *)piVar2[2];
      } while (iVar1 != iVar3);
      return;
    }
    iVar4 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*(int *)(iVar4 + 8) != iVar3);
  return;
}

