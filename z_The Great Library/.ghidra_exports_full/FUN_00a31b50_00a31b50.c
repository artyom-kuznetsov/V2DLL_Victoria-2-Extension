// FUN_00a31b50 @ 00a31b50 body=[[00a31b50, 00a31bf0] [00a31bf4, 00a31c61] [00a31c65, 00a31d2c] [00a31d30, 00a31f51] [00a31f55, 00a31f76] [00a31f7c, 00a32071] [00a32075, 00a3209e] [00a320a2, 00a32102] [00a32106, 00a32123] [00a32127, 00a3213d]]


/* WARNING: Removing unreachable block (ram,0x00a31faf) */
/* WARNING: Removing unreachable block (ram,0x00a31fc2) */
/* WARNING: Removing unreachable block (ram,0x00a31fe9) */
/* WARNING: Removing unreachable block (ram,0x00a31fdc) */
/* WARNING: Removing unreachable block (ram,0x00a31feb) */
/* WARNING: Removing unreachable block (ram,0x00a31fb7) */
/* WARNING: Removing unreachable block (ram,0x00a3200e) */
/* WARNING: Removing unreachable block (ram,0x00a32017) */
/* WARNING: Removing unreachable block (ram,0x00a3201b) */
/* WARNING: Removing unreachable block (ram,0x00a32049) */
/* WARNING: Removing unreachable block (ram,0x00a3204b) */
/* WARNING: Removing unreachable block (ram,0x00a32065) */
/* WARNING: Removing unreachable block (ram,0x00a32075) */
/* WARNING: Removing unreachable block (ram,0x00a320ed) */
/* WARNING: Removing unreachable block (ram,0x00a320f5) */
/* WARNING: Removing unreachable block (ram,0x00a320fb) */
/* WARNING: Removing unreachable block (ram,0x00a32106) */
/* WARNING: Removing unreachable block (ram,0x00a3211e) */

void FUN_00a31b50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int in_ECX;
  int unaff_ESI;
  undefined4 *puStack_160;
  undefined *puStack_15c;
  uint *puStack_158;
  undefined1 *puStack_154;
  undefined4 *puVar10;
  int *piStack_144;
  uint auStack_134 [3];
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 *puStack_118;
  undefined4 *puStack_114;
  uint uStack_110;
  undefined1 local_10c [12];
  undefined4 uStack_100;
  uint local_fc;
  undefined4 local_f8;
  undefined1 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 *puStack_d8;
  undefined1 auStack_d4 [12];
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 *apuStack_bc [4];
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4e50b;
  local_14 = ExceptionList;
  puStack_154 = (undefined1 *)0xa31b80;
  ExceptionList = &local_14;
  iVar5 = FUN_00a31760();
  if ((iVar5 == in_ECX) || (in_ECX == 0)) {
    puStack_154 = (undefined1 *)0xa31b95;
    FUN_00a31760();
    puStack_154 = (undefined1 *)0x9;
    puStack_158 = (uint *)0xe4021c;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = 0;
    puStack_15c = (undefined *)0xa31bbd;
    FUN_00409350();
    local_c = 0;
    puStack_154 = local_10c;
    puStack_158 = (uint *)0xa31bd3;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 0x48))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < local_fc) {
      puStack_158 = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
      puStack_15c = &UNK_00a31bf1;
      FUN_00aae91b();
    }
    puStack_158 = (uint *)0x4;
    puStack_15c = &DAT_00dede68;
    local_fc = 0xf;
    uStack_100 = 0;
    uStack_110 = uStack_110 & 0xffffff00;
    uStack_120 = 0xf;
    uStack_124 = 0;
    auStack_134[0] = auStack_134[0] & 0xffffff00;
    puStack_160 = (undefined4 *)0xa31c23;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x1;
    puStack_158 = auStack_134;
    puStack_15c = (undefined *)0xa31c44;
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x150) + 4))();
    local_14 = (void *)0xffffffff;
    if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
      puStack_160 = (undefined4 *)&UNK_00a31c62;
      FUN_00aae91b();
    }
    uStack_128 = 0;
    uStack_124 = 0xf;
    puStack_160 = (undefined4 *)0xa31c8b;
    puStack_15c = (undefined *)(iVar5 + 0x6c);
    iVar6 = FUN_00973bd0();
    if (iVar6 == 0) {
      puStack_160 = (undefined4 *)0xa31c9e;
      puStack_15c = (undefined *)(iVar5 + 0x6c);
      FUN_00973bd0();
    }
    puStack_f4 = (undefined1 *)(uint)*(ushort *)(iVar5 + 0xa4);
    uStack_ec = *(undefined4 *)(iVar5 + 0xb0);
    piStack_e8 = *(int **)(iVar5 + 0xb4);
    puStack_15c = (undefined *)0x4;
    puStack_160 = (undefined4 *)&DAT_00e40228;
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    auStack_d4[0] = 0;
    FUN_00409350();
    local_14 = (void *)0x2;
    puStack_15c = auStack_d4;
    puStack_160 = (undefined4 *)0xa31d10;
    piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x30) + 0x7c))();
    piStack_e8 = piVar7;
    if (0xf < uStack_c4) {
      puStack_160 = puStack_d8;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    puStack_d8 = (undefined4 *)((uint)puStack_d8 & 0xffffff00);
    auStack_134[0] = 0;
    uStack_18 = 3;
    puStack_160 = (undefined4 *)0xa31d6a;
    piVar8 = (int *)(**(code **)(*piVar7 + 0x2c))();
    local_fc = *(int *)(unaff_ESI + 0x10);
    puVar1 = (undefined4 *)*piVar8;
    puVar10 = (undefined4 *)0x0;
    puVar2 = puStack_118;
    puVar3 = puStack_114;
    uVar9 = uStack_110;
    uVar4 = uStack_e4;
    if (0 < (int)local_fc) {
      do {
        uStack_e4 = uVar4;
        uStack_110 = uVar9;
        puStack_114 = puVar3;
        puStack_118 = puVar2;
        puStack_160 = puVar10;
        FUN_0099e240();
        piVar8 = (int *)FUN_00868600();
        iVar5 = 0;
        if ((int *)*piVar8 != (int *)0x0) {
          iVar5 = *(int *)*piVar8;
        }
        uVar9 = piVar8[2];
        if (*(uint *)(iVar5 + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)(iVar5 + 8);
        }
        if (1 < *(int *)(*(int *)(*(int *)(iVar5 + 4) + uVar9 * 4) + 0x10)) {
          puStack_160 = puVar10;
          FUN_0099e240();
          FUN_00868600();
          puStack_160 = puVar10;
          FUN_0099e240();
          FUN_00868600();
        }
        uStack_e0 = uStack_f0;
        uStack_dc = uStack_ec;
        uStack_a8 = 0xf;
        uStack_ac = 0;
        apuStack_bc[0] = (undefined4 *)((uint)apuStack_bc[0] & 0xffffff00);
        uStack_18._0_1_ = 4;
        puStack_160 = puVar10;
        FUN_0099e240();
        piVar8 = (int *)FUN_00868600();
        if ((int *)*piVar8 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)*piVar8;
        }
        uVar9 = piVar8[2];
        if (*(uint *)(iVar5 + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)(iVar5 + 8);
        }
        puStack_160 = (undefined4 *)0x1;
        (**(code **)(*piStack_144 + 0x38))
                  (*(undefined4 *)(*(int *)(iVar5 + 4) + uVar9 * 4),apuStack_bc,local_f8,200000,
                   &uStack_e0,0);
        puStack_160 = (undefined4 *)0xa;
        puStack_160 = (undefined4 *)FUN_00989510(&puStack_118);
        uStack_18._0_1_ = 5;
        FUN_004134a0();
        uStack_18._0_1_ = 4;
        puStack_160 = puStack_118;
        if (puStack_118 != (undefined4 *)0x0) {
          while( true ) {
            if (puStack_160 == puStack_114) {
              puStack_160 = puStack_118;
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            if (0xf < (uint)puStack_160[5]) break;
            puStack_160[5] = 0xf;
            puStack_160[4] = 0;
            *(undefined1 *)puStack_160 = 0;
            puStack_160 = puStack_160 + 7;
          }
          puStack_160 = (undefined4 *)*puStack_160;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puStack_118 = (undefined4 *)0x0;
        puVar2 = puStack_118;
        puStack_114 = (undefined4 *)0x0;
        puVar3 = puStack_114;
        uStack_110 = 0;
        uVar9 = uStack_110;
        uStack_e4 = 0;
        uStack_110 = 0;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x0;
        uStack_18 = CONCAT31(uStack_18._1_3_,3);
        if (0xf < uStack_a8) {
          puStack_160 = apuStack_bc[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        uVar4 = 0;
      } while ((int)puVar10 < (int)local_fc);
    }
    if (puVar1 != (undefined4 *)0x0) {
      puStack_f4 = (undefined1 *)&puStack_160;
      puStack_160 = puVar1;
      (**(code **)(*piVar7 + 0x60))();
    }
    puStack_160 = (undefined4 *)0xa320e0;
    (**(code **)(*piVar7 + 0x78))();
    puStack_160 = (undefined4 *)0xa320e9;
    (**(code **)(*piVar7 + 0x6c))();
  }
  ExceptionList = local_14;
  return;
}

