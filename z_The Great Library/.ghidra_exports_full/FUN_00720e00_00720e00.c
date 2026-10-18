// FUN_00720e00 @ 00720e00 body=[[00720e00, 00720e80] [00720e84, 00720ee4] [00720ee8, 00720f48] [00720f4c, 00720fbb] [00720fbf, 00721142]]


void FUN_00720e00(void)

{
  int *piVar1;
  int iVar2;
  uint in_ECX;
  undefined4 uVar3;
  int unaff_EDI;
  float10 fVar4;
  undefined8 uVar5;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  char *pcStack_c4;
  uint *puStack_c0;
  char *pcStack_bc;
  uint *puStack_b8;
  undefined1 *puStack_b4;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  uint local_8c [3];
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined1 auStack_74 [12];
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_54;
  undefined1 local_50 [12];
  uint uStack_44;
  uint local_40 [3];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  void *pvStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bece;
  pvStack_14 = ExceptionList;
  puStack_b4 = (undefined1 *)0xd;
  uVar3 = 0;
  puStack_b8 = (uint *)0xe11804;
  local_40[1] = 0xf;
  local_40[0] = 0;
  local_50[0] = 0;
  pcStack_bc = (char *)0x720e4d;
  ExceptionList = &pvStack_14;
  local_8c[0] = in_ECX;
  FUN_00409350();
  local_c = 0;
  puStack_b4 = local_50;
  puStack_b8 = (uint *)0x720e63;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_40[0]) {
    puStack_b8 = (uint *)uStack_54;
                    /* WARNING: Subroutine does not return */
    pcStack_bc = &UNK_00720e81;
    FUN_00aae91b();
  }
  puStack_b8 = (uint *)0xe;
  pcStack_bc = "sell_stockpile";
  local_40[0] = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_78 = 0xf;
  uStack_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  puStack_c0 = (uint *)0x720eac;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1;
  puStack_b8 = local_8c;
  pcStack_bc = (char *)0x720ec5;
  (**(code **)(*piVar1 + 0x48))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    puStack_c0 = (uint *)&UNK_00720ee5;
    FUN_00aae91b();
  }
  pcStack_bc = (char *)0xb;
  puStack_c0 = (uint *)0xe11850;
  uStack_7c = 0xf;
  uStack_80 = 0;
  uStack_60 = 0xf;
  uStack_64 = 0;
  auStack_74[0] = 0;
  pcStack_c4 = (char *)0x720f10;
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  pcStack_bc = auStack_74;
  puStack_c0 = (uint *)0x720f29;
  (**(code **)(*piVar1 + 0x4c))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_64) {
    puStack_c0 = (uint *)uStack_78;
                    /* WARNING: Subroutine does not return */
    pcStack_c4 = &UNK_00720f49;
    FUN_00aae91b();
  }
  puStack_c0 = (uint *)0x8;
  pcStack_c4 = "automate";
  uStack_64 = 0xf;
  uStack_68 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  uStack_2c = 0xf;
  uStack_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  puStack_c8 = (undefined *)0x720f80;
  FUN_00409350();
  uStack_18 = 3;
  puStack_c0 = local_40;
  pcStack_c4 = (char *)0x720f99;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_30) {
    pcStack_c4 = (char *)uStack_44;
                    /* WARNING: Subroutine does not return */
    puStack_c8 = &UNK_00720fbc;
    FUN_00aae91b();
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  pcStack_c4 = (char *)0x720fe0;
  fVar4 = (float10)(**(code **)(*(int *)(unaff_EDI + 0x54) + 0x10))();
  puStack_b4 = (undefined1 *)(float)fVar4;
  pcStack_c4 = (char *)0x720fef;
  fVar4 = (float10)FUN_00b350e0();
  puStack_b4 = (undefined1 *)(((float)fVar4 / 2000.0) * (float)puStack_b4);
  pcStack_c4 = (char *)0x72101e;
  fVar4 = (float10)FUN_00b3522c();
  puStack_b4 = (undefined1 *)((float)fVar4 - 1.0);
  pcStack_c4 = (char *)0x721079;
  uVar5 = FUN_00b31c36();
  pcStack_c4 = (char *)0x58;
  puStack_c8 = (undefined *)0x721084;
  puStack_b4 = (undefined1 *)FUN_00aae9af();
  uStack_1c = 4;
  if (puStack_b4 != (undefined1 *)0x0) {
    uStack_a4 = CONCAT31((int3)((uint)iVar2 >> 8),*(int *)(iVar2 + 0x6c) == 1);
    pcStack_c4 = (char *)uStack_a4;
    puStack_c8 = (undefined *)(uint)(*(int *)(puStack_a0 + 0x6c) != 1);
    puStack_a0 = (undefined1 *)&uStack_d0;
    uStack_d0 = uVar5;
    uVar3 = FUN_0058c170(puStack_b4,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60),
                         *(undefined4 *)(*(int *)(iStack_9c + 0x6c) + 8));
  }
  uStack_1c = 0xffffffff;
  pcStack_c4 = (char *)0x721118;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  puStack_c8 = (undefined *)0x721123;
  pcStack_c4 = (char *)uVar3;
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
  *(undefined4 *)(puStack_a0 + 0x70) = 2;
  ExceptionList = pvStack_28;
  return;
}

