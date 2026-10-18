// FUN_00767880 @ 00767880 body=[[00767880, 007679be] [007679c2, 00767a06] [00767a0a, 00767a25] [00767a29, 00767a58] [00767a5c, 00767b88] [00767b8c, 00767c2c]]


/* WARNING: Removing unreachable block (ram,0x007679f4) */

void FUN_00767880(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_ESI;
  undefined1 auStack_14c [16];
  undefined4 uStack_13c;
  char *pcStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint *puStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined **ppuStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined1 *puStack_c4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint auStack_9c [4];
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_80;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [4];
  undefined1 uStack_54;
  uint uStack_4c;
  undefined1 *puStack_44;
  uint uStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7bc61;
  pvStack_14 = ExceptionList;
  puStack_c4 = (undefined1 *)0x7678ba;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  puStack_c4 = (undefined1 *)0x7678c4;
  cVar1 = (**(code **)(**(int **)(iVar2 + 0x38) + 0x38))();
  if (cVar1 != '\0') {
    puStack_c4 = (undefined1 *)0x7678d6;
    iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    puStack_c4 = (undefined1 *)0x7678e0;
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x30))();
    puStack_c4 = (undefined1 *)0x4;
    uStack_40 = 0xf;
    puStack_44 = (undefined1 *)0x0;
    uStack_54 = 0;
    uStack_cc = 0xe145d800767907;
    FUN_00409350();
    uStack_c = 0;
    puStack_c4 = (undefined1 *)0x4;
    uStack_60 = 0xf;
    puStack_64 = (undefined1 *)0x0;
    auStack_74[0] = 0;
    uStack_cc = 0xe145d00076792a;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    puStack_c4 = auStack_74;
    uStack_cc = CONCAT44(0x767944,(undefined4)uStack_cc);
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x34))();
    uStack_cc = CONCAT44(auStack_58,&uStack_a8);
    uStack_d4 = CONCAT44(0x767955,(undefined1 *)uStack_d4);
    uVar4 = FUN_009a8ee0();
    puStack_10._0_1_ = 2;
    uStack_cc = CONCAT44(0x767966,(undefined4)uStack_cc);
    iVar2 = FUN_00475500();
    uStack_d4 = *(undefined8 *)(iVar2 + 0x6c);
    uStack_cc = *(undefined8 *)(iVar2 + 0x74);
    uStack_d8 = 0x76798e;
    uVar5 = FUN_009a9880();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
    uStack_cc = (ulonglong)uVar5;
    uStack_d4 = CONCAT44(0x7679a4,(undefined1 *)uStack_d4);
    (**(code **)(*piVar3 + 0xcc))();
    if (0xf < uStack_2c) {
      uStack_d4 = CONCAT44(uStack_40,&UNK_007679bf);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2c = 0xf;
    uStack_30 = 0;
    uStack_40 = uStack_40 & 0xffffff00;
    uStack_18 = CONCAT31(uStack_18._1_3_,4);
    uStack_d4 = CONCAT44(0x7679ec,(undefined1 *)uStack_d4);
    FUN_009adb70();
    uStack_a8 = 0;
    uStack_a4 = 0;
    if (0xf < uStack_6c) {
      uStack_d4 = CONCAT44(uStack_80,&UNK_00767a26);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_18 = 0xffffffff;
    uStack_6c = 0xf;
    uStack_70 = 0;
    uStack_80 = uStack_80 & 0xffffff00;
    if (0xf < uStack_4c) {
      uStack_d4 = CONCAT44(uStack_60,&UNK_00767a59);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0x26000767a66;
    iVar2 = FUN_00aae9af();
    uStack_18 = 5;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uStack_d4._4_4_ = 0;
      uStack_d4._0_4_ = &DAT_00ded94d;
      uStack_88 = 0xf;
      uStack_8c = 0;
      auStack_9c[0] = auStack_9c[0] & 0xffffff00;
      uStack_d8 = 0x767a9b;
      FUN_00409350();
      puStack_44 = (undefined1 *)&ppuStack_fc;
      uStack_f8 = 0x18d;
      ppuStack_fc = CVersion::vftable;
      uStack_f4 = 0;
      uStack_d4 = CONCAT44(uStack_d4._4_4_,0xf);
      uStack_d8 = 0;
      uVar4 = 1;
      uStack_e8 = 0;
      uStack_100 = 0xffffffff;
      uStack_104 = 0;
      puStack_108 = auStack_9c;
      uStack_18 = 7;
      uStack_10c = 0x767ae6;
      FUN_00408ed0();
      uStack_ec = 0;
      uStack_f0 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_104 = 0;
      puStack_108 = (uint *)0x0;
      uStack_10c = 0x20;
      uStack_110 = 0x29a;
      uStack_114 = 2;
      uStack_18 = 8;
      uStack_134 = 8;
      uStack_11c = 0xf;
      uStack_120 = 0;
      pcStack_138 = "NoAdress";
      uStack_130 = 0;
      uStack_13c = 0x767b23;
      FUN_00409350();
      puStack_64 = auStack_14c;
      uStack_18._0_1_ = 9;
      pcStack_138 = (char *)0xf;
      uStack_13c = 0;
      auStack_14c[0] = 0;
      FUN_00409350("InitialSession",0xe);
      uStack_18 = CONCAT31(uStack_18._1_3_,6);
      uVar6 = FUN_009aeb90(iVar2);
    }
    uStack_18 = 0xffffffff;
    if ((uVar4 & 1) != 0) {
      if (0xf < uStack_88) {
        uStack_d4 = CONCAT44(auStack_9c[0],&UNK_00767b89);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_88 = 0xf;
      uStack_8c = 0;
      auStack_9c[0] = auStack_9c[0] & 0xffffff00;
    }
    uStack_d4 = CONCAT44(uVar6,0x767ba7);
    (**(code **)(**(int **)(unaff_ESI + 4) + 0x48))();
  }
  iVar2 = *(int *)(in_ECX + 4);
  puStack_c4 = (undefined1 *)0x767bb3;
  iVar7 = FUN_00475500();
  *(undefined1 *)(iVar7 + 0x165) = 0;
  puStack_c4 = (undefined1 *)0x767bcf;
  (**(code **)(**(int **)(*(int *)(iVar2 + 0x74c) + *(int *)(iVar2 + 0x75c) * 4) + 0xc))();
  *(undefined4 *)(iVar2 + 0x75c) = 5;
  puStack_c4 = (undefined1 *)0x767be9;
  (**(code **)(**(int **)(*(int *)(iVar2 + 0x74c) + 0x14) + 4))();
  puStack_c4 = (undefined1 *)0x767bff;
  (**(code **)(**(int **)(*(int *)(iVar2 + 0x74c) + *(int *)(iVar2 + 0x75c) * 4) + 8))();
  if (*(int *)(*(int *)(iVar2 + 0x1b4) + 0x20) != 0) {
    puStack_c4 = (undefined1 *)0x767c18;
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x1b4) + 0x20) + 0x18) + 0x38))();
  }
  ExceptionList = pvStack_14;
  return;
}

