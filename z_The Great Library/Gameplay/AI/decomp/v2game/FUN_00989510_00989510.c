// FUN_00989510 @ 00989510 body=[[00989510, 009895be] [009895c2, 009895e0]]


undefined4 * FUN_00989510(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_34;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4a419;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_005484e0(unaff_ESI,&param_2,1);
    if (iVar1 == -1) {
      FUN_009895f0(*(undefined4 *)(unaff_ESI + 0x10));
      local_8 = 2;
      FUN_00a840b0();
    }
    else {
      FUN_009895f0(iVar1);
      local_8 = 1;
      FUN_00a840b0();
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_20) break;
    if (iVar1 == -1) {
      ExceptionList = local_10;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34);
}

