// FUN_007df7a0 @ 007df7a0 body=[[007df7a0, 007df7d9] [007df7e0, 007df833]]


void FUN_007df7a0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43098;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CEU3BitmapFont::vftable;
  param_1[10] = CEU3BitmapFont::vftable;
  iVar1 = 0;
  local_8 = 0;
  if (param_1[0x9ad] != 0) {
    do {
      if (*(int *)(iVar1 + param_1[0x9ad]) != -1) {
        FUN_009bcda0();
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 < 0x60);
    FUN_00aaea59(param_1[0x9ad]);
  }
  local_8 = 0xffffffff;
  FUN_00a20fb0();
  ExceptionList = local_10;
  return;
}

