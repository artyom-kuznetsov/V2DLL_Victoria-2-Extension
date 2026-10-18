// FUN_005f6320 @ 005f6320 body=[[005f6320, 005f67f0]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f6320(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 *local_238;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [32];
  int local_1f8;
  int *piStack_1ec;
  undefined **appuStack_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7f805;
  local_14 = ExceptionList;
  if (param_3 < 0x347) {
    if (param_3 == 0x346) {
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        local_238 = (undefined4 *)FUN_005f6a60();
      }
      FUN_005f6ab0();
LAB_005f63ed:
      local_238[2] = param_1;
      (**(code **)(*in_ECX + 0x18))(local_238);
      piVar4 = *(int **)(DAT_012588d4 + 0x24);
    }
    else {
      if (param_3 != 0x1a) {
        return;
      }
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x48);
      if (iVar2 == 0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        local_238 = (undefined4 *)FUN_005f6920();
      }
      pcVar3 = (char *)(param_2 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_2 + 0x22c),(int)pcVar3 - (param_2 + 0x22d));
      (**(code **)(*in_ECX + 0x18))(local_238);
      iVar2 = DAT_012588d4;
      local_238[2] = param_1;
      piVar4 = *(int **)(iVar2 + 0x24);
    }
  }
  else {
    if (0x529 < param_3) {
      if (param_3 != 0x8d9) {
        return;
      }
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x50);
      if (iVar2 == 0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        local_238 = (undefined4 *)FUN_005f73c0();
      }
      FUN_0094bd40();
      (**(code **)(local_1f8 + 0xc))(param_2);
      if ((piStack_1ec == (int *)0x0) ||
         (cVar1 = (**(code **)(*piStack_1ec + 0x1c))(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0;
        puVar5 = (undefined4 *)FUN_0094c240();
        local_c._0_1_ = 1;
        uVar6 = FUN_004015b0(auStack_230,0x88,0x10004);
        local_c._0_1_ = 2;
        iVar2 = in_ECX[8];
        FUN_00987d50(uVar6,"Non-valid wargoal ",0x12,0);
        if (0xf < (uint)puVar5[5]) {
          puVar5 = (undefined4 *)*puVar5;
        }
        uVar6 = FUN_00418e30(uVar6,puVar5);
        puVar5 = (undefined4 *)(iVar2 + 0x10);
        uVar6 = FUN_00418e30(uVar6,&DAT_00df12c8);
        if (0xf < *(uint *)(iVar2 + 0x24)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        uVar6 = FUN_00418e30(uVar6,puVar5);
        FUN_00401280(uVar6);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00987ac0(appuStack_120);
        appuStack_120[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_120);
        FUN_00408ad0();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      FUN_00424b60();
      goto LAB_005f67ba;
    }
    if (param_3 == 0x529) {
      ExceptionList = &local_14;
      local_238 = (undefined4 *)FUN_00aae9af(0x14);
      if (local_238 == (undefined4 *)0x0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        iVar2 = in_ECX[8];
        _DAT_012588d0 = _DAT_012588d0 + 1;
        *local_238 = CHistoryEntry::vftable;
        local_238[1] = 0x18d;
        local_238[2] = 43800000;
        local_238[2] = DAT_01259abc;
        local_238[3] = iVar2;
        *local_238 = CChangeLimited::vftable;
        *(undefined2 *)(local_238 + 4) = 0;
      }
      FUN_005f6840();
      local_238[2] = param_1;
      (**(code **)(*in_ECX + 0x18))(local_238);
      piVar4 = *(int **)(DAT_012588d4 + 0x24);
      goto LAB_005f67d3;
    }
    switch(param_3) {
    case 0x347:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        local_238 = (undefined4 *)FUN_005f6ca0();
      }
      FUN_005f6cf0(param_2 + 0x228);
      break;
    case 0x348:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        local_238 = (undefined4 *)FUN_005f6f10();
      }
      FUN_005f6f60();
      goto LAB_005f63ed;
    case 0x349:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x18);
      if (iVar2 == 0) {
        local_238 = (undefined4 *)0x0;
      }
      else {
        local_238 = (undefined4 *)FUN_005f7150();
      }
      FUN_005f71a0(param_2 + 0x228);
      break;
    case 0x34a:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0xac);
      local_c = 3;
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00593060(iVar2);
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar4 + 0xc))(param_2);
      if (piVar4[0x23] == 0) {
        FUN_009885d0();
        puStack_10 = (undefined1 *)0x4;
        FUN_004015b0(auStack_218,0xa0,0x10004);
        puStack_10._0_1_ = 5;
        uVar6 = FUN_00987d20();
        uVar6 = FUN_00989050(uVar6);
        FUN_00401280(uVar6);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
        FUN_00401650();
        puStack_10 = (undefined1 *)0xffffffff;
        FUN_00408ad0();
      }
      iVar2 = FUN_00aae9af(0x14);
      if (iVar2 == 0) {
        iVar2 = *in_ECX;
        local_238 = (undefined4 *)0x0;
        piRam00000010 = piVar4;
      }
      else {
        local_238 = (undefined4 *)FUN_005f7470();
        local_238[4] = piVar4;
        iVar2 = *in_ECX;
      }
      goto LAB_005f67d5;
    default:
      goto switchD_005f642a_default;
    }
LAB_005f67ba:
    local_238[2] = param_1;
    (**(code **)(*in_ECX + 0x18))(local_238);
    piVar4 = *(int **)(DAT_012588d4 + 0x24);
  }
LAB_005f67d3:
  iVar2 = *piVar4;
LAB_005f67d5:
  (**(code **)(iVar2 + 0x18))(local_238);
switchD_005f642a_default:
  ExceptionList = local_14;
  return;
}

