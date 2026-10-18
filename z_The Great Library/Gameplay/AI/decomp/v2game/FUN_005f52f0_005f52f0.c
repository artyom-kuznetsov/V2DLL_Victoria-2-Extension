// FUN_005f52f0 @ 005f52f0 body=[[005f52f0, 005f540a]]


void FUN_005f52f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0xda) {
    if (param_2 == 0xd9) {
      ExceptionList = &local_10;
      FUN_00401470();
      FUN_0098fc50();
      FUN_009885d0();
      local_8 = 0;
      uVar1 = FUN_004ebcb0();
      uVar1 = FUN_004ec280(uVar1);
      *(undefined4 *)(in_ECX + 0x10) = uVar1;
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
    else if (param_2 == 0x1a) {
      ExceptionList = &local_10;
      FUN_00401470();
      FUN_0098fc50();
      FUN_004012f0(in_ECX + 0x18);
    }
    else if (param_2 == 0x2e) {
      ExceptionList = &local_10;
      FUN_00401470();
      uVar1 = FUN_0098fb50();
      *(undefined4 *)(in_ECX + 0x14) = uVar1;
    }
  }
  else if (param_2 == 0x296) {
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x90);
  }
  else if (param_2 == 0x307) {
    ExceptionList = &local_10;
    FUN_00401470();
    FUN_0098fc50();
    FUN_004012f0(in_ECX + 0x34);
  }
  ExceptionList = local_10;
  return;
}

