// FUN_00b07340 @ 00b07340 body=[[00b07340, 00b07406]]


void FUN_00b07340(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b38e86;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfd48;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_4 = 0;
  FUN_00b104b0(uVar1);
  in_ECX[9] = 0;
  in_ECX[4] = 0;
  in_ECX[0xe] = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_00b164b0();
  in_ECX[0xf] = uVar2;
  if (param_1 != 0) {
    uVar2 = FUN_00b157e0(param_1);
    in_ECX[0xe] = uVar2;
  }
  *(undefined2 *)(in_ECX + 0x10) = 0x100;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0x41f00000;
  in_ECX[0xc] = 0x7f7fffff;
  in_ECX[0xd] = 0x7f7fffff;
  FUN_00ae3b00(in_ECX);
  ExceptionList = local_c;
  return;
}

