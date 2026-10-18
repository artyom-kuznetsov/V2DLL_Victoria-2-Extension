// FUN_00405fb0 @ 00405fb0 body=[[00405fb0, 004060cb] [004060cf, 004061f6] [004061fa, 0040620b]]


void FUN_00405fb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_2c [4];
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5c660;
  local_10 = ExceptionList;
  iVar2 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_EDI + 0x10) >> 2;
  iVar4 = 0;
  if (0 < iVar2) {
    piVar3 = *(int **)(unaff_EDI + 0x10);
    while (*piVar3 != param_1) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      if (iVar2 <= iVar4) {
        return;
      }
    }
    piVar3 = *(int **)(*(int *)(unaff_EDI + 0x30) + iVar4 * 4);
    local_14 = iVar4;
    if (*(int *)(param_2 + 0x10) == 0) {
      if (piVar3 != (int *)0x0) {
        ExceptionList = &local_10;
        (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x14))(piVar3);
        (**(code **)(*piVar3 + 0x24))(1);
        *(undefined4 *)(*(int *)(unaff_EDI + 0x30) + iVar4 * 4) = 0;
        *(undefined1 *)(unaff_EDI + 0x21c) = 1;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      ExceptionList = &local_10;
      if (piVar3 == (int *)0x0) {
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        ExceptionList = &local_10;
        FUN_00409350("mi_text",7);
        local_8 = 0;
        (**(code **)(**(int **)(unaff_EDI + 0x1d0) + 0x40))();
        piVar3 = (int *)FUN_005c2ad0(local_48);
        piVar3 = (int *)(**(code **)(*piVar3 + 0x48))();
        (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x10))(piVar3);
        local_8 = 0xffffffff;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        (**(code **)(*piVar3 + 0xa4))(param_1 + 0x54);
        (**(code **)(*piVar3 + 0x34))();
        *(undefined1 *)(piVar3 + 0x71) = *(undefined1 *)(param_1 + 0x164);
        (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x20))(piVar3);
        *(int **)(*(int *)(unaff_EDI + 0x30) + local_14 * 4) = piVar3;
      }
      iVar2 = *(int *)(param_1 + 0x15c);
      local_2c[0] = 0;
      local_2c[1] = 0;
      local_2c[2] = 0;
      local_1c = (undefined4 *)(param_1 + 0x148);
      local_8 = 1;
      FUN_0043a750(local_1c);
      cVar1 = FUN_00406210(local_2c);
      if (cVar1 == '\0') {
        if (iVar2 < 0) {
          local_14 = 5;
        }
        else {
          local_14 = iVar2 + 5;
        }
      }
      else {
        local_14 = 5;
      }
      local_18 = *(undefined4 *)(*(int *)(param_1 + 0x13c) + 0xc4);
      iVar2 = *(int *)(param_1 + 0x13c) + 0xa8;
      iVar4 = FUN_00973bd0(iVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_00973bd0(iVar2);
      }
      FUN_00986c90(*local_1c,param_2,iVar4,local_18,local_2c,local_14);
      *(undefined1 *)(unaff_EDI + 0x21c) = 1;
      if (local_2c[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

