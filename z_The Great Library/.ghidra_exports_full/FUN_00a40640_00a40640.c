// FUN_00a40640 @ 00a40640 body=[[00a40640, 00a40700] [00a40707, 00a4072e]]


void FUN_00a40640(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d9f0;
  local_10 = ExceptionList;
  if (0x5d1745d < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x2c) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00a40840();
    local_8 = 0;
    FUN_00a40ec0(in_ECX[1],iVar2,param_1);
    local_8 = 0xffffffff;
    puVar1 = (undefined4 *)in_ECX[1];
    puVar3 = (undefined4 *)*in_ECX;
    if (puVar3 != (undefined4 *)0x0) {
      for (; puVar3 != puVar1; puVar3 = puVar3 + 0xb) {
        (**(code **)*puVar3)(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x2c + iVar2;
    in_ECX[1] = (((int)puVar1 - (int)puVar3) / 0x2c) * 0x2c + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

