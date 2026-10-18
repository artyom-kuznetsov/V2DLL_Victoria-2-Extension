// FUN_00ae96e0 @ 00ae96e0 body=[[00ae96e0, 00ae9852]]


void FUN_00ae96e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b380c0;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 10) = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  local_4 = 2;
  in_ECX[0x23] = 0xff7fffff;
  in_ECX[0x24] = 0xff7fffff;
  in_ECX[0x25] = 0xff7fffff;
  in_ECX[0x13] = 0x3f800000;
  in_ECX[0x18] = 0x3f800000;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[0x22] = 0x3f800000;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[6] = param_2;
  *(undefined2 *)(in_ECX + 0xe) = 400;
  *(undefined2 *)(in_ECX + 0x12) = 400;
  in_ECX[1] = 0xffffffff;
  *in_ECX = 0xffffffff;
  in_ECX[3] = 0xffffffff;
  in_ECX[2] = 0xffffffff;
  uVar2 = FUN_00b157e0(param_1);
  in_ECX[4] = uVar2;
  in_ECX[5] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x29) = 1;
  *(undefined2 *)(in_ECX + 10) = 400;
  if ((uint)in_ECX[9] < 4) {
    if (in_ECX[7] == 0) {
      uVar2 = (*(code *)PTR_FUN_00f01b08)(0x80,400,4,2,0,0xffffffff,uVar1);
    }
    else {
      uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[7]);
    }
    in_ECX[7] = uVar2;
    in_ECX[9] = 4;
  }
  FUN_00ae9590();
  ExceptionList = local_c;
  return;
}

