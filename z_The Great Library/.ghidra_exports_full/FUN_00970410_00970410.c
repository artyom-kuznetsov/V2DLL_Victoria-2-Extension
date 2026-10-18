// FUN_00970410 @ 00970410 body=[[00970410, 009704aa] [009704ce, 009704e0]]


undefined4 * FUN_00970410(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4a74c;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x30) {
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = *(undefined4 *)(in_ECX + 4);
      *param_2 = CAdditiveMTTH::vftable;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      local_8 = 2;
      FUN_0096fa80();
      param_2[6] = *(undefined4 *)(in_ECX + 0x18);
      param_2[7] = *(undefined4 *)(in_ECX + 0x1c);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      local_8 = 4;
      FUN_009beeb0(in_ECX + 0x20);
    }
    param_2 = param_2 + 0xc;
  }
  ExceptionList = local_10;
  return param_2;
}

