// FUN_005f7fa0 @ 005f7fa0 body=[[005f7fa0, 005f804a] [005f804e, 005f80a2]]


void FUN_005f7fa0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b459b9;
  local_10 = ExceptionList;
  bVar1 = false;
  local_18 = 0;
  local_14 = 0;
  piVar5 = (int *)(in_ECX + 0x2c);
  ExceptionList = &local_10;
  local_1c = in_ECX;
  do {
    iVar3 = (**(code **)(*param_1 + 0x4c))();
    if (iVar3 + -1 == local_14) {
LAB_005f8029:
      bVar2 = true;
    }
    else {
      if (*piVar5 != 0) {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350("alerticon_banner",0x10);
        local_8 = 0;
        bVar1 = true;
        local_18 = 1;
        piVar4 = (int *)(**(code **)(*(int *)*piVar5 + 0x44))(local_38);
        if (piVar4 == param_1) goto LAB_005f8029;
      }
      bVar2 = false;
    }
    local_8 = 0xffffffff;
    if (bVar1) {
      bVar1 = false;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
    }
    if (bVar2) {
      (**(code **)(**(int **)(local_1c + 0x1c) + 0x11c))(piVar5 + 0x18);
    }
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 0x22;
    if (8 < local_14) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

