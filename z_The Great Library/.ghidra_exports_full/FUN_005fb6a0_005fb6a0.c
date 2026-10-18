// FUN_005fb6a0 @ 005fb6a0 body=[[005fb6a0, 005fb744]]


void FUN_005fb6a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(unaff_EDI + 0x650) == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x148);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006991a0(iVar1);
    }
    *(undefined4 *)(unaff_EDI + 0x650) = uVar2;
  }
  local_8 = 0xffffffff;
  iVar1 = *(int *)(unaff_EDI + 0x650);
  *(undefined4 *)(iVar1 + 0x2c) = *param_1;
  *(undefined4 *)(iVar1 + 0x30) = param_1[1];
  if (*(char *)(*(int *)(iVar1 + 0x28) + 0x67) != '\0') {
    FUN_0069c520();
  }
  FUN_0069c2c0(*(char *)(*(int *)(*(int *)(unaff_EDI + 0x650) + 0x28) + 0x67) == '\0');
  ExceptionList = local_10;
  return;
}

