// FUN_0099fd80 @ 0099fd80 body=[[0099fd80, 0099fe25] [0099fe29, 0099fe65]]


void FUN_0099fd80(undefined4 param_1)

{
  undefined4 ***pppuVar1;
  int unaff_ESI;
  char local_12c [256];
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(unaff_ESI + 0xc) == '\0') &&
     (ExceptionList = &local_10, *(int *)(unaff_ESI + 4) != 0)) {
    ExceptionList = &local_10;
    FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0;
  pppuVar1 = (undefined4 ***)local_2c[0];
  if (local_18 < 0x10) {
    pppuVar1 = local_2c;
  }
  __snprintf(local_12c,0xff,"%s",pppuVar1);
  FUN_0099ff90(unaff_ESI);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
  FUN_004013e0(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  ExceptionList = local_10;
  return;
}

