// FUN_00a37070 @ 00a37070 body=[[00a37070, 00a37109] [00a3712d, 00a3713f]]


undefined4 * FUN_00a37070(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b48ba4;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x38) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = *(undefined4 *)(in_ECX + 4);
      *param_2 = &PTR_FUN_00e40510;
      param_2[2] = *(undefined4 *)(in_ECX + 8);
      param_2[8] = 0xf;
      param_2[7] = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_00408ed0(in_ECX + 0xc,0,0xffffffff);
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      local_8 = 3;
      FUN_009beeb0(in_ECX + 0x28);
    }
    param_2 = param_2 + 0xe;
  }
  ExceptionList = local_10;
  return param_2;
}

