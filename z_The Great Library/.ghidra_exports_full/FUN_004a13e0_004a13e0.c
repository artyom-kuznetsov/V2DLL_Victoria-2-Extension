// FUN_004a13e0 @ 004a13e0 body=[[004a13e0, 004a1492]]


/* WARNING: Removing unreachable block (ram,0x004a1422) */
/* WARNING: Removing unreachable block (ram,0x004a1426) */
/* WARNING: Removing unreachable block (ram,0x004a143b) */

void FUN_004a13e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(param_1[0xaa9] + iVar2 * 4);
      if (*(int *)(iVar1 + 0xa4) != *(int *)(iVar1 + 0xa8)) {
        *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa4);
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x24))();
    } while (iVar2 < iVar1);
  }
  if ((undefined4 *)param_1[0x84d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x84d])(1);
  }
  param_1[0x84d] = 0;
  if ((undefined4 *)param_1[0x84c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x84c])(1);
  }
  param_1[0x84c] = 0;
  return;
}

