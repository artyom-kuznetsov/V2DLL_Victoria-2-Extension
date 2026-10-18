// FUN_00a6a6a0 @ 00a6a6a0 body=[[00a6a6a0, 00a6a748] [00a6a74c, 00a6a768] [00a6a76c, 00a6a78b]]


int * FUN_00a6a6a0(void)

{
  int *piVar1;
  int *in_ECX;
  uint *in_EDX;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b3d8e0;
  local_14 = ExceptionList;
  for (piVar1 = (int *)*in_EDX; ((int *)*in_EDX <= piVar1 && (piVar1 < (int *)in_EDX[1]));
      piVar1 = piVar1 + 8) {
    if (*piVar1 == *in_ECX) {
      return piVar1 + 1;
    }
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_c = 0;
  local_38 = *in_ECX;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00408ed0(local_54,0,0xffffffff);
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00a36520();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  ExceptionList = local_14;
  return (int *)(((in_EDX[1] - *in_EDX & 0xffffffe0) - 0x1c) + *in_EDX);
}

