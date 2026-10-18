// FUN_007c79f0 @ 007c79f0 body=[[007c79f0, 007c7a6b]]


void FUN_007c79f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (*(int *)(unaff_ESI + 0x1ec) == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x1b4);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0097f630(iVar1,*(undefined4 *)(unaff_ESI + 0x54),unaff_EDI);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0x1ec) = uVar2;
  }
  else {
    ExceptionList = &local_10;
    FUN_009808e0(*(int *)(unaff_ESI + 0x1ec),unaff_EDI);
  }
  FUN_009828e0();
  ExceptionList = local_10;
  return;
}

