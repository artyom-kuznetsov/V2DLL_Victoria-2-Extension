// FUN_00476ae0 @ 00476ae0 body=[[00476ae0, 00476b0c] [00476b10, 00476b92]]


undefined4 FUN_00476ae0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int in_EDX;
  int unaff_EDI;
  undefined1 local_6c [92];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46978;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x2c))();
  piVar1 = (int *)*puVar2;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    if (in_EDX == *(int *)(*piVar1 + 0x2c)) break;
    piVar1 = (int *)piVar1[2];
  }
  iVar3 = FUN_00476360(*piVar1,local_6c);
  local_8 = 0;
  FUN_00408ed0(iVar3,0,0xffffffff);
  FUN_00408ed0(iVar3 + 0x1c,0,0xffffffff);
  FUN_00408ed0(iVar3 + 0x38,0,0xffffffff);
  *(undefined4 *)(unaff_EDI + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined1 *)(unaff_EDI + 0x58) = *(undefined1 *)(iVar3 + 0x58);
  FUN_00459820();
  ExceptionList = local_10;
  return 1;
}

