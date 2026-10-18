// FUN_0098a590 @ 0098a590 body=[[0098a590, 0098a63d]]


void FUN_0098a590(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined **local_24 [3];
  char *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bfc0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  uVar5 = param_2 | 7;
  if (uVar5 < 0x7fffffff) {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar4 = uVar1 >> 1;
    param_2 = uVar5;
    if ((uVar5 / 3 < uVar4) && (param_2 = uVar4 + uVar1, 0x7ffffffe - uVar4 < uVar1)) {
      param_2 = 0x7ffffffe;
    }
  }
  param_2 = param_2 + 1;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffd0;
  if ((param_2 != 0) &&
     ((ExceptionList = &pvStack_10, puVar2 = &stack0xffffffd0, 0x7fffffff < param_2 ||
      (ExceptionList = &pvStack_10, iVar3 = FUN_00aae9af(param_2 * 2), puVar2 = local_14, iVar3 == 0
      )))) {
    local_14 = puVar2;
    local_18 = (char *)0x0;
    std::exception::exception((exception *)local_24,&local_18);
    local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_24,&DAT_00e6fb20);
  }
  local_14 = puVar2;
  FUN_0098a665();
  return;
}

