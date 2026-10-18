// FUN_005c29c0 @ 005c29c0 body=[[005c29c0, 005c2a89] [005c2a90, 005c2ab9]]


void FUN_005c29c0(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f9c0;
  local_10 = ExceptionList;
  if (0xaaaaaaa < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_0060d9a0();
    local_8 = 0;
    FUN_0057b2f0(*in_ECX,param_1);
    local_8 = 0xffffffff;
    puVar1 = (undefined4 *)in_ECX[1];
    puVar3 = (undefined4 *)*in_ECX;
    if (puVar3 != (undefined4 *)0x0) {
      for (; puVar3 != puVar1; puVar3 = puVar3 + 6) {
        (**(code **)*puVar3)(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar2 + param_1 * 0x18;
    in_ECX[1] = iVar2 + (((int)puVar1 - (int)puVar3) / 0x18) * 0x18;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

