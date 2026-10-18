// FUN_007bde20 @ 007bde20 body=[[007bde20, 007bde88] [007bde8c, 007bdfe7]]


void FUN_007bde20(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fe98;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("state_focus",0xb);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  if (param_2 == 0) {
    pcVar7 = *(code **)(*piVar3 + 0x104);
    goto LAB_007bdfd3;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(DAT_012588e8 + 0xb60) * 0x10
                             ) + *(int *)(*(int *)(param_2 + 0x250) + 0x6c) * 4);
  if (piVar1 == (int *)0x0) {
LAB_007bdedf:
    local_11 = '\0';
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 0x34))();
    local_11 = '\x01';
    if (cVar2 == '\0') goto LAB_007bdedf;
  }
  (**(code **)(*piVar3 + 0x108))();
  if (*(char *)((int)piVar3 + 0x4f) == '\0') {
    (**(code **)(*piVar3 + 0x34))();
  }
  piVar4 = (int *)(**(code **)(*piVar3 + 0xec))();
  (**(code **)(*piVar4 + 0x60))(0);
  if (local_11 == '\0') {
    iVar5 = 1;
  }
  else {
    iVar5 = piVar1[0x3c];
  }
  (**(code **)(*piVar3 + 0x48))(iVar5);
  for (piVar1 = (int *)piVar3[0x16]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == param_1 + 0x108) goto LAB_007bdf57;
  }
  (**(code **)(piVar3[0x15] + 4))(param_1 + 0x108);
LAB_007bdf57:
  if ((*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) & 0xfffffffcU) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(undefined4 **)(param_2 + 0x48);
  }
  (**(code **)(*piVar3 + 0xd4))(uVar6);
  if (local_11 == '\0') {
    local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x1488)
        < 1) {
      pcVar7 = *(code **)(*piVar3 + 0xbc);
    }
    else {
      pcVar7 = *(code **)(*piVar3 + 0xb8);
    }
  }
  else {
    pcVar7 = *(code **)(*piVar3 + 0xb8);
  }
LAB_007bdfd3:
  (*pcVar7)();
  ExceptionList = local_10;
  return;
}

