// FUN_00a82c20 @ 00a82c20 body=[[00a82c20, 00a82cec] [00a82cf0, 00a82df7]]


void FUN_00a82c20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  int local_a8 [4];
  undefined4 local_98 [32];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b53edb;
  local_14 = ExceptionList;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_c = 0;
  switch(param_2) {
  case 0x120:
    ExceptionList = &local_14;
    (**(code **)(*in_ECX + 0xc))(param_1);
    ExceptionList = pvStack_18;
    return;
  default:
    ExceptionList = &local_14;
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  case 0x124:
    ExceptionList = &local_14;
    FUN_009a1c10();
    ExceptionList = local_14;
    return;
  case 0x125:
    ExceptionList = &local_14;
    FUN_00a84990(param_1,in_ECX + 9);
    ExceptionList = local_14;
    return;
  case 0x126:
    ExceptionList = &local_14;
    FUN_009a1c10();
    ExceptionList = local_14;
    return;
  case 0x127:
    ExceptionList = &local_14;
    FUN_009a1c10();
    ExceptionList = local_14;
    return;
  case 0x128:
    ExceptionList = &local_14;
    FUN_00a3c440(param_1,in_ECX + 0xf);
    ExceptionList = local_14;
    return;
  case 0x153:
    ExceptionList = &local_14;
    FUN_009a1750(in_ECX + 2,0);
    ExceptionList = local_14;
    return;
  case 0x154:
    ExceptionList = &local_14;
    FUN_00a3c440(param_1,local_a8);
    puVar1 = (undefined4 *)FUN_00a84040();
    puVar2 = local_98;
  }
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)FUN_00a84180(in_ECX + 0x14);
  puVar1 = local_98;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (local_a8[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  ExceptionList = local_14;
  return;
}

