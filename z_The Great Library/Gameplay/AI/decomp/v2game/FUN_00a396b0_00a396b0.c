// FUN_00a396b0 @ 00a396b0 body=[[00a396b0, 00a39756] [00a3975a, 00a39789]]


int * FUN_00a396b0(void)

{
  int *piVar1;
  int *in_ECX;
  uint *in_EDX;
  int local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b48a38;
  local_10 = ExceptionList;
  for (piVar1 = (int *)*in_EDX; ((int *)*in_EDX <= piVar1 && (piVar1 < (int *)in_EDX[1]));
      piVar1 = piVar1 + 5) {
    if (*piVar1 == *in_ECX) {
      return piVar1 + 1;
    }
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = local_34;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  FUN_00a39e60(&local_24);
  _local_8 = CONCAT31(uStack_7,2);
  FUN_00a3a530();
  if (local_34[0] != 0) {
    FUN_00a3ab10(local_14);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return (int *)((*in_EDX - 0x10) + ((int)(in_EDX[1] - *in_EDX) / 0x14) * 0x14);
}

