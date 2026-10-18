// FUN_00563bc0 @ 00563bc0 body=[[00563bc0, 00563e21] [00563e25, 00563f70]]


void FUN_00563bc0(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int in_ECX;
  char *pcStack_70;
  uint *puStack_6c;
  undefined1 auStack_54 [4];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 auStack_34 [28];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5f7bb;
  local_14 = ExceptionList;
  if (0x455 < param_2) {
    if (param_2 < 0x973) {
      if (param_2 != 0x972) {
        if (param_2 == 0x4c6) {
          pcStack_70 = (char *)(in_ECX + 0xf4);
          puStack_6c = (uint *)0x0;
          ExceptionList = &local_14;
          FUN_009a1750();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x685) goto switchD_00563c63_caseD_21c;
        if (param_2 == 0x933) {
          puStack_6c = (uint *)0x563d01;
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
        goto switchD_00563c63_caseD_21d;
      }
      puStack_6c = (uint *)(in_ECX + 0xe7);
    }
    else if (param_2 == 0x9da) {
      puStack_6c = (uint *)(in_ECX + 0xe9);
    }
    else {
      if (param_2 == 0x9db) {
        puStack_6c = (uint *)0x563f3a;
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0xa0a) goto switchD_00563c63_caseD_21d;
      puStack_6c = (uint *)(in_ECX + 0xe8);
    }
    goto LAB_00563f54;
  }
  if (param_2 == 0x455) {
    puStack_6c = (uint *)param_1;
    pcStack_70 = (char *)0x563cb9;
    ExceptionList = &local_14;
    (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))();
    ExceptionList = pvStack_18;
    return;
  }
  if (param_2 < 0x21c) {
    if (param_2 == 0x21b) {
      puStack_6c = (uint *)0x563c3a;
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0xb2) {
      puStack_6c = (uint *)0x563c1b;
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    }
switchD_00563c63_caseD_21d:
    pcStack_70 = param_1 + 0x24;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar3 = pcStack_70;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    puStack_6c = (uint *)((int)pcVar3 - (int)(param_1 + 0x25));
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    if (DAT_0131bb34 == 0) {
      puStack_6c = (uint *)0x188;
      pcStack_70 = (char *)0x563dca;
      iVar4 = FUN_00aae9af();
      local_c._0_1_ = 1;
      if (iVar4 == 0) {
        puStack_6c = (uint *)0x0;
      }
      else {
        puStack_6c = (uint *)0x563de1;
        puStack_6c = (uint *)FUN_0041a160();
      }
      local_c = (uint)local_c._1_3_ << 8;
      pcStack_70 = (char *)0x563def;
      FUN_00423700();
    }
    puStack_6c = local_50;
    pcStack_70 = (char *)0x563dfe;
    piVar5 = (int *)FUN_005c2ad0();
    if (piVar5 == (int *)0x0) {
      puStack_6c = (uint *)0x563e07;
      piVar5 = (int *)FUN_0096bb70();
    }
    local_c = 0xffffffff;
    if (0xf < local_3c) {
      puStack_6c = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      pcStack_70 = &UNK_00563e22;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    puStack_6c = (uint *)0x563e3e;
    cVar2 = (**(code **)(*piVar5 + 0x18))();
    if (cVar2 != '\0') {
      iVar4 = *(int *)(in_ECX + 0x7c);
      iVar1 = piVar5[10];
      puStack_6c = (uint *)auStack_54;
      pcStack_70 = param_1 + 0x228;
      puVar6 = (undefined4 *)FUN_0098fb60();
      *(undefined4 *)(iVar4 + iVar1 * 4) = *puVar6;
      ExceptionList = local_14;
      return;
    }
    puStack_6c = (uint *)0x563e86;
    FUN_009885d0();
    local_c = 2;
    pcStack_70 = (char *)0x563e9b;
    puStack_6c = (uint *)auStack_34;
    iVar4 = FUN_00973bd0();
    local_c = 0xffffffff;
    puStack_6c = (uint *)0x563eae;
    FUN_00408ad0();
    if ((iVar4 != DAT_012587f0 + 0x48) && (iVar4 != 0)) {
      FUN_0098fdd0(param_1 + 0x228,&pcStack_70);
      FUN_0047da50();
      ExceptionList = local_14;
      return;
    }
    puStack_6c = (uint *)param_2;
    pcStack_70 = param_1;
    FUN_0044bef0();
    ExceptionList = local_14;
    return;
  }
  switch(param_2) {
  case 0x21c:
switchD_00563c63_caseD_21c:
    puStack_6c = (uint *)0x563d20;
    ExceptionList = &local_14;
    FUN_009a1ce0();
    ExceptionList = local_14;
    return;
  default:
    goto switchD_00563c63_caseD_21d;
  case 0x21f:
    puStack_6c = (uint *)(in_ECX + 0xe4);
    break;
  case 0x223:
    puStack_6c = (uint *)(in_ECX + 0xe5);
    break;
  case 0x225:
    puStack_6c = (uint *)(in_ECX + 0xe6);
    break;
  case 0x226:
    puStack_6c = (uint *)0x563c8b;
    ExceptionList = &local_14;
    FUN_009a1ce0();
    ExceptionList = local_14;
    return;
  }
LAB_00563f54:
  pcStack_70 = (char *)0x563f5d;
  ExceptionList = &local_14;
  FUN_009a1bb0();
  ExceptionList = local_14;
  return;
}

