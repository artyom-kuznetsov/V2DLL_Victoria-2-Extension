// FUN_00737fd0 @ 00737fd0 body=[[00737fd0, 007380ec] [007380f3, 0073811c] [00738132, 00738224]]


void FUN_00737fd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a370;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  iVar2 = (iVar1 - *in_ECX) / 0x18;
  if (iVar2 == 0xaaaaaaa) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < iVar2 + 1U) {
    ExceptionList = &local_10;
    iVar2 = FUN_00738230();
    iVar3 = FUN_0060d9a0();
    local_8 = 0;
    FUN_00738770(iVar3 + ((param_1 - *in_ECX) / 0x18) * 0x18,param_1);
    FUN_0073acb0(*in_ECX,param_1);
    FUN_0073acb0(param_1,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar3 + iVar2 * 0x18;
    in_ECX[1] = iVar3 + ((in_ECX[1] - iVar1) / 0x18 + 1) * 0x18;
    *in_ECX = iVar3;
    ExceptionList = local_10;
    return;
  }
  iVar2 = iVar1 - param_1 >> 0x1f;
  if ((iVar1 - param_1) / 0x18 + iVar2 == iVar2) {
    ExceptionList = &local_10;
    FUN_0073acb0(param_1,param_1);
    local_8 = 2;
    FUN_00738770(in_ECX[1],param_1);
    in_ECX[1] = in_ECX[1] + 0x18;
    FUN_00738270(param_1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_0073acb0(iVar1 + -0x18,param_1);
  in_ECX[1] = iVar2;
  FUN_007382b0(iVar1);
  FUN_00738270(param_1);
  ExceptionList = local_10;
  return;
}

