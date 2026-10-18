// FUN_004d1f00 @ 004d1f00 body=[[004d1f00, 004d1f58] [004d1f62, 004d1f91]]


void FUN_004d1f00(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_10;
  
  iVar3 = DAT_012588e8;
  for (local_10 = *(int **)(param_1 + 0x48);
      (*(int **)(param_1 + 0x48) <= local_10 && (local_10 < *(int **)(param_1 + 0x4c)));
      local_10 = local_10 + 1) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0xacc) + *local_10 * 4);
    piVar2 = *(int **)(iVar1 + 200);
    if (piVar2 != (int *)0x0) {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar2);
    }
    *(undefined4 *)(iVar1 + 200) = 0;
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    FUN_004b2610();
  }
  return;
}

