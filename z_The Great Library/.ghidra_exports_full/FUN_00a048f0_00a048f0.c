// FUN_00a048f0 @ 00a048f0 body=[[00a048f0, 00a049b2]]


void FUN_00a048f0(uint param_1,undefined **param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56288;
  local_10 = ExceptionList;
  if (param_2 == (undefined **)0xd9) {
    ExceptionList = &local_10;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_1 + 3);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    else {
      param_1 = (uint)(byte)(param_1._3_1_ - 0x30) << 0x18;
    }
    *(uint *)(in_ECX + 0x4c) = param_1 >> 0x18;
    ExceptionList = local_10;
    return;
  }
  if (param_2 != (undefined **)0xee) {
    ExceptionList = &local_10;
    FUN_009a2620(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  param_2 = &PTR_FUN_00e3edf0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00a12570(param_1,in_ECX + 0x3c,&param_2);
  *(undefined1 *)(in_ECX + 0x50) = 1;
  ExceptionList = local_10;
  return;
}

