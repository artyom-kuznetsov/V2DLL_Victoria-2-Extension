// FUN_007a9070 @ 007a9070 body=[[007a9070, 007a9142] [007a9146, 007a9165] [007a9169, 007a91b1]]


bool FUN_007a9070(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int *in_ECX;
  int *in_EDX;
  undefined4 local_4c [5];
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  iVar1 = *in_EDX;
  if (iVar1 == 0) {
    return *(int *)(*(int *)(param_1[0x10c] + 0x310) + 0x40) <
           *(int *)(*(int *)(in_ECX[0x10c] + 0x310) + 0x40);
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return true;
    }
    ExceptionList = &local_10;
    (**(code **)(in_ECX[0x100] + 0x18))(&local_14,in_EDX + 1);
    (**(code **)(piVar2[0x100] + 0x18))(&param_1,in_EDX + 1);
    ExceptionList = local_10;
    return (int)param_1 < local_14;
  }
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x18))(local_4c);
  local_8 = 0;
  (**(code **)(*piVar2 + 0x18))(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar3 = FUN_0098ab20();
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return (bool)uVar3;
}

