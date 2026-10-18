// FUN_005c52d0 @ 005c52d0 body=[[005c52d0, 005c539c] [005c53a0, 005c53d8]]


void FUN_005c52d0(uint param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f9b0;
  local_10 = ExceptionList;
  if (0x9249249 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x1c) < param_1) {
    if (param_1 == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      local_18 = FUN_009b6bb0();
    }
    local_8 = 0;
    FUN_005c5bd0(in_ECX[1],local_18,param_1);
    local_8 = 0xffffffff;
    puVar1 = (undefined4 *)in_ECX[1];
    puVar2 = (undefined4 *)*in_ECX;
    if (puVar2 != (undefined4 *)0x0) {
      for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
        (**(code **)*puVar2)(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = local_18 + param_1 * 0x1c;
    in_ECX[1] = local_18 + (((int)puVar1 - (int)puVar2) / 0x1c) * 0x1c;
    *in_ECX = local_18;
  }
  ExceptionList = local_10;
  return;
}

