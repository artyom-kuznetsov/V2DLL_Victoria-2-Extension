// FUN_004a9980 @ 004a9980 body=[[004a9980, 004aa136] [004aa13a, 004aa1fe] [004aa202, 004aa3b1]]


/* WARNING: Removing unreachable block (ram,0x004aa1f5) */
/* WARNING: Removing unreachable block (ram,0x004aa12d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9980(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  char *pcVar9;
  int iStack_33c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba20bc;
  local_14 = ExceptionList;
  if (param_2 < 0x40e) {
    if (param_2 == 0x40d) {
      if (in_ECX == -0x328) {
        ExceptionList = &local_14;
        (**(code **)(_DAT_00000000 + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x34c) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 < 0x297) {
      if (param_2 == 0x296) {
        ExceptionList = &local_14;
        FUN_0055c6c0();
        FUN_004b5730();
        ExceptionList = local_14;
        return;
      }
      if (param_2 < 0x1ed) {
        if (param_2 == 0x1ec) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x1a) {
          ExceptionList = &local_14;
          FUN_009885d0();
          local_c = 0;
          FUN_004c4540();
          local_c._0_1_ = 1;
          cVar2 = FUN_00416db0();
          local_c._0_1_ = 0;
          FUN_00408ad0();
          FUN_00408ed0();
          if (cVar2 == '\0') {
            piVar5 = *(int **)(DAT_012588e8 + 0xb24);
            FUN_00401320();
            local_c._0_1_ = 2;
            iVar6 = (**(code **)(*piVar5 + 0x38))();
            local_c._0_1_ = 0;
            FUN_00802800(iVar6 + 0x20bc,*(undefined4 *)(in_ECX + 0x58));
          }
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x1d4) {
          return;
        }
      }
      else {
        if (param_2 == 0x28a) {
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))();
          ExceptionList = pvStack_18;
          return;
        }
        if (param_2 == 0x295) {
          ExceptionList = &local_14;
          FUN_0055c6c0();
          FUN_004b52e0();
          ExceptionList = local_14;
          return;
        }
      }
    }
    else if (param_2 < 0x31d) {
      if (param_2 == 0x31c) {
        ExceptionList = &local_14;
        iVar6 = FUN_00aae9af();
        if (iVar6 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)FUN_00491620();
        }
        (**(code **)(*piVar5 + 0xc))();
        FUN_004b5f60();
        ExceptionList = pvStack_18;
        return;
      }
      if (param_2 == 0x2aa) {
        ExceptionList = &local_14;
        FUN_0055c6c0();
        FUN_004b61a0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x31b) {
        ExceptionList = &local_14;
        iVar6 = FUN_00aae9af();
        if (iVar6 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)FUN_00492490();
        }
        FUN_004b5f60();
        (**(code **)(*piVar5 + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
    else {
      if (param_2 == 0x37c) {
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x3b8) {
        ExceptionList = &local_14;
        iVar6 = FUN_00aae9af();
        if (iVar6 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)FUN_0044e210();
        }
        (**(code **)(*piVar5 + 0xc))();
        iVar6 = *(int *)(in_ECX + 0xcc);
        puVar3 = (undefined4 *)FUN_00aae9af();
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = piVar5;
          puVar3[1] = iVar6;
          puVar3[2] = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
        }
        iVar8 = *(int *)(iStack_33c + 0xd0);
        *(undefined4 **)(iStack_33c + 0xcc) = puVar3;
        *(int *)(iStack_33c + 0xd0) = iVar8 + 1;
        if (iVar8 == 0) {
          *(undefined4 **)(iStack_33c + 200) = puVar3;
          ExceptionList = pvStack_18;
          return;
        }
        *(undefined4 **)(iVar6 + 8) = puVar3;
        ExceptionList = pvStack_18;
        return;
      }
    }
  }
  else if (param_2 < 0x907) {
    if (param_2 == 0x906) {
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x73c) {
      if (param_2 == 0x73b) {
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x4f1) {
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x576) {
        piVar5 = (int *)(in_ECX + 0x35c);
        ExceptionList = &local_14;
LAB_004aa390:
        (**(code **)(*piVar5 + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
    else {
      if (param_2 == 0x760) {
        iVar6 = *(int *)(param_1 + 0x228);
        if ((iVar6 != 0x29f) && (iVar6 != 0x2a0)) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
        *(uint *)(in_ECX + 400) = (uint)(iVar6 == 0x29f);
        return;
      }
      if (param_2 == 0x8b5) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        puVar3 = (undefined4 *)FUN_0055e410();
        *(undefined4 *)(in_ECX + 800) = *(undefined4 *)*puVar3;
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if (param_2 < 0x95b) {
    if (param_2 == 0x95a) {
      ExceptionList = &local_14;
      iVar6 = FUN_00aae9af();
      local_c = 4;
      if (iVar6 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_008a5910();
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar5 + 0xc))();
      FUN_0068f390();
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0x916) {
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x932) {
      ExceptionList = &local_14;
      iVar6 = FUN_00aae9af();
      local_c = 3;
      if (iVar6 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_00976d80();
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar5 + 0xc))();
      FUN_0068f390();
      ExceptionList = pvStack_18;
      return;
    }
  }
  else if (param_2 == 0xa65) {
    iVar6 = *(int *)(in_ECX + 0x58);
    ExceptionList = &local_14;
    piVar5 = (int *)FUN_004c25b0();
    piVar5 = (int *)(iVar6 * 0xb0 + *piVar5);
    goto LAB_004aa390;
  }
  pcVar9 = (char *)(param_1 + 0x24);
  pcVar4 = pcVar9;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 5;
  FUN_004dad40();
  piVar5 = (int *)FUN_004dc420();
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_004dacc0();
  }
  local_c = 0xffffffff;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_00409350();
  local_c = 6;
  if (DAT_0131bb34 == 0) {
    iVar6 = FUN_00aae9af();
    local_c._0_1_ = 7;
    if (iVar6 != 0) {
      FUN_0041a160();
    }
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_00423700();
  }
  piVar7 = (int *)FUN_005c2ad0();
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_0096bb70();
  }
  local_c = 0xffffffff;
  if ((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x24))(), cVar2 != '\0')) {
    iVar6 = FUN_004b6180();
    (**(code **)(*(int *)(iVar6 + 8) + 0xc))();
    ExceptionList = pvStack_18;
    return;
  }
  cVar2 = (**(code **)(*piVar7 + 0x18))();
  if (cVar2 == '\0') {
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  }
  FUN_00954a40();
  local_c = 8;
  piVar5 = (int *)(piVar7[10] * 0x10 + *(int *)(in_ECX + 0x194));
  iVar6 = piVar5[1];
  iVar8 = FUN_00aae9af();
  local_c = CONCAT31(local_c._1_3_,9);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    FUN_00955450();
    *(int *)(iVar8 + 0x278) = iVar6;
    *(undefined4 *)(iVar8 + 0x27c) = 0;
    *(undefined1 *)(iVar8 + 0x280) = 0;
  }
  iVar1 = piVar5[2];
  piVar5[1] = iVar8;
  piVar5[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *piVar5 = iVar8;
  }
  else {
    *(int *)(iVar6 + 0x27c) = iVar8;
  }
  local_c = 0xffffffff;
  FUN_00955ae0();
  piVar5 = *(int **)(*(int *)(in_ECX + 0x194) + 4 + piVar7[10] * 0x10);
  FUN_00955d90();
  FUN_00955f20();
  (**(code **)(*piVar5 + 0xc))();
  ExceptionList = pvStack_18;
  return;
}

