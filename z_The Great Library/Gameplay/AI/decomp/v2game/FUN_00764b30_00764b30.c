// FUN_00764b30 @ 00764b30 body=[[00764b30, 00764c39] [00764c3d, 00764c78] [00764c7c, 00764c97] [00764c9b, 00764cc6] [00764cca, 00764d31] [00764d35, 00764d9a] [00764d9e, 00764e01] [00764e05, 00764ed3] [00764ed7, 00764f12] [00764f16, 00764f31] [00764f35, 00764f60] [00764f64, 00765033] [00765037, 00765072] [00765076, 00765091] [00765095, 007650c0] [007650c4, 00765121] [00765125, 00765191] [00765195, 007651e1]]


/* WARNING: Removing unreachable block (ram,0x00765060) */
/* WARNING: Removing unreachable block (ram,0x00764f00) */

void FUN_00764b30(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar6;
  uint *puStack_d0;
  char *pcStack_cc;
  undefined8 *puStack_c8;
  char *pcStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  undefined4 local_90;
  uint uStack_8c;
  int local_88;
  uint local_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_5c;
  uint uStack_58;
  uint uStack_54;
  void *pvStack_4c;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6d30b;
  pvStack_14 = ExceptionList;
  local_b8 = 0xa00e14624;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  local_c0 = CONCAT44(0x764b7b,(uint *)local_c0);
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  local_b8 = 0x500e08720;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_c0 = CONCAT44(0x764b9e,(uint *)local_c0);
  FUN_00409350();
  local_b8 = CONCAT44(&local_a4,&local_84);
  local_c._0_1_ = 1;
  local_c0 = CONCAT44(0x764bb5,(uint *)local_c0);
  FUN_009a8ee0();
  local_c._0_1_ = 2;
  local_b8 = CONCAT44(0x764bc4,(uint)local_b8);
  iVar1 = FUN_00475500();
  local_c0 = *(undefined8 *)(iVar1 + 0x6c);
  local_b8 = *(undefined8 *)(iVar1 + 0x74);
  pcStack_c4 = (char *)0x764be7;
  uVar2 = FUN_009a9880();
  local_c = CONCAT31(local_c._1_3_,3);
  local_b8._4_4_ = &local_70;
  local_b8._0_4_ = 0x764c07;
  (**(code **)(**(int **)(local_88 + 0x36c) + 0x3c))();
  local_b8._0_4_ = 0xffffffff;
  local_c0 = (ulonglong)uVar2;
  pcStack_c4 = (char *)0x764c18;
  FUN_00408ed0();
  local_b8 = ZEXT48(local_b8._4_4_) << 0x20;
  local_c0 = CONCAT44(uVar2,0x764c25);
  FUN_00a5ecc0();
  if (0xf < uStack_40) {
    local_b8 = CONCAT44(local_b8._4_4_,uStack_54);
    local_c0 = CONCAT44(&UNK_00764c3a,(uint *)local_c0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
  local_b8._0_4_ = 0x764c5e;
  FUN_009adb70();
  if (local_84 != 0) {
    local_b8._0_4_ = 0x764c6f;
    FUN_009e6a80();
    local_b8 = CONCAT44(local_b8._4_4_,local_84);
    local_c0 = CONCAT44(&UNK_00764c79,(uint *)local_c0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (0xf < local_60) {
    local_b8 = CONCAT44(local_b8._4_4_,uStack_74);
    local_c0 = CONCAT44(&UNK_00764c98,(uint *)local_c0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  local_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  if (0xf < local_94) {
    local_b8 = CONCAT44(local_b8._4_4_,unaff_EBX);
    local_c0 = CONCAT44(&UNK_00764cc7,(uint *)local_c0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8._0_4_ = 0xe;
  local_94 = 0xf;
  uStack_98 = 0;
  local_c0 = 0xe145fc00764ce6;
  FUN_00409350();
  uVar2 = uStack_8c;
  puStack_10 = (undefined1 *)0x5;
  local_b8 = CONCAT44(local_b8._4_4_,&stack0xffffff58);
  local_c0 = CONCAT44(0x764d07,(uint *)local_c0);
  iVar1 = (**(code **)(**(int **)(uStack_8c + 0x36c) + 0x34))();
  local_c0._4_4_ = uVar2 + 0x10;
  local_c0._0_4_ = (uint *)0x764d16;
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_9c) {
    local_c0 = CONCAT44(local_c0._4_4_,unaff_EDI);
                    /* WARNING: Subroutine does not return */
    pcStack_c4 = &UNK_00764d32;
    FUN_00aae91b();
  }
  local_c0._0_4_ = (uint *)0xe;
  pcStack_c4 = "ok_host_button";
  uStack_9c = 0xf;
  uStack_a0 = 0;
  puStack_c8 = (undefined8 *)0x764d51;
  FUN_00409350();
  uStack_18 = 6;
  local_c0 = CONCAT44(local_c0._4_4_,&stack0xffffff50);
  pcStack_c4 = (char *)0x764d6e;
  iVar1 = (**(code **)(**(int **)(uVar2 + 0x36c) + 0x34))();
  pcStack_c4 = (char *)(uVar2 + 0x290);
  puStack_c8 = (undefined8 *)0x764d7f;
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))();
  uStack_20 = 0xffffffff;
  if (0xf < local_a4) {
    puStack_c8 = (undefined8 *)(uint)local_b8;
                    /* WARNING: Subroutine does not return */
    pcStack_cc = &UNK_00764d9b;
    FUN_00aae91b();
  }
  puStack_c8 = (undefined8 *)0xe;
  pcStack_cc = "ok_host_button";
  local_a4 = 0xf;
  local_b8 = local_b8 & 0xffffffffffffff00;
  puStack_d0 = (uint *)0x764dba;
  FUN_00409350();
  uStack_20 = 7;
  puStack_c8 = &local_b8;
  pcStack_cc = (char *)0x764dd7;
  iVar1 = (**(code **)(**(int **)(uVar2 + 0x36c) + 0x34))();
  pcStack_cc = (char *)(uVar2 + 0x10);
  puStack_d0 = (uint *)0x764de6;
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))();
  uStack_28 = 0xffffffff;
  if (0xf < unaff_ESI) {
    puStack_d0 = (uint *)local_c0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_d0 = (uint *)0xb;
  local_c0 = local_c0 & 0xffffffffffffff00;
  FUN_00409350();
  uStack_28 = 8;
  puStack_d0 = (uint *)0xe;
  uStack_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  FUN_00409350();
  uStack_28 = CONCAT31(uStack_28._1_3_,9);
  puStack_d0 = &uStack_8c;
  piVar3 = (int *)(**(code **)(**(int **)(uVar2 + 0x36c) + 0x34))();
  uStack_74 = FUN_009a8ee0(&local_a4);
  uStack_2c = 10;
  iVar1 = FUN_00475500();
  uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar1 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20),
                       *(undefined8 *)(iVar1 + 0x74));
  uStack_2c = 0xb;
  uVar6 = 0;
  (**(code **)(*piVar3 + 0xcc))(uVar4);
  if (uStack_64 < 0x10) {
    uStack_64 = 0xf;
    uStack_68 = 0;
    uStack_78 = uStack_78 & 0xffffff00;
    uStack_34 = CONCAT31(uStack_34._1_3_,0xc);
    FUN_009adb70();
    local_a4 = 0;
    uStack_a0 = 0;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_98);
    }
    uStack_34 = 0xffffffff;
    local_84 = 0xf;
    local_88 = 0;
    uStack_98 = uStack_98 & 0xffffff00;
    if (0xf < (uint)local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pcStack_cc);
    }
    local_b8 = CONCAT44(local_b8._4_4_,0xf);
    local_c0 = local_c0 & 0xffffffff;
    pcStack_cc = (char *)((uint)pcStack_cc & 0xffffff00);
    FUN_00409350("FE_MY_GAME",10);
    uStack_34 = 0xd;
    local_84 = 0xf;
    local_88 = 0;
    uStack_98 = uStack_98 & 0xffffff00;
    FUN_00409350(&DAT_00e1460c,4);
    uStack_34 = CONCAT31(uStack_34._1_3_,0xe);
    iVar1 = (**(code **)(*piRam0000036c + 0x40))(&uStack_98);
    uStack_80 = FUN_009a8ee0(&stack0xffffff50,&puStack_d0);
    uStack_38 = 0xf;
    iVar5 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),(int)*(undefined8 *)(iVar5 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20));
    uStack_38 = 0x10;
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x40))(uVar4);
    if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_80);
    }
    uStack_6c = 0xf;
    local_70 = 0;
    uStack_80 = uStack_80 & 0xffffff00;
    uStack_3c = CONCAT31(uStack_3c._1_3_,0x11);
    FUN_009adb70();
    if (uStack_8c < 0x10) {
      uStack_3c = 0xffffffff;
      uStack_8c = 0xf;
      local_90 = 0;
      uStack_a0 = uStack_a0 & 0xffffff00;
      if (0xf < (uint *)local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar6);
      }
      local_c0 = CONCAT44(local_c0._4_4_,0xf);
      pcStack_c4 = (char *)0x0;
      FUN_00409350();
      iVar1 = (uint)local_b8;
      uStack_3c = 0x12;
      (**(code **)(**(int **)((uint)local_b8 + 0x36c) + 0x40))(&stack0xffffff2c);
      FUN_009b6400();
      uStack_40 = 0xffffffff;
      if (pcStack_c4 < 0x10) {
        uStack_54 = 0xf;
        uStack_58 = 0;
        uStack_68 = uStack_68 & 0xffffff00;
        FUN_00409350(&DAT_00e1460c,4);
        uStack_40 = 0x13;
        iVar5 = (**(code **)(**(int **)(iVar1 + 0x36c) + 0x40))();
        *(undefined2 *)(iVar5 + 0x4c) = 1;
        uStack_44 = 0xffffffff;
        if (uStack_58 < 0x10) {
          uStack_58 = 0xf;
          local_5c = 0;
          uStack_6c = uStack_6c & 0xffffff00;
          (**(code **)(*(int *)(*(int *)(iVar1 + 0x36c) + 0x18) + 0x34))();
          (**(code **)(*(int *)(*(int *)(iVar1 + 0x368) + 0x18) + 0x38))();
          ExceptionList = pvStack_4c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_6c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_a0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_78);
}

