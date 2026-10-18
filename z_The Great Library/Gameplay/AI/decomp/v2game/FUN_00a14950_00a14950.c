// FUN_00a14950 @ 00a14950 body=[[00a14950, 00a149ca]]


void FUN_00a14950(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x48);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a13d50(iVar1,*(undefined4 *)(*(int *)(unaff_ESI + 0x8c) + 0x6c),DAT_00f092fc,1);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x8c) + 0x38) + 0x18))(uVar2,iVar1);
  ExceptionList = local_10;
  return;
}

