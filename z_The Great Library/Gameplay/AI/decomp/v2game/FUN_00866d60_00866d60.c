// FUN_00866d60 @ 00866d60 body=[[00866d60, 00866d99] [00866da0, 00866e0e]]


void FUN_00866d60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c559;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CTutorialChapter::vftable;
  uVar4 = 0;
  local_8 = 4;
  if (param_1[0x26] != 0) {
    do {
      uVar3 = uVar4;
      FUN_0099e240(uVar4);
      piVar2 = (int *)FUN_00868600(uVar3);
      if ((int *)*piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)*piVar2;
      }
      uVar3 = (uint)piVar2[2] >> 2;
      if (*(uint *)(iVar5 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(iVar5 + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x26]);
  }
  FUN_0098bf40();
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x22]);
}

