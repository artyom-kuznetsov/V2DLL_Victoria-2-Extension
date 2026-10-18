// FUN_004dcad0 @ 004dcad0 body=[[004dcad0, 004dcdf6] [004dce0d, 004dcefc]]


int FUN_004dcad0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined *puVar4;
  int iVar5;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b515e8;
  local_10 = ExceptionList;
  if (param_2 < 0x654) {
    if (param_2 == 0x653) {
      ExceptionList = &local_10;
      iVar2 = FUN_009a1bb0(in_ECX + 0x7c);
      ExceptionList = local_10;
      return iVar2;
    }
    if (param_2 < 0x213) {
      if (param_2 == 0x212) {
        ExceptionList = &local_10;
        iVar2 = FUN_009a1bb0(in_ECX + 0x13e);
        ExceptionList = local_10;
        return iVar2;
      }
      if (param_2 == 0xd9) {
        iVar2 = 0;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_8 = 2;
        ExceptionList = &local_10;
        FUN_009a1750(local_30,0);
        puVar4 = &DAT_0125cf38;
        do {
          cVar1 = FUN_00416db0();
          if (cVar1 != '\0') {
            *(undefined4 *)(in_ECX + 0x138) = (&DAT_0125cf54)[iVar2 * 8];
            break;
          }
          puVar4 = puVar4 + 0x20;
          iVar2 = iVar2 + 1;
        } while ((int)puVar4 < 0x125cf98);
LAB_004dcee2:
        iVar2 = FUN_00408ad0();
        ExceptionList = local_10;
        return iVar2;
      }
      if (param_2 == 0x201) {
        ExceptionList = &local_10;
        iVar2 = FUN_009a1bb0(in_ECX + 0x13d);
        ExceptionList = local_10;
        return iVar2;
      }
      if (param_2 == 0x202) {
        ExceptionList = &local_10;
        iVar2 = FUN_009a1bb0(in_ECX + 0x13c);
        ExceptionList = local_10;
        return iVar2;
      }
    }
    else {
      if (param_2 == 0x295) {
        ExceptionList = &local_10;
        iVar2 = (**(code **)(*(int *)(in_ECX + 0xe8) + 0xc))(param_1);
        ExceptionList = local_10;
        return iVar2;
      }
      if (param_2 == 0x344) {
        ExceptionList = &local_10;
        iVar2 = FUN_009a1d40();
        ExceptionList = local_10;
        return iVar2;
      }
      if (param_2 == 0x5de) {
        ExceptionList = &local_10;
        iVar2 = (**(code **)(*(int *)(in_ECX + 0x90) + 0xc))(param_1);
        ExceptionList = local_10;
        return iVar2;
      }
    }
  }
  else if (param_2 < 0xa92) {
    if (param_2 == 0xa91) {
      ExceptionList = &local_10;
      iVar2 = (**(code **)(*(int *)(in_ECX + 0x24) + 0xc))(param_1);
      ExceptionList = local_10;
      return iVar2;
    }
    if (param_2 == 0x843) {
      iVar5 = 0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint)local_30[0]._1_3_ << 8;
      local_8 = 1;
      ExceptionList = &local_10;
      local_14 = in_ECX;
      FUN_009a1750(local_30,0);
      piVar3 = (int *)FUN_004de580();
      iVar2 = (piVar3[1] - *piVar3) / 0x160;
      if (0 < iVar2) {
        do {
          cVar1 = FUN_00416db0();
          if (cVar1 != '\0') break;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      iVar2 = (piVar3[1] - *piVar3) * 0x2e8ba2e9;
      if (iVar5 != (piVar3[1] - *piVar3) / 0x160) {
        FUN_00408ed0(local_14 + 8,0,0xffffffff);
        FUN_004dcf00(iVar5 * 0x160 + *piVar3);
        iVar2 = FUN_00408ed0(local_30,0,0xffffffff);
      }
      if (local_1c < 0x10) {
        ExceptionList = local_10;
        return iVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if (param_2 == 0xa32) {
      ExceptionList = &local_10;
      piVar3 = (int *)FUN_00aae9af(0x28);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = (int)CProductionBonus::vftable;
        piVar3[1] = 0x18d;
        piVar3[3] = 0x18d;
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        *(undefined2 *)(piVar3 + 8) = 0;
        piVar3[2] = (int)CAndTrigger::vftable;
        piVar3[9] = 0;
      }
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = FUN_0068f390();
      ExceptionList = local_10;
      return iVar2;
    }
  }
  else {
    if (param_2 == 0xa92) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint)local_30[0]._1_3_ << 8;
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750(local_30,0);
      iVar2 = FUN_00973bd0(local_30);
      if ((iVar2 != 0) && (cVar1 = FUN_005613f0(), cVar1 != '\0')) {
        *(undefined4 *)(in_ECX + 0x80) = extraout_EDX;
      }
      goto LAB_004dcee2;
    }
    if (param_2 == 0xa94) {
      ExceptionList = &local_10;
      iVar2 = FUN_004df090(param_1,in_ECX + 0x108);
      ExceptionList = local_10;
      return iVar2;
    }
    if (param_2 == 0xa98) {
      ExceptionList = &local_10;
      iVar2 = FUN_009a1c10();
      ExceptionList = local_10;
      return iVar2;
    }
  }
  ExceptionList = &local_10;
  iVar2 = FUN_009a0f40();
  ExceptionList = local_10;
  return iVar2;
}

