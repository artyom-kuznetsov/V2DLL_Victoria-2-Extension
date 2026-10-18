// FUN_00955d90 @ 00955d90 body=[[00955d90, 00955f1d]]


void FUN_00955d90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar4 = (**(code **)(**(int **)(unaff_EDI + 0x68) + 0x18))();
  if (((cVar4 != '\0') && (iVar3 != *(int *)(unaff_EDI + 0x68))) && (*(int *)(unaff_EDI + 100) != 0)
     ) {
    param_1 = *(int *)(unaff_EDI + 0x58);
    FUN_004d1020(unaff_EDI,&param_1);
    iVar1 = *(int *)(*(int *)(unaff_EDI + 100) + 0x58);
    piVar5 = (int *)FUN_004c25b0();
    FUN_004ee550(iVar1 * 0xb0 + 0x10 + *piVar5,&param_1);
    for (iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x68) + 0x28) * 0x10 +
                         *(int *)(*(int *)(unaff_EDI + 100) + 0x194));
        (iVar1 != 0 && (unaff_EDI != iVar1)); iVar1 = *(int *)(iVar1 + 0x27c)) {
    }
    FUN_004be0f0();
    puVar6 = (undefined4 *)
             (*(int *)(iVar3 + 0x28) * 0x10 + *(int *)(*(int *)(unaff_EDI + 100) + 0x194));
    iVar2 = puVar6[1];
    puVar6[1] = iVar1;
    *(int *)(iVar1 + 0x278) = iVar2;
    *(undefined4 *)(iVar1 + 0x27c) = 0;
    iVar1 = puVar6[2];
    puVar6[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *puVar6 = puVar6[1];
    }
    else {
      *(undefined4 *)(iVar2 + 0x27c) = puVar6[1];
    }
  }
  *(int *)(unaff_EDI + 0x68) = iVar3;
  if ((*(char *)(iVar3 + 0x39c) != '\0') && (*(int *)(unaff_EDI + 0x1d4) == 0)) {
    param_1 = FUN_00aae9af(0x100);
    local_8 = 0;
    if (param_1 == 0) {
      *(undefined4 *)(unaff_EDI + 0x1d4) = 0;
      ExceptionList = local_10;
      return;
    }
    uVar7 = FUN_00954910(param_1);
    *(undefined4 *)(unaff_EDI + 0x1d4) = uVar7;
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(unaff_EDI + 0x1d4) != 0) && (*(char *)(iVar3 + 0x39c) == '\0')) {
    FUN_00955d40();
    *(undefined4 *)(unaff_EDI + 0x1d4) = 0;
  }
  ExceptionList = local_10;
  return;
}

