// FUN_0082e780 @ 0082e780 body=[[0082e780, 0082e7ff]]


void FUN_0082e780(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005cc3e0();
  if (cVar1 == '\0') {
    uVar3 = 0;
    *(undefined4 *)(unaff_EDI + 0xa0) = 0;
    iVar2 = FUN_00aae9af(0x68);
    local_8 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_005df690(iVar2,unaff_EDI,0);
    }
    local_8 = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_10;
  return;
}

