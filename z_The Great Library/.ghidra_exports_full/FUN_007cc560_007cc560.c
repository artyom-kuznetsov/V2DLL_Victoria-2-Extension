// FUN_007cc560 @ 007cc560 body=[[007cc560, 007cc603] [007cc625, 007cc637]]


undefined4 * FUN_007cc560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3ee81;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x11) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *in_ECX;
      param_2[1] = in_ECX[1];
      param_2[2] = in_ECX[2];
      param_2[8] = 0xf;
      param_2[7] = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_00408ed0(in_ECX + 3,0,0xffffffff);
      param_2[0xb] = in_ECX[0xb];
      param_2[10] = CColor::vftable;
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(in_ECX + 0xc);
      *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(in_ECX + 0xe);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(in_ECX + 0x10);
    }
    param_2 = param_2 + 0x11;
  }
  ExceptionList = local_10;
  return param_2;
}

