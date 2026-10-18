// FUN_0043f800 @ 0043f800 body=[[0043f800, 0043f89a] [0043f8a0, 0043f98f] [0043f993, 0043fa2e] [0043fa32, 0043fa46]]


undefined1 * FUN_0043f800(undefined1 *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  undefined1 local_9c [92];
  undefined1 local_40 [4];
  undefined4 local_3c [5];
  uint local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &LAB_00b82d8c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_1c = 1;
  if (param_2 == *(int *)(in_ECX + 0x24)) {
    bVar2 = false;
    local_18 = *(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 2;
    local_11 = '\0';
    if (local_18 < 1) {
      ExceptionList = pvVar3;
      return param_1;
    }
    iVar7 = 0;
    local_20 = in_ECX;
    if (local_18 < 1) {
      ExceptionList = pvVar3;
      return param_1;
    }
    do {
      if (0x3f < iVar7) break;
      piVar1 = *(int **)(*(int *)(local_20 + 0x94) + iVar7 * 4);
      if ((char)piVar1[0x59] != '\0') {
        bVar2 = true;
      }
      cVar4 = FUN_005cc390();
      if (cVar4 != '\0') {
        local_11 = '\x01';
      }
      (**(code **)(*piVar1 + 0x28))(local_40);
      iVar5 = (**(code **)(*piVar1 + 0xc))(local_9c,piVar1[0x37]);
      local_8 = 1;
      FUN_00408ed0(iVar5,0,0xffffffff);
      FUN_00408ed0(iVar5 + 0x1c,0,0xffffffff);
      FUN_00408ed0(iVar5 + 0x38,0,0xffffffff);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
      param_1[0x58] = *(undefined1 *)(iVar5 + 0x58);
      local_8 = local_8 & 0xffffff00;
      FUN_00459820();
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_18);
    if (bVar2) {
      uVar6 = FUN_00475d50(local_3c);
      local_8 = 2;
      FUN_00408ed0(uVar6,0,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
    }
    if (local_11 == '\0') {
      ExceptionList = local_10;
      return param_1;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00448740("\n--------------\n",0x10);
    }
    uVar6 = FUN_00475d50(local_3c);
    local_8 = 3;
    FUN_00448aa0(uVar6,0,0xffffffff);
  }
  else {
    if (param_2 != *(int *)(in_ECX + 0x90)) {
      ExceptionList = pvVar3;
      return param_1;
    }
    (**(code **)(**(int **)(in_ECX + 0x90) + 0x80))();
    uVar6 = FUN_004f97a0();
    local_8 = 4;
    FUN_00408ed0(uVar6,0,0xffffffff);
  }
  if (local_28 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_3c[0]);
}

