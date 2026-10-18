// FUN_00534930 @ 00534930 body=[[00534930, 00534a41]]


void FUN_00534930(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_290 [636];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fccd;
  local_14 = ExceptionList;
  piVar4 = (int *)(param_1 + 0x44);
  iVar3 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) / 0x278;
  iVar2 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)(*piVar4 + 0x70);
    do {
      if (((piVar1[-2] == *(int *)(param_2 + 0x68)) && (*piVar1 == *(int *)(param_2 + 0x70))) &&
         (piVar1[-1] == *(int *)(param_2 + 0x6c))) {
        iVar3 = iVar2 * 0x278 + *piVar4;
        ExceptionList = &local_14;
        goto LAB_00534a0d;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x9e;
    } while (iVar2 < iVar3);
  }
  ExceptionList = &local_14;
  FUN_00954f40(local_290);
  local_c = 0;
  FUN_004beb50();
  local_c = 0xffffffff;
  FUN_00955ae0(local_290);
  iVar3 = ((*(int *)(param_1 + 0x48) - *piVar4) / 0x278) * 0x278 + -0x278 + *piVar4;
LAB_00534a0d:
  FUN_005345a0(param_1,iVar3,param_3,1);
  ExceptionList = local_14;
  return;
}

