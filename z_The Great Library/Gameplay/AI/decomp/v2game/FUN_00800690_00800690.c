// FUN_00800690 @ 00800690 body=[[00800690, 008006f9] [00800700, 00800850] [00800854, 0080087e]]


/* WARNING: Removing unreachable block (ram,0x0080084b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00800690(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b90c68;
  local_14 = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar5 = 1;
  ExceptionList = &local_14;
  if (1 < iVar2) {
    do {
      local_c = 0;
      iVar3 = FUN_00969390();
      if ((1 < iVar3) && (cVar1 = (**(code **)(*_DAT_00000000 + 0x18))(), cVar1 != '\0')) {
        (**(code **)(*piRam00000004 + 0x18))();
      }
      uVar4 = FUN_009b6df0();
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) = uVar4;
      uVar4 = FUN_009b6df0();
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 4) = uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  ExceptionList = local_14;
  return;
}

