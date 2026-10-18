// FUN_007d3280 @ 007d3280 body=[[007d3280, 007d3336] [007d333a, 007d3349]]


void FUN_007d3280(void)

{
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009bd030(*(int *)(in_ECX + 4) + 0x158,*(undefined4 *)(in_ECX + 0x30));
  FUN_009bd030(*(int *)(in_ECX + 4) + 0x158,*(undefined4 *)(in_ECX + 0x34));
  FUN_009bd030(*(int *)(in_ECX + 4) + 0x158,*(undefined4 *)(in_ECX + 0x38));
  FUN_009bd030(*(int *)(in_ECX + 4) + 0x158,*(undefined4 *)(in_ECX + 0x3c));
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BeachShader",0xb);
  local_8 = 0;
  FUN_009bec30(local_2c,*(undefined4 *)(*(int *)(in_ECX + 4) + 100));
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

