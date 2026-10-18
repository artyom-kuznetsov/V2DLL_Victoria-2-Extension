// FUN_005c31d0 @ 005c31d0 body=[[005c31d0, 005c323a] [005c3244, 005c3255]]


void FUN_005c31d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = DAT_0125fe14 - DAT_0125fe10 >> 2;
  if (0 < iVar3) {
    FUN_00401000(0x3f000000);
    uVar1 = FUN_00b31c00();
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

