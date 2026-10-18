// FUN_00461310 @ 00461310 body=[[00461310, 004613e6] [004613ea, 00461422] [00461426, 00461606] [0046160a, 0046163f] [00461643, 00461830] [00461834, 00461866] [0046186a, 00461aa0] [00461aa4, 00461ae2] [00461ae6, 00461b2e]]


void FUN_00461310(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uStack_45c;
  uint uStack_440;
  undefined4 uStack_438;
  uint uStack_424;
  undefined4 uStack_41c;
  uint uStack_408;
  undefined4 uStack_400;
  uint uStack_3ec;
  undefined4 uStack_3e4;
  uint uStack_3d0;
  undefined4 uStack_3c8;
  uint uStack_3b4;
  undefined4 uStack_3ac;
  uint uStack_398;
  undefined4 uStack_390;
  uint uStack_37c;
  undefined1 auStack_374 [28];
  undefined1 auStack_358 [28];
  undefined1 auStack_33c [800];
  void *pvStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5bb7f;
  pvStack_14 = ExceptionList;
  switch(param_2) {
  case 0x9ba:
    ExceptionList = &pvStack_14;
    iVar3 = FUN_00aae9af(0x50);
    piVar4 = (int *)0x0;
    local_c = 0;
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_0045e160(iVar3);
    }
    local_c = 0xffffffff;
    (**(code **)(*piVar4 + 0xc))(param_1);
    uVar5 = FUN_0045e4e0(piVar4);
    puStack_10 = (undefined1 *)0x1;
    uVar6 = FUN_0045e130(piVar4);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    piVar1 = (int *)FUN_00461b70(uStack_45c,uVar6,uVar5);
    if (0xf < uStack_398) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_3ac);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_408) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_41c);
    }
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        *piVar1 = (int)piVar4;
        ExceptionList = pvStack_18;
        return;
      }
      FUN_009885d0();
      puStack_10 = (undefined1 *)0x3;
      FUN_0045e4e0(piVar4);
      puStack_10._0_1_ = 4;
      FUN_0045e130(piVar4);
      puStack_10._0_1_ = 5;
      FUN_004015b0(auStack_358,0x33d,0x10004);
      puStack_10._0_1_ = 6;
      uVar5 = FUN_00987d20(extraout_ECX," and name ");
      uVar5 = FUN_00989050(uVar5);
      uVar5 = FUN_00418e30(uVar5);
      uVar5 = FUN_00989050(uVar5);
      FUN_00401280(uVar5);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
      FUN_00401650();
      FUN_00408ad0();
      FUN_00408ad0();
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_00408ad0();
    }
    goto LAB_0046153d;
  default:
    goto switchD_00461350_caseD_9bb;
  case 0x9ca:
    ExceptionList = &pvStack_14;
    iVar3 = FUN_00aae9af(0x50);
    local_c = 7;
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_0045de50(iVar3);
    }
    local_c = 0xffffffff;
    (**(code **)(*piVar4 + 0xc))(param_1);
    uVar5 = FUN_0045e4e0(piVar4);
    puStack_10 = (undefined1 *)0x8;
    uVar6 = FUN_0045e130(piVar4);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
    iVar2 = FUN_00461b70(uStack_45c,uVar6,uVar5);
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_3d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_3e4);
    }
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 0) {
        FUN_009885d0();
        puStack_10 = (undefined1 *)0xa;
        FUN_0045e4e0(piVar4);
        puStack_10._0_1_ = 0xb;
        FUN_0045e130(piVar4);
        puStack_10._0_1_ = 0xc;
        FUN_004015b0(auStack_374,0x352,0x10004);
        puStack_10._0_1_ = 0xd;
        uVar5 = FUN_00987d20(extraout_ECX_00," and name ");
        uVar5 = FUN_00989050(uVar5);
        uVar5 = FUN_00418e30(uVar5);
        uVar5 = FUN_00989050(uVar5);
        FUN_00401280(uVar5);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xc);
        FUN_00401650();
        FUN_00408ad0();
        FUN_00408ad0();
        puStack_10 = (undefined1 *)0xffffffff;
        FUN_00408ad0();
        (**(code **)*piVar4)(1);
        ExceptionList = pvStack_1c;
        return;
      }
      *(int **)(iVar2 + 4) = piVar4;
      ExceptionList = pvStack_18;
      return;
    }
LAB_0046153d:
    (**(code **)*piVar4)(1);
    ExceptionList = pvStack_1c;
    return;
  case 0x9cb:
    ExceptionList = &pvStack_14;
    iVar3 = FUN_00aae9af(0x74);
    local_c = 0xe;
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_0045e510(iVar3);
    }
    local_c = 0xffffffff;
    (**(code **)(*piVar4 + 0xc))(param_1);
    uVar5 = FUN_0045e130(piVar4);
    puStack_10 = (undefined1 *)0xf;
    uVar6 = FUN_0045e4e0(piVar4);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
    iVar3 = FUN_00461b70(uStack_45c,uVar6,uVar5);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_438);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_3ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_400);
    }
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 8 + piVar4[0x10] * 4) == 0) {
        *(int **)(iVar3 + 8 + piVar4[0x10] * 4) = piVar4;
        ExceptionList = pvStack_18;
        return;
      }
      FUN_009885d0();
      puStack_10 = (undefined1 *)0x11;
      FUN_004577c0();
      puStack_10._0_1_ = 0x12;
      FUN_0045e130(piVar4);
      puStack_10._0_1_ = 0x13;
      FUN_0045e4e0(piVar4);
      puStack_10._0_1_ = 0x14;
      FUN_004015b0(auStack_33c,0x368,0x10004);
      puStack_10._0_1_ = 0x15;
      uVar5 = FUN_00987d20(extraout_ECX_01," name ",extraout_ECX_01," and size ");
      uVar5 = FUN_00989050(uVar5);
      uVar5 = FUN_00418e30(uVar5);
      uVar5 = FUN_00989050(uVar5);
      uVar5 = FUN_00418e30(uVar5);
      uVar5 = FUN_00989050(uVar5);
      FUN_00401280(uVar5);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x14);
      FUN_00401650();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_00408ad0();
    }
    break;
  case 0x9dc:
    ExceptionList = &pvStack_14;
    iVar3 = FUN_00aae9af(0x7c);
    local_c = 0x16;
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_0045ed20(iVar3);
    }
    local_c = 0xffffffff;
    (**(code **)(*piVar4 + 0xc))(param_1);
    uVar5 = FUN_0045e4e0(piVar4);
    puStack_10 = (undefined1 *)0x17;
    uVar6 = FUN_0045e130(piVar4);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
    iVar3 = FUN_00461b70(uStack_45c,uVar6,uVar5);
    if (0xf < uStack_3b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_3c8);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_37c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_390);
    }
    if (iVar3 != 0) {
      FUN_0068f390();
      ExceptionList = pvStack_18;
      return;
    }
  }
  (**(code **)*piVar4)(1);
switchD_00461350_caseD_9bb:
  ExceptionList = pvStack_14;
  return;
}

