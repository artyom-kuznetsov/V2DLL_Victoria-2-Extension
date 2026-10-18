// FUN_00b1e4e0 @ 00b1e4e0 body=[[00b1e4e0, 00b1e648]]


undefined4 FUN_00b1e4e0(int *param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined4 unaff_EDI;
  int *piVar5;
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  iVar3 = *(int *)(in_ECX + 8);
  piVar5 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = *(int **)(in_ECX + 4);
    do {
      if (((int *)*piVar4)[1] == (uint)*(byte *)(param_2 + 0x14)) {
        piVar5 = (int *)*piVar4;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  pbVar1 = (byte *)(param_2 + 0x15);
  local_10 = (uint)*pbVar1;
  local_14 = (uint)*(byte *)(param_2 + 0x14);
  local_c = 1;
  if (piVar5 != (int *)0x0) {
    local_c = piVar5[2];
  }
  param_2 = *(undefined4 *)(param_2 + 0x10);
  if ((*pbVar1 & 8) != 0) {
    param_2 = 4;
  }
  if (piVar5 != (int *)0x0) {
    param_2 = (**(code **)(*piVar5 + 0xc))(iVar2);
  }
  iVar3 = (int)param_3;
  local_4 = param_2;
  if (param_3 != (undefined4 *)0x0) {
    FUN_00b1ad70(&local_10,1);
    FUN_00b1ad70(&param_2,1);
    FUN_00b1ad70(&local_14,1);
    FUN_00b1ad70(&local_c,1);
    if (piVar5 == (int *)0x0) {
      FUN_00b19bb0(iVar3);
    }
  }
  if ((*(byte *)(iVar2 + 0x15) & 8) == 0) {
    param_3 = *(undefined4 **)(iVar2 + 4);
  }
  else {
    uStack_8 = *(undefined4 *)(iVar2 + 4);
    param_3 = &uStack_8;
  }
  (**(code **)(*param_1 + 0xc))(&local_14,4);
  (**(code **)(*param_1 + 0xc))(&stack0x00000000,4);
  (**(code **)(*param_1 + 0xc))(&stack0xffffffe0,4);
  (**(code **)(*param_1 + 0xc))(&stack0xffffffdc,4);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(param_1,iVar2,iVar3);
    return 1;
  }
  (**(code **)(*param_1 + 0xc))(local_14,unaff_EDI);
  if (iVar3 != 0) {
    FUN_00b19bb0(iVar3);
  }
  return 1;
}

