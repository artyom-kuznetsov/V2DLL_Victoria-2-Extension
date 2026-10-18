// FUN_00821190 @ 00821190  (requested 00821190, first bytes: 55 8B EC 6A FF 68 DC 0A)


int FUN_00821190(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined1 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  float fVar11;
  ulonglong in_XMM0_Qa;
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [60];
  undefined4 uStack_c8;
  int *piStack_c4;
  undefined1 *puStack_c0;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 *local_40;
  undefined1 *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba0adc;
  local_10 = ExceptionList;
  puStack_c0 = (undefined1 *)0x2d;
  piStack_c4 = (int *)0x8211bd;
  ExceptionList = &local_10;
  FUN_008a8650();
  local_5c = *(undefined4 *)(in_ECX + 0x30);
  local_58 = *(undefined4 *)(in_ECX + 0x34);
  puStack_c0 = (undefined1 *)0x8211d7;
  FUN_008a88d0();
  local_a0 = *(undefined4 *)(in_ECX + 0x34);
  local_a4 = *(undefined4 *)(in_ECX + 0x30);
  local_40 = local_ac;
  if (DAT_01319730 == 0) {
    puStack_c0 = (undefined1 *)0x38;
    piStack_c4 = (int *)0x821202;
    puStack_c0 = (undefined1 *)FUN_00aae9af();
    local_8 = 0;
    local_14 = (float)puStack_c0;
    if (puStack_c0 == (undefined1 *)0x0) {
      uVar3 = 0;
    }
    else {
      piStack_c4 = (int *)0x821219;
      uVar3 = FUN_008750a0();
    }
    local_8 = 0xffffffff;
    piStack_c4 = (int *)0x82122a;
    puStack_c0 = (undefined1 *)uVar3;
    FUN_00876010();
  }
  if ((*(int *)(DAT_01319730 + 0x2c) - *(int *)(DAT_01319730 + 0x28) & 0xfffffffcU) == 0) {
LAB_00821350:
    if (DAT_01319730 == 0) {
      puStack_c0 = (undefined1 *)0x38;
      piStack_c4 = (int *)0x82135b;
      puStack_c0 = (undefined1 *)FUN_00aae9af();
      local_8 = 4;
      local_14 = (float)puStack_c0;
      if (puStack_c0 == (undefined1 *)0x0) {
        uVar3 = 0;
      }
      else {
        piStack_c4 = (int *)0x821372;
        uVar3 = FUN_008750a0();
      }
      local_8 = 0xffffffff;
      piStack_c4 = (int *)0x821383;
      puStack_c0 = (undefined1 *)uVar3;
      FUN_00876010();
    }
    if ((*(int *)(DAT_01319730 + 0x10) - *(int *)(DAT_01319730 + 0xc) & 0xfffffffcU) == 0) {
      ExceptionList = local_10;
      return DAT_01319730;
    }
    if (DAT_01319730 == 0) {
      puStack_c0 = (undefined1 *)0x38;
      piStack_c4 = (int *)0x8213a5;
      puStack_c0 = (undefined1 *)FUN_00aae9af();
      local_8 = 5;
      local_14 = (float)puStack_c0;
      if (puStack_c0 == (undefined1 *)0x0) {
        uVar3 = 0;
      }
      else {
        piStack_c4 = (int *)0x8213bc;
        uVar3 = FUN_008750a0();
      }
      local_8 = 0xffffffff;
      piStack_c4 = (int *)0x8213cd;
      puStack_c0 = (undefined1 *)uVar3;
      FUN_00876010();
    }
    iVar5 = DAT_01319730;
    puVar10 = *(undefined4 **)(DAT_01319730 + 0xc);
    puVar1 = (uint *)(DAT_01319730 + 0xc);
    iVar4 = DAT_01319730;
    do {
      do {
        do {
          do {
            do {
              if (puVar10 < (undefined4 *)*puVar1) {
                ExceptionList = local_10;
                return iVar4;
              }
              if (*(undefined4 **)(iVar5 + 0x10) <= puVar10) {
                ExceptionList = local_10;
                return iVar4;
              }
              piVar8 = (int *)*puVar10;
              puVar10 = puVar10 + 1;
              puStack_c0 = (undefined1 *)0x8213f7;
              iVar4 = (**(code **)(*piVar8 + 0x18))();
            } while ((char)iVar4 == '\0');
            puStack_c0 = (undefined1 *)0x821404;
            iVar4 = (**(code **)(*piVar8 + 0x18))();
          } while ((char)iVar4 == '\0');
          puStack_c0 = local_64;
          piStack_c4 = (int *)0x821417;
          iVar4 = (**(code **)(piVar8[9] + 0x18))();
        } while ((char)iVar4 == '\0');
        puStack_c0 = local_64;
        piStack_c4 = (int *)0x82142a;
        iVar4 = (**(code **)(piVar8[0x10] + 0x18))();
        fVar11 = (float)in_XMM0_Qa;
      } while ((char)iVar4 == '\0');
      puStack_c0 = local_64;
      uStack_c8 = 0x821438;
      piStack_c4 = piVar8;
      FUN_00874ea0();
      local_14 = fVar11 * 100.0;
      in_XMM0_Qa = (ulonglong)(uint)local_14;
      local_18 = (undefined1 *)(int)ROUND(local_14);
      puStack_c0 = (undefined1 *)0x821458;
      iVar6 = FUN_00ab047b();
      iVar4 = iVar6 / 100;
    } while ((int)local_18 <= iVar6 % 100);
    puStack_c0 = (undefined1 *)0xa0;
    piStack_c4 = (int *)0x821473;
    iVar5 = FUN_00aae9af();
    uVar7 = 6;
    local_8 = 6;
    local_14 = (float)iVar5;
    if (iVar5 == 0) {
LAB_008214ce:
      uVar3 = 0;
      goto LAB_008214d0;
    }
    local_18 = auStack_104;
    uStack_108 = 0x821497;
    FUN_008a88d0();
    local_8._0_1_ = 7;
  }
  else {
    if (DAT_01319730 == 0) {
      puStack_c0 = (undefined1 *)0x38;
      piStack_c4 = (int *)0x82124c;
      puStack_c0 = (undefined1 *)FUN_00aae9af();
      local_8 = 1;
      local_14 = (float)puStack_c0;
      if (puStack_c0 == (undefined1 *)0x0) {
        uVar3 = 0;
      }
      else {
        piStack_c4 = (int *)0x821263;
        uVar3 = FUN_008750a0();
      }
      local_8 = 0xffffffff;
      piStack_c4 = (int *)0x821274;
      puStack_c0 = (undefined1 *)uVar3;
      FUN_00876010();
    }
    iVar5 = DAT_01319730;
    piVar9 = *(int **)(DAT_01319730 + 0x28);
    puVar1 = (uint *)(DAT_01319730 + 0x28);
    do {
      do {
        do {
          do {
            do {
              if ((piVar9 < (int *)*puVar1) || (*(int **)(iVar5 + 0x2c) <= piVar9))
              goto LAB_00821350;
              piVar8 = (int *)*piVar9;
              piVar9 = piVar9 + 1;
              puStack_c0 = (undefined1 *)0x82129e;
              cVar2 = (**(code **)(*piVar8 + 0x18))();
            } while (cVar2 == '\0');
            puStack_c0 = (undefined1 *)0x8212ab;
            cVar2 = (**(code **)(*piVar8 + 0x18))();
          } while (cVar2 == '\0');
          puStack_c0 = local_64;
          piStack_c4 = (int *)0x8212be;
          cVar2 = (**(code **)(piVar8[9] + 0x18))();
        } while (cVar2 == '\0');
        puStack_c0 = local_64;
        piStack_c4 = (int *)0x8212d1;
        cVar2 = (**(code **)(piVar8[0x10] + 0x18))();
        fVar11 = (float)in_XMM0_Qa;
      } while (cVar2 == '\0');
      puStack_c0 = local_64;
      uStack_c8 = 0x8212df;
      piStack_c4 = piVar8;
      FUN_00874ea0();
      local_14 = fVar11 * 100.0;
      in_XMM0_Qa = (ulonglong)(uint)local_14;
      local_18 = (undefined1 *)(int)ROUND(local_14);
      puStack_c0 = (undefined1 *)0x8212ff;
      iVar4 = FUN_00ab047b();
    } while ((int)local_18 <= iVar4 % 100);
    puStack_c0 = (undefined1 *)0xa0;
    piStack_c4 = (int *)0x82131a;
    iVar5 = FUN_00aae9af();
    uVar7 = 2;
    local_8 = 2;
    local_14 = (float)iVar5;
    if (iVar5 == 0) goto LAB_008214ce;
    local_18 = auStack_104;
    uStack_108 = 0x821342;
    FUN_008a88d0();
    local_8._0_1_ = 3;
  }
  local_18 = auStack_120;
  uStack_10c = 0xf;
  uStack_110 = 0;
  auStack_120[0] = 0;
  FUN_00408ed0(piVar8 + 2,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,uVar7);
  uVar3 = FUN_00905b30(iVar5);
LAB_008214d0:
  local_8 = 0xffffffff;
  puStack_c0 = (undefined1 *)0x8214ea;
  iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  piStack_c4 = (int *)0x8214f5;
  puStack_c0 = (undefined1 *)uVar3;
  iVar5 = (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
  ExceptionList = local_10;
  return iVar5;
}

