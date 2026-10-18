// FUN_004a3be0 @ 004a3be0 body=[[004a3be0, 004a3c7d] [004a3c84, 004a3cab]]


void FUN_004a3be0(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b080;
  local_10 = ExceptionList;
  if (0xfffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 4) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_0060da00();
    local_8 = 0;
    FUN_004a4110(*in_ECX,param_1);
    local_8 = 0xffffffff;
    puVar1 = (undefined4 *)in_ECX[1];
    puVar3 = (undefined4 *)*in_ECX;
    if (puVar3 != (undefined4 *)0x0) {
      for (; puVar3 != puVar1; puVar3 = puVar3 + 4) {
        (**(code **)*puVar3)(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x10 + iVar2;
    in_ECX[1] = ((int)puVar1 - (int)puVar3 & 0xfffffff0U) + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

