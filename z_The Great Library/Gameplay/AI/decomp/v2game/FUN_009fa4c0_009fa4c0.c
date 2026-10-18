// FUN_009fa4c0 @ 009fa4c0 body=[[009fa4c0, 009fa557] [009fa55b, 009fa56b]]


void FUN_009fa4c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  uint in_stack_00000018;
  undefined4 uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(unaff_EDI + 0x5c) != 0) {
    ExceptionList = &local_10;
    FUN_00a87850(*(int *)(unaff_EDI + 0x5c),CONCAT44(uStack_24,unaff_EDI),0x9fa370);
  }
  iVar1 = (**(code **)(*(int *)(unaff_EDI + 0x58) + 4))();
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  *(undefined4 *)(iVar1 + 0x10c) = 1;
  uVar2 = (**(code **)(*(int *)(unaff_EDI + 0x58) + 4))(&param_1);
  *(undefined4 *)(unaff_EDI + 0xa0) = uVar2;
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

