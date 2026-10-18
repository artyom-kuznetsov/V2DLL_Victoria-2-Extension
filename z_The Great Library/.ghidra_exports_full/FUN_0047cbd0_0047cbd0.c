// FUN_0047cbd0 @ 0047cbd0 body=[[0047cbd0, 0047cc92] [0047cc96, 0047ccb8] [0047ccbc, 0047ccc9]]


void FUN_0047cbd0(void)

{
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 local_5c;
  undefined4 local_58 [5];
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40468;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0047c040(&local_5c);
  local_8 = 0;
  *in_EDX = *in_ECX;
  FUN_00408ed0(in_ECX + 1,0,0xffffffff);
  FUN_00408ed0(in_ECX + 8,0,0xffffffff);
  in_EDX[0xf] = in_ECX[0xf];
  in_EDX[0x10] = in_ECX[0x10];
  *(undefined1 *)(in_EDX + 0x11) = *(undefined1 *)(in_ECX + 0x11);
  in_EDX[0x12] = in_ECX[0x12];
  *in_ECX = local_5c;
  FUN_00408ed0(local_58,0,0xffffffff);
  FUN_00408ed0(local_3c,0,0xffffffff);
  in_ECX[0xf] = local_20;
  in_ECX[0x10] = local_1c;
  *(undefined1 *)(in_ECX + 0x11) = local_18;
  in_ECX[0x12] = local_14;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  ExceptionList = local_10;
  return;
}

