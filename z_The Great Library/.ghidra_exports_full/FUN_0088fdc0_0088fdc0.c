// FUN_0088fdc0 @ 0088fdc0 body=[[0088fdc0, 0088feb5]]


void FUN_0088fdc0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_ECX;
  int local_10;
  int local_c;
  
  FUN_008852b0(in_ECX);
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0xbe8) + local_c * 4);
  iVar3 = *(int *)(iVar1 + 0x28);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != *(int *)(iVar1 + 0xc))) {
    return;
  }
  iVar1 = *(int *)(DAT_012588e8 + 0xb0c);
  iVar3 = FUN_00aae9af(0x28);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_0092c990();
  }
  iVar3 = *(int *)(param_1 + 0xc);
  piVar4[2] = *(int *)(param_1 + 8);
  piVar4[4] = local_10;
  piVar4[3] = iVar3;
  piVar4[6] = iVar1;
  pcVar2 = *(code **)(*piVar4 + 0x28);
  piVar4[5] = local_c;
  (*pcVar2)();
  FUN_004a7bc0(piVar4);
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_c * 4));
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  return;
}

