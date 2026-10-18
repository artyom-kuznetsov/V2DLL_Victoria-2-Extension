// FUN_00942540 @ 00942540 body=[[00942540, 009425c8] [009425cc, 009428b8] [009428bc, 009428ed] [009428f1, 009429b5] [009429b9, 009429e4] [009429e8, 00942a19]]


bool FUN_00942540(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *in_ECX;
  undefined4 uVar8;
  int *piStack_98;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_70;
  undefined1 local_6c [12];
  undefined4 uStack_60;
  uint local_5c;
  undefined4 local_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb4a28;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00940fb0(in_ECX);
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = 0;
  FUN_00409350("AgreeButton",0xb);
  local_c = 0;
  piVar3 = (int *)(**(code **)(*(int *)in_ECX[1] + 0x34))(local_6c);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  local_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  cVar2 = FUN_00911760(0);
  if (cVar2 == '\0') {
    pcVar4 = *(code **)(*piVar3 + 0xbc);
  }
  else {
    pcVar4 = *(code **)(*piVar3 + 0xb8);
  }
  (*pcVar4)();
  iVar5 = (**(code **)(*(int *)in_ECX[0x1b] + 0x20))();
  if (iVar5 != 0x9fa) goto LAB_009428f5;
  piVar3 = (int *)in_ECX[0x1b];
  iVar5 = piVar3[5];
  if ((*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <= iVar5) ||
     (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + iVar5 * 4) != 0)) {
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10 = (undefined1 *)0x3;
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    FUN_00409350("acceptance",10);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    (**(code **)(*(int *)in_ECX[1] + 0x3c))(auStack_54);
    FUN_00408ed0(auStack_8c,0,0xffffffff);
    FUN_00a5ecc0(auStack_8c,0);
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_54[0]);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_8c[0]);
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    goto LAB_009428f5;
  }
  iVar1 = piVar3[4];
  iVar6 = piVar3[3];
  cVar2 = FUN_00911760(0);
  if (cVar2 == '\0') goto switchD_00942755_caseD_899;
  if (DAT_012589a7 == '\0') {
    if ((iVar5 != iVar6) && (cVar2 = (**(code **)(*piVar3 + 0x6c))(), cVar2 != '\0')) {
      uVar8 = 100;
      goto LAB_00942825;
    }
LAB_009426a5:
    iVar6 = (**(code **)(*piVar3 + 0x20))();
    if (iVar6 < 0x81f) {
      if (iVar6 == 0x81e) {
        uVar7 = FUN_0083de70(iVar1,iVar5,0);
        goto LAB_00942817;
      }
      if (iVar6 == 0x332) {
        uVar7 = FUN_00841640(0,iVar1,iVar5);
        goto LAB_00942817;
      }
      if (iVar6 != 0x38d) {
        if (iVar6 != 0x470) goto switchD_00942755_caseD_899;
        if ((piVar3[0xb] < 0) || ((piVar3[0xb] < 1 && ((uint)piVar3[10] < 0x28001)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = 100;
        }
        goto LAB_00942817;
      }
    }
    else {
      if (0x9fa < iVar6) {
        if (iVar6 == 0x9fb) {
          uVar7 = FUN_00843b90(iVar1,iVar5);
        }
        else {
          if (iVar6 != 0xa02) goto switchD_00942755_caseD_899;
          uVar7 = FUN_00843170(piVar3,0,iVar1,iVar5);
        }
        goto LAB_00942817;
      }
      if (iVar6 == 0x9fa) {
        uVar7 = FUN_00843a10(0,iVar1,iVar5);
        goto LAB_00942817;
      }
      switch(iVar6) {
      case 0x897:
      case 0x898:
        cVar2 = FUN_00911760(0);
        uVar7 = -(uint)(cVar2 != '\0') & 100;
        break;
      default:
        goto switchD_00942755_caseD_899;
      case 0x8c6:
        uVar7 = FUN_008419c0(piVar3,0,iVar1,iVar5);
        break;
      case 0x8c7:
        uVar7 = FUN_00842a00(iVar1,iVar5);
        break;
      case 0x8c8:
        uVar7 = FUN_00842a50(0,0,iVar1,iVar5);
        break;
      case 0x8c9:
        uVar7 = FUN_008430d0(piVar3,iVar1,iVar5);
        break;
      case 0x8ca:
        uVar7 = FUN_008416b0(iVar1,iVar5);
        break;
      case 0x8cb:
        uVar7 = FUN_00841900(iVar1,iVar5);
        break;
      case 0x8d5:
        uVar7 = FUN_00844050(iVar1,iVar5);
        break;
      case 0x8d6:
        uVar7 = FUN_00844140(iVar1,iVar5);
      }
LAB_00942817:
      if ((int)uVar7 < 0x32) {
switchD_00942755_caseD_899:
        uVar8 = 0;
        goto LAB_00942825;
      }
    }
    uVar8 = 100;
  }
  else {
    if (iVar5 == iVar6) goto LAB_009426a5;
    uVar8 = 100;
  }
LAB_00942825:
  local_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  FUN_00409350("acceptance",10);
  puStack_10 = (undefined1 *)0x1;
  uVar8 = FUN_00615690(auStack_38,uVar8);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  (**(code **)(*(int *)piStack_98[1] + 0x3c))(&uStack_70);
  FUN_00408ed0(uVar8,0,0xffffffff);
  FUN_00a5ecc0(uVar8,0);
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_38[0]);
  }
  puStack_10 = (undefined1 *)0xffffffff;
  uStack_24 = 0xf;
  uStack_28 = 0;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  in_ECX = piStack_98;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
LAB_009428f5:
  cVar2 = (**(code **)(*in_ECX + 0x20))();
  if (cVar2 == '\0') {
    ExceptionList = pvStack_18;
    return false;
  }
  ExceptionList = pvStack_18;
  return (char)in_ECX[0x19] == '\0';
}

