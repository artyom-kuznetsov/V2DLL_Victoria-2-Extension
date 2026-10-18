// FUN_00a57c40 @ 00a57c40 body=[[00a57c40, 00a57ce9] [00a57ced, 00a57d37]]


undefined4 FUN_00a57c40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int unaff_EDI;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b3d918;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*(int *)(unaff_EDI + 0x160) + 4))(param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x15c) + 0x48))(unaff_EDI + 0x110);
    FUN_00408ed0(param_1,0,0xffffffff);
    pvStack_14 = (void *)0x0;
    (**(code **)(*(int *)(iVar1 + 0x160) + 4))(&stack0xffffffc0);
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_EBX);
    }
  }
  uVar2 = FUN_009ecdf0(param_2,0,0);
  (**(code **)(**(int **)(unaff_EDI + 0x15c) + 0x40))(uVar2);
  ExceptionList = pvStack_1c;
  return uVar2;
}

