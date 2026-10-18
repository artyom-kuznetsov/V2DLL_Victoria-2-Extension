// FUN_00784b00 @ 00784b00 body=[[00784b00, 00784bda]]


undefined4 FUN_00784b00(undefined4 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  undefined1 local_6c [92];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46978;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x2c))();
  piVar1 = (int *)*puVar4;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar5 = *piVar1;
    param_2 = param_2 & 0xffffff;
    cVar3 = FUN_0077f390((int)&param_2 + 3);
    if (cVar3 != '\0') break;
    piVar1 = (int *)piVar1[2];
  }
  iVar5 = FUN_0077e650(iVar5,local_6c,param_1,*(char *)(iVar5 + 0x68) != param_2._3_1_);
  local_8 = 0;
  FUN_00408ed0(iVar5,0,0xffffffff);
  FUN_00408ed0(iVar5 + 0x1c,0,0xffffffff);
  FUN_00408ed0(iVar5 + 0x38,0,0xffffffff);
  *(undefined4 *)(uVar2 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined1 *)(uVar2 + 0x58) = *(undefined1 *)(iVar5 + 0x58);
  FUN_00459820();
  ExceptionList = local_10;
  return 1;
}

