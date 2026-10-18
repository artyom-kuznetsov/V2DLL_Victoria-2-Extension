// FUN_0057a120 @ 0057a120 body=[[0057a120, 0057a224]]


void FUN_0057a120(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x4f5) {
    if (param_2 == 0x4f4) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2ad) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2ba) {
      ExceptionList = &local_10;
      uVar1 = FUN_009885d0();
      local_8 = 0;
      FUN_00576f80();
      iVar2 = FUN_0057b0a0(uVar1);
      FUN_00408ad0();
      if (iVar2 != 0) {
        *(int *)(in_ECX + 0x24) = iVar2;
      }
    }
  }
  else {
    if (param_2 == 0x56b) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x1c);
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x84f) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

