// FUN_0064f350 @ 0064f350 body=[[0064f350, 0064f3dc] [0064f3e0, 0064f403] [0064f407, 0064f568]]


void FUN_0064f350(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  float10 fVar6;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  float local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c950;
  local_10 = ExceptionList;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messagelog",10);
  local_8 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("messagelog_window",0x11);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_38);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(local_54);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_8 = 0xffffffff;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_11 = *(char *)((int)piVar2 + 0x53);
  if (piVar2[0x41] == 0) {
    local_1c = DAT_00f092dc;
  }
  else {
    fVar6 = (float10)(**(code **)(*(int *)(piVar2[0x41] + 0x54) + 0x10))();
    local_1c = (float)fVar6;
  }
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x5c))();
  local_18 = 0;
  for (piVar1 = *(int **)(in_ECX + 0x1dec); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*(int *)(*param_1 + *(int *)(*(int *)(*piVar1 + 0x20) + 8) * 4) == 1) {
      FUN_0064cf70(piVar2,*piVar1,*(undefined4 *)(in_ECX + 0x54),in_ECX + 0x17ec,in_ECX + 0x90,
                   in_ECX + 0x1dfc);
      local_18 = local_18 + 1;
      if (*(int *)(in_ECX + 0xbac) < local_18) break;
    }
  }
  iVar3 = (**(code **)(*piVar2 + 0x2c))();
  iVar5 = piVar2[0x54];
  if (iVar5 < *(int *)(iVar3 + 8)) {
    iVar3 = (**(code **)(*piVar2 + 0x2c))();
    iVar5 = (int)local_1c + iVar5;
    if (iVar5 < *(int *)(iVar3 + 8) + -1) {
      iVar3 = piVar2[0x41];
      if ((iVar3 != 0) && (DAT_00f092dc < local_1c)) {
        FUN_00401000((local_1c + 0.0005) * 1000.0,iVar5,1,1);
        uVar4 = FUN_00b31c00();
        (**(code **)(*(int *)(iVar3 + 0x54) + 0x1c))(uVar4);
      }
      goto LAB_0064f547;
    }
  }
  (**(code **)(*piVar2 + 0x78))();
LAB_0064f547:
  if (local_11 != '\0') {
    (**(code **)(*piVar2 + 0x50))();
  }
  ExceptionList = local_10;
  return;
}

