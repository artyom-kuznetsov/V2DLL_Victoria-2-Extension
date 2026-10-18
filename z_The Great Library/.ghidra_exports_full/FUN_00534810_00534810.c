// FUN_00534810 @ 00534810 body=[[00534810, 0053492a]]


void FUN_00534810(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
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
  piVar4 = (int *)(param_1 + 0x34);
  iVar1 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x278;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = *piVar4;
    do {
      if (*(int *)(iVar2 + 0x58) == 0) {
        ExceptionList = &local_14;
        *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(param_2 + 0x68);
        if (*(int *)(iVar2 + 0x1d4) != 0) {
          FUN_00955d40();
          *(undefined4 *)(iVar2 + 0x1d4) = 0;
        }
        goto LAB_005348de;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar3 < iVar1);
  }
  ExceptionList = &local_14;
  FUN_00954f40(local_290);
  local_c = 0;
  FUN_004beb50();
  local_c = 0xffffffff;
  FUN_00955ae0(local_290);
  iVar2 = ((*(int *)(param_1 + 0x38) - *piVar4) / 0x278) * 0x278 + -0x278 + *piVar4;
LAB_005348de:
  FUN_005345a0(param_1,iVar2,param_3,0);
  ExceptionList = local_14;
  return;
}

