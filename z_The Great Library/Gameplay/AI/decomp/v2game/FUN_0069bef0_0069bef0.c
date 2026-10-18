// FUN_0069bef0 @ 0069bef0 body=[[0069bef0, 0069bfbd] [0069bfc1, 0069bfd9]]


void FUN_0069bef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvStack_10 = ExceptionList;
  puStack_c = &LAB_00b50e16;
  ExceptionList = &pvStack_10;
  *param_1 = CLedger::vftable;
  local_8 = 8;
  iVar4 = param_1[0x18];
  while (iVar4 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar4 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((param_1[0x18] != 0) && (iVar4 = param_1[0x18] + -1, param_1[0x18] = iVar4, iVar4 == 0)) {
      param_1[0x17] = 0;
    }
    iVar4 = param_1[0x18];
  }
  param_1[0x4a] = CCheckBoxObserver::vftable;
  param_1[0x3f] = CButtonObserver::vftable;
  param_1[0x34] = CButtonObserver::vftable;
  param_1[0x29] = CButtonObserver::vftable;
  param_1[0x1e] = CButtonObserver::vftable;
  if (param_1[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1a]);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x14]);
}

