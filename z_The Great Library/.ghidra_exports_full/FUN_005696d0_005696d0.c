// FUN_005696d0 @ 005696d0 body=[[005696d0, 005697c0]]


undefined4 FUN_005696d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EDI;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5f790;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005698b0();
  iVar1 = *(int *)(param_1 + 0x2e4) * 4;
  piVar4 = (int *)(*(int *)(unaff_EDI + 0x2c8) + iVar1);
  *piVar4 = *piVar4 + param_2;
  piVar4 = (int *)(*(int *)(unaff_EDI + 0x2c8) + iVar1);
  if ((*piVar4 < local_1c) && (DAT_012587e1 == '\0')) {
    ExceptionList = local_14;
    return 0;
  }
  *piVar4 = *piVar4 - local_1c;
  iVar3 = DAT_012588e8;
  piVar4 = (int *)(*(int *)(unaff_EDI + 0x2b8) + iVar1);
  *piVar4 = *piVar4 + 1;
  if (*(char *)(iVar3 + 0xd1c) != '\0') {
    uVar2 = *(undefined4 *)(iVar3 + 0xcf4);
    FUN_00469980(param_1);
    FUN_00457b00(uVar2);
  }
  FUN_00568dc0(unaff_EDI,param_1);
  *(undefined4 *)(iVar1 + *(int *)(unaff_EDI + 0x2c8)) = 0;
  ExceptionList = local_14;
  return 1;
}

