// FUN_00646190 @ 00646190 body=[[00646190, 00646215]]


undefined4 FUN_00646190(undefined4 param_1)

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
  (**(code **)(*(int *)(unaff_ESI + 0x34) + 4))();
  iVar1 = FUN_00aae9af(300);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0067cc10(iVar1,*(undefined4 *)(unaff_ESI + 0x30),unaff_ESI,param_1);
  }
  local_8 = 0xffffffff;
  FUN_006463e0((undefined4 *)(unaff_ESI + 0x5c),*(undefined4 *)(unaff_ESI + 0x5c));
  ExceptionList = local_10;
  return uVar2;
}

