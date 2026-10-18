// FUN_006dfbd0 @ 006dfbd0 body=[[006dfbd0, 006dfc74] [006dfc78, 006dfc9f] [006dfca3, 006dfd6d] [006dfd71, 006dfe72]]


void FUN_006dfbd0(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_74;
  undefined1 local_6c [8];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 auStack_54 [4];
  undefined1 local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c [3];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9deee;
  pvStack_14 = ExceptionList;
  piVar8 = (int *)0x0;
  local_3c[0] = 0xf;
  local_40 = 0;
  local_50 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("nations",7);
  local_c = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = 0;
  FUN_00409350("release_nation",0xe);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_6c);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))(auStack_54);
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  local_58 = local_58 & 0xffffff00;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*piVar3;
  if (piVar3 != (int *)0x0) {
    while( true ) {
      iVar6 = *piVar3;
      piVar3 = (int *)piVar3[2];
      cVar2 = (**(code **)(*(int *)(iVar6 + 0x1c) + 0x58))(param_1);
      if (cVar2 != '\0') break;
      if (piVar3 == (int *)0x0) {
        ExceptionList = pvStack_1c;
        return;
      }
    }
    uStack_28 = 0xf;
    uStack_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350("country_flag",0xc);
    pvStack_14 = (void *)0x2;
    piVar3 = (int *)(**(code **)(**(int **)(iVar6 + 0x20) + 0x44))(local_3c);
    iVar6 = DAT_012587e4;
    iVar4 = (**(code **)(*piVar3 + 0x80))();
    iVar6 = *(int *)(*(int *)(iVar6 + 4) + iVar4 * 4);
    uVar7 = *(undefined4 *)(iVar6 + 0x1c);
    uVar1 = *(undefined4 *)(iVar6 + 0x20);
    uStack_18 = 0xffffffff;
    local_80 = uVar7;
    uStack_7c = uVar1;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    uStack_2c = 0xf;
    uStack_30 = 0;
    local_40 = local_40 & 0xffffff00;
    uVar5 = (**(code **)(*param_1 + 0x80))();
    iVar6 = FUN_00aae9af(0x54);
    uStack_18 = 3;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0057efa0(iVar6,uVar7,uVar1,uVar5,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                           *(undefined4 *)(DAT_012588e8 + 0xb60),0);
    }
    uStack_18 = 0xffffffff;
    uVar1 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    iVar6 = FUN_00aae9af(0xa8);
    uStack_18 = 4;
    if (iVar6 != 0) {
      piVar8 = (int *)FUN_006ce020(iVar6,uVar7,uVar1,&local_80,uVar5);
    }
    uStack_18 = 0xffffffff;
    (**(code **)(*piVar8 + 0x28))();
    FUN_006480e0(piVar8);
  }
  ExceptionList = pvStack_1c;
  return;
}

