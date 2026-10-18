// FUN_00a6a2c0 @ 00a6a2c0 body=[[00a6a2c0, 00a6a35c] [00a6a360, 00a6a377] [00a6a37b, 00a6a3aa]]


/* WARNING: Removing unreachable block (ram,0x00a6a354) */

int * FUN_00a6a2c0(void)

{
  int *piVar1;
  int *in_ECX;
  uint *in_EDX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40d70;
  local_10 = ExceptionList;
  for (piVar1 = (int *)*in_EDX; ((int *)*in_EDX <= piVar1 && (piVar1 < (int *)in_EDX[1]));
      piVar1 = piVar1 + 9) {
    if (*piVar1 == *in_ECX) {
      return piVar1 + 1;
    }
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(local_30,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00a6ae80();
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return (int *)((*in_EDX - 0x20) + ((int)(in_EDX[1] - *in_EDX) / 0x24) * 0x24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

