// FUN_00897140 @ 00897140 body=[[00897140, 00897195]]


void FUN_00897140(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    cVar3 = (**(code **)(*piVar1 + 0x20))();
    if (cVar3 != '\0') {
      iVar2 = *(int *)(in_ECX + 0x20) / 1000;
      if (iVar2 != *(int *)(piVar1[0x19] + 0x58)) {
        FUN_004b8e80(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4),piVar1,0);
      }
    }
  }
  return;
}

