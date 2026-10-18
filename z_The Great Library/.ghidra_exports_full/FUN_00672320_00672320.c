// FUN_00672320 @ 00672320 body=[[00672320, 006723d4] [006723d8, 00672402] [00672406, 006725c5] [006725c9, 006725e5] [006725e9, 0067260f] [00672613, 00672644] [00672648, 0067270f] [00672713, 00672764] [00672768, 006727a8] [006727b2, 006727c6]]


void FUN_00672320(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *in_ECX;
  uint unaff_EBX;
  undefined1 auStack_ec [4];
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined4 uStack_e0;
  uint uStack_d8;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_bc;
  undefined1 auStack_b8 [4];
  undefined1 local_b4;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_68;
  undefined4 uStack_58;
  uint uStack_54;
  int *piStack_4c;
  undefined1 auStack_3c [20];
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6f735;
  pvStack_14 = ExceptionList;
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("settings",8);
  local_c = 0;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = 0;
  FUN_00409350("menu_message_settings",0x15);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar4 = (int *)(**(code **)(*in_ECX + 0x6c))(local_98);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(auStack_b8);
  if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_8c = 0xf;
  uStack_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_a8 = 0xf;
  uStack_ac = 0;
  uStack_bc = uStack_bc & 0xffffff00;
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x5c))();
  if (DAT_01262ef4 == 0) {
    iVar5 = FUN_00aae9af();
    pvStack_14 = (void *)0x2;
    if (iVar5 != 0) {
      FUN_006a4e30();
    }
    pvStack_14 = (void *)0xffffffff;
    FUN_006a59b0();
  }
  FUN_006a56f0();
  pvStack_14 = (void *)0x3;
  piVar1 = piStack_4c;
  do {
    if (piVar1 == (int *)0x0) {
      (**(code **)(*piVar4 + 0x6c))();
      (**(code **)(*piVar4 + 0x50))();
      if (piStack_4c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = pvStack_1c;
      return;
    }
    if ((param_1 == 6) || (*(int *)(*piVar1 + 8) == param_1)) {
      uStack_c4 = 0xf;
      uStack_c8 = 0;
      uStack_d8 = uStack_d8 & 0xffffff00;
      FUN_00409350("_SETUP",6);
      pvStack_14._0_1_ = 4;
      uVar6 = FUN_00988f20();
      pvStack_14._0_1_ = 5;
      FUN_009a8ee0(auStack_ec,uVar6);
      pvStack_14._0_1_ = 6;
      puVar7 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        iVar5 = FUN_00aae9af();
        pvStack_14._0_1_ = 7;
        if (iVar5 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)FUN_00475150();
        }
        pvStack_14._0_1_ = 8;
        if ((puVar7 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar7;
      pvStack_14._0_1_ = 6;
      FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
      pvStack_14._0_1_ = 0xb;
      FUN_009adb70();
      puVar2 = puStack_e8;
      if (puStack_e8 != (undefined1 *)0x0) {
        while( true ) {
          if (puVar2 == puStack_e4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puVar2 + 0x14)) break;
          *(undefined4 *)(puVar2 + 0x14) = 0xf;
          *(undefined4 *)(puVar2 + 0x10) = 0;
          *puVar2 = 0;
          puVar2 = puVar2 + 0x20;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_e8 = (undefined1 *)0x0;
      puStack_e4 = (undefined1 *)0x0;
      uStack_e0 = 0;
      if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_54 = 0xf;
      uStack_58 = 0;
      uStack_68 = uStack_68 & 0xffffff00;
      pvStack_14._0_1_ = 0xd;
      if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c4 = 0xf;
      uStack_c8 = 0;
      uStack_d8 = uStack_d8 & 0xffffff00;
      cVar3 = FUN_006741e0(param_4,auStack_3c);
      if (cVar3 != '\0') {
        iVar5 = FUN_00aae9af();
        pvStack_14._0_1_ = 0xe;
        if (iVar5 != 0) {
          uStack_70 = 0xf;
          uStack_74 = 0;
          local_84 = local_84 & 0xffffff00;
          FUN_00409350("message_entry",0xd);
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xf);
          unaff_EBX = unaff_EBX | 1;
          FUN_0066ff10();
        }
        pvStack_14._0_1_ = 0xd;
        pvStack_14._1_3_ = 0;
        if ((unaff_EBX & 1) != 0) {
          unaff_EBX = 0;
          if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_70 = 0xf;
          uStack_74 = 0;
          local_84 = local_84 & 0xffffff00;
        }
        FUN_006706c0();
        (**(code **)(*piVar4 + 0x10))();
      }
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,3);
      if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

