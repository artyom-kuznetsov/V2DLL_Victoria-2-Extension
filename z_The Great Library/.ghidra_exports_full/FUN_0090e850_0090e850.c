// FUN_0090e850 @ 0090e850 body=[[0090e850, 0090f3a7]]


undefined4 * FUN_0090e850(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4239c;
  local_14 = ExceptionList;
  if (param_1 < 0x81f) {
    if (param_1 == 0x81e) {
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x98);
      local_c = 0;
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_00916a30(iVar2,DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    }
    if (param_1 < 0x38e) {
      if (param_1 == 0x38d) {
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af(0x6c);
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return (undefined4 *)0x0;
        }
        puVar3 = (undefined4 *)FUN_009134b0(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
        ExceptionList = local_14;
        return puVar3;
      }
      if (param_1 == 0) {
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af(0x44);
        local_c = 2;
        goto LAB_0090f378;
      }
      if (param_1 == 0x332) {
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af(0x28);
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return (undefined4 *)0x0;
        }
        puVar3 = (undefined4 *)FUN_00876200(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
        ExceptionList = local_14;
        return puVar3;
      }
    }
    else if (param_1 == 0x470) {
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x30);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[2] = 0x2d2d2d;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      puVar3[1] = 0x18d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CWarSubsidiesAction::vftable;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar4 = (undefined4 *)FUN_0091d920();
      puVar3[10] = *puVar4;
      puVar3[0xb] = puVar4[1];
      ExceptionList = local_14;
      return puVar3;
    }
  }
  else if (param_1 < 0x9fb) {
    if (param_1 == 0x9fa) {
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x68);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_00927850(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    }
    switch(param_1) {
    case 0x897:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CAddToSphereAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x898:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e510(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8b0:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CIncreaseOpinionAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8b1:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e4c0(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8c1:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CCancelWarSubsidiesAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8c2:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e3d0(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8c4:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e420(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8c6:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CAskMilitaryAccessAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8c7:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CCancelAskMilitaryAccessAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8c8:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CGiveMilitaryAccessAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8c9:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CCancelGiveMilitaryAccessAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8ca:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CCancelAllianceAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8cb:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e380(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8d4:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e470(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8d5:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CIncreaseRelationAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8d6:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CDecreaseRelationAction::vftable;
      ExceptionList = local_14;
      return puVar3;
    case 0x8dd:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x68);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_00916080(DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x8e4:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x30);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_00788d70(0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0x931:
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_00aae9af(0x2c);
      uVar1 = DAT_01259abc;
      if (puVar3 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3[3] = 0;
      puVar3[1] = 0x18d;
      puVar3[2] = 0x2d2d2d;
      puVar3[4] = 0x2d2d2d;
      puVar3[5] = 0;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = CMakeCBAction::vftable;
      puVar3[10] = 0;
      ExceptionList = local_14;
      return puVar3;
    }
  }
  else {
    switch(param_1) {
    case 0x9fb:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x28);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e600(0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0xa02:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x9c);
      local_c = 1;
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0091a350(iVar2,DAT_01259abc,0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0xa4f:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x28);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e650(0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    case 0xa50:
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af(0x28);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_0090e740(0x2d2d2d,0,0x2d2d2d,0);
      ExceptionList = local_14;
      return puVar3;
    }
  }
  ExceptionList = &local_14;
  iVar2 = FUN_00aae9af(0x44);
  local_c = 3;
LAB_0090f378:
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_00913230(iVar2);
  ExceptionList = local_14;
  return puVar3;
}

