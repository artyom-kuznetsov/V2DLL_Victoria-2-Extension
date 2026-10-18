// FUN_0099bd50 @ 0099bd50 body=[[0099bd50, 0099bdb8] [0099bdbf, 0099bdd9] [0099bddd, 0099be02] [0099be06, 0099be39]]


void FUN_0099bd50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  piVar1 = *(int **)(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x114) = 1;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_005499c0();
      return;
    }
    if (unaff_ESI == *piVar1) break;
    piVar1 = (int *)piVar1[2];
  }
  if (*(char *)(param_1 + 0x114) == '\0') {
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    if (piVar1 == *(int **)(param_1 + 0x108)) {
      *(int *)(param_1 + 0x108) = iVar3;
    }
    if (piVar1 == *(int **)(param_1 + 0x10c)) {
      *(int *)(param_1 + 0x10c) = iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  *(undefined1 *)(piVar1 + 3) = 1;
  FUN_005499c0();
  if (unaff_ESI != 0) {
    if (*(int *)(unaff_ESI + 0x308) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(int *)(unaff_ESI + 0x308));
    }
    *(undefined4 *)(unaff_ESI + 0x308) = 0;
    *(undefined4 *)(unaff_ESI + 0x30c) = 0;
    *(undefined4 *)(unaff_ESI + 0x310) = 0;
    *(undefined ***)(unaff_ESI + 0x1c) = C3dObject::vftable;
    FUN_009f8f70();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x6bc7c) == 0) {
    *(undefined4 *)(param_1 + 0x6bc7c) = 0;
  }
  if (*(int *)(param_1 + 0x6bc84) == 0) {
    *(undefined4 *)(param_1 + 0x6bc84) = 0;
  }
  if (*(int *)(param_1 + 0x6bc88) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x6bc88) = 0;
  return;
}

