// FUN_00625000 @ 00625000 body=[[00625000, 0062505e] [00625060, 00625124] [00625128, 00625149] [0062514d, 00625179] [0062517d, 0062524e] [00625252, 006252c7] [006252cb, 00625345] [00625349, 006253d4] [006253d8, 00625461] [00625465, 00625496] [0062549a, 00625545] [00625549, 00625578] [0062557c, 00625624] [00625628, 00625657] [0062565b, 006256fb] [006256ff, 00625730] [00625734, 00625831] [00625835, 00625864] [00625868, 006258cf] [006258d3, 00625935] [00625939, 006259fa] [006259fe, 00625a42]]


/* WARNING: Removing unreachable block (ram,0x006256f2) */
/* WARNING: Removing unreachable block (ram,0x0062553c) */
/* WARNING: Removing unreachable block (ram,0x00625458) */
/* WARNING: Removing unreachable block (ram,0x0062561b) */
/* WARNING: Removing unreachable block (ram,0x00625828) */
/* WARNING: Removing unreachable block (ram,0x006259bc) */
/* WARNING: Removing unreachable block (ram,0x00625140) */
/* WARNING: Removing unreachable block (ram,0x00625245) */
/* WARNING: Removing unreachable block (ram,0x006259f5) */
/* WARNING: Removing unreachable block (ram,0x00625170) */

void FUN_00625000(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 ***pppuVar9;
  int ***pppiVar10;
  char ***pppcVar11;
  uint uVar12;
  undefined4 uVar13;
  uint unaff_ESI;
  undefined8 uVar14;
  char ***pppcStack_108;
  int ***pppiStack_104;
  int ***pppiStack_100;
  int ***pppiStack_fc;
  char ***pppcStack_f8;
  undefined1 ***pppuStack_f4;
  char ***pppcStack_f0;
  int ***pppiStack_ec;
  char ***pppcStack_e8;
  undefined1 ***pppuStack_e4;
  undefined1 ***pppuVar15;
  uint uVar16;
  uint uStack_bc;
  uint uStack_8c;
  uint uStack_84;
  int local_80;
  int *local_44;
  undefined4 uStack_40;
  int local_3c;
  char local_38 [12];
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b953ae;
  local_14 = ExceptionList;
  local_44 = (int *)(DAT_012588e8 + 0xbe0);
  local_3c = *(int *)(DAT_012588e8 + 0xbe4) - *(int *)(DAT_012588e8 + 0xbe0) >> 2;
  local_80 = 0;
  ExceptionList = &local_14;
  if (0 < local_3c) {
    do {
      iVar2 = *(int *)(*local_44 + local_80 * 4);
      local_c = 0;
      pcVar5 = __itoa(local_80,local_38,10);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_c = 1;
      FUN_00409350();
      local_c._0_1_ = 2;
      uVar6 = FUN_00988f20();
      local_c = CONCAT31(local_c._1_3_,3);
      piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x44))();
      if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_10 = (undefined1 *)0xffffffff;
      uStack_bc = uStack_bc & 0xffffff00;
      piVar8 = (int *)(**(code **)(*piVar7 + 0xec))();
      iVar3 = *piVar8;
      pppuVar9 = (undefined1 ***)FUN_0052fc10();
      (**(code **)(iVar3 + 0x150))();
      (**(code **)(*piVar7 + 0xd4))();
      uStack_18 = 4;
      pppuStack_e4 = (undefined1 ***)0x6251f8;
      pcVar5 = __itoa(0xf,(char *)&local_44,10);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      uStack_18 = 5;
      piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
      uStack_1c = 0xffffffff;
      uStack_8c = 0;
      pppuStack_e4 = (undefined1 ***)0x625283;
      FUN_00409350();
      uStack_1c = 6;
      piVar8 = (int *)(**(code **)(*piVar7 + 0x34))();
      pppuVar15 = *(undefined1 ****)(iVar2 + 0x20);
      pppuStack_e4 = (undefined1 ***)0x6252ac;
      (**(code **)(*piVar8 + 0xd4))();
      pppuStack_e4 = pppuVar9;
      uStack_24 = 0xffffffff;
      if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
        pppcStack_e8 = (char ***)&UNK_006252c8;
        FUN_00aae91b();
      }
      pppuStack_e4 = (undefined1 ***)0xc;
      pppcStack_e8 = (char ***)0xe04928;
      pppiStack_ec = (int ***)0x6252ec;
      FUN_00409350();
      uStack_24 = 7;
      pppuStack_e4 = (undefined1 ***)&stack0xffffff30;
      pppcStack_e8 = (char ***)0x625305;
      piVar8 = (int *)(**(code **)(*piVar7 + 0x34))();
      pppcStack_e8 = (char ***)0x625311;
      pppiVar10 = (int ***)(**(code **)(*piVar8 + 0xec))();
      ppiVar4 = *pppiVar10;
      pppcStack_e8 = (char ***)0x62531e;
      pppcStack_e8 = (char ***)FUN_0052fc10();
      pppiStack_ec = (int ***)0x62532b;
      (*(code *)ppiVar4[0x54])();
      pppiStack_ec = pppiVar10;
      uStack_2c = 0xffffffff;
      if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
        pppcStack_f0 = (char ***)&UNK_00625346;
        FUN_00aae91b();
      }
      pppiStack_ec = (int ***)0xd;
      pppcStack_f0 = (char ***)0xe04c08;
      if (*(char *)(iVar2 + 0x120) == '\0') {
        pppuStack_f4 = (undefined1 ***)0x625399;
        FUN_00409350();
        uStack_2c = 9;
        pppiStack_ec = (int ***)&stack0xffffff28;
        pppcStack_f0 = (char ***)0x6253b2;
        piVar8 = (int *)(**(code **)(*piVar7 + 0x44))();
        pppcStack_f0 = (char ***)0x1;
      }
      else {
        pppuStack_f4 = (undefined1 ***)0x625377;
        FUN_00409350();
        uStack_2c = 8;
        pppiStack_ec = (int ***)&stack0xffffff28;
        pppcStack_f0 = (char ***)0x625390;
        piVar8 = (int *)(**(code **)(*piVar7 + 0x44))();
        pppcStack_f0 = (char ***)0x2;
      }
      pppuStack_f4 = (undefined1 ***)0x6253bd;
      (**(code **)(*piVar8 + 0x48))();
      pppuStack_f4 = pppuVar15;
      local_38[4] = -1;
      local_38[5] = -1;
      local_38[6] = -1;
      local_38[7] = -1;
      if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
        pppcStack_f8 = (char ***)&UNK_006253d5;
        FUN_00aae91b();
      }
      pppuStack_f4 = (undefined1 ***)0xc;
      pppcStack_f8 = (char ***)0xdf9b58;
      uVar6 = 0;
      pppiStack_fc = (int ***)0x6253fd;
      FUN_00409350();
      local_38[4] = '\n';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      pppuStack_f4 = (undefined1 ***)0x625413;
      pppiVar10 = (int ***)FUN_004f97a0();
      local_38[4] = 0xb;
      pppuStack_f4 = (undefined1 ***)&stack0xffffff20;
      pppcStack_f8 = (char ***)0x62542b;
      pppcStack_e8 = (char ***)(**(code **)(*piVar7 + 0x3c))();
      pppcStack_f8 = (char ***)0xffffffff;
      pppiStack_fc = (int ***)0x0;
      pppiStack_104 = (int ***)0x62543f;
      pppiStack_100 = pppiVar10;
      FUN_00408ed0();
      pppcStack_f8 = (char ***)0x0;
      pppiStack_100 = (int ***)0x625451;
      pppiStack_fc = pppiVar10;
      FUN_00a5ecc0();
      local_38[0] = -1;
      local_38[1] = -1;
      local_38[2] = -1;
      local_38[3] = -1;
      if (0xf < uVar6) {
        pppcStack_f8 = pppuStack_e4;
                    /* WARNING: Subroutine does not return */
        pppiStack_fc = (int ***)&UNK_00625497;
        FUN_00aae91b();
      }
      pppcStack_f8 = (char ***)0xb;
      pppiStack_fc = (int ***)0xe07000;
      uVar6 = 0;
      pppuStack_e4 = (undefined1 ***)((uint)pppuStack_e4 & 0xffffff00);
      pppiStack_100 = (int ***)0x6254bb;
      FUN_00409350();
      local_38[0] = '\f';
      local_38[1] = '\0';
      local_38[2] = '\0';
      local_38[3] = '\0';
      pppcStack_f8 = (char ***)0x0;
      pppcStack_e8 = (char ***)&pppiStack_fc;
      pppiStack_fc = (int ***)(*(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0));
      pppiStack_100 = (int ***)&stack0xffffff38;
      pppiStack_104 = (int ***)0x6254f3;
      pppiVar10 = (int ***)FUN_00988a50();
      local_38[0] = 0xd;
      pppcStack_f8 = (char ***)&pppuStack_e4;
      pppiStack_fc = (int ***)0x62550b;
      pppiStack_ec = (int ***)(**(code **)(*piVar7 + 0x3c))();
      pppiStack_fc = (int ***)0xffffffff;
      pppiStack_100 = (int ***)0x0;
      pppcStack_108 = (char ***)0x62551f;
      pppiStack_104 = pppiVar10;
      FUN_00408ed0();
      pppiStack_fc = (int ***)0x0;
      pppiStack_104 = (int ***)0x625531;
      pppiStack_100 = pppiVar10;
      FUN_00a5ecc0();
      local_3c = 0xffffffff;
      if (0xf < uVar6) {
        pppiStack_fc = (int ***)pppcStack_e8;
                    /* WARNING: Subroutine does not return */
        pppiStack_100 = (int ***)&UNK_00625579;
        FUN_00aae91b();
      }
      pppiStack_fc = (int ***)0xb;
      pppiStack_100 = (int ***)0xe06b18;
      uVar6 = 0;
      pppcStack_e8 = (char ***)((uint)pppcStack_e8 & 0xffffff00);
      pppiStack_104 = (int ***)0x6255a1;
      FUN_00409350();
      pppiStack_ec = (int ***)&pppiStack_100;
      local_3c = 0xe;
      pppiStack_100 = *(int ****)(iVar2 + 0x1a0);
      pppiStack_fc = *(int ****)(iVar2 + 0x1a4);
      pppiStack_104 = (int ***)0x0;
      pppcStack_108 = (char ***)&stack0xffffff34;
      pppiVar10 = (int ***)FUN_00988bb0();
      local_3c = CONCAT31(local_3c._1_3_,0xf);
      pppiStack_fc = (int ***)&pppcStack_e8;
      pppiStack_100 = (int ***)0x6255ea;
      pppcStack_f0 = (char ***)(**(code **)(*piVar7 + 0x3c))();
      pppiStack_100 = (int ***)0xffffffff;
      pppiStack_104 = (int ***)0x0;
      pppcStack_108 = (char ***)pppiVar10;
      FUN_00408ed0();
      pppiStack_100 = (int ***)0x0;
      pppcStack_108 = (char ***)0x625610;
      pppiStack_104 = pppiVar10;
      FUN_00a5ecc0();
      uStack_40 = 0xffffffff;
      uStack_bc = 0;
      if (0xf < uVar6) {
        pppiStack_100 = pppiStack_ec;
                    /* WARNING: Subroutine does not return */
        pppiStack_104 = (int ***)&UNK_00625658;
        FUN_00aae91b();
      }
      pppiStack_100 = (int ***)0xb;
      pppiStack_104 = (int ***)0xe06b24;
      uVar6 = 0;
      pppiStack_ec = (int ***)((uint)pppiStack_ec & 0xffffff00);
      pppcStack_108 = (char ***)0x625680;
      FUN_00409350();
      pppcStack_f0 = (char ***)&pppiStack_104;
      uStack_40 = 0x10;
      pppiStack_104 = *(int ****)(iVar2 + 0x198);
      pppiStack_100 = *(int ****)(iVar2 + 0x19c);
      pppcStack_108 = (char ***)0x0;
      pppcVar11 = (char ***)FUN_00988bb0(&stack0xffffff30);
      uStack_40 = CONCAT31(uStack_40._1_3_,0x11);
      pppiStack_100 = (int ***)&pppiStack_ec;
      pppiStack_104 = (int ***)0x6256c5;
      pppuStack_f4 = (undefined1 ***)(**(code **)(*piVar7 + 0x3c))();
      pppiStack_104 = (int ***)0xffffffff;
      pppcStack_108 = (char ***)0x0;
      FUN_00408ed0(pppcVar11);
      pppiStack_104 = (int ***)0x0;
      pppcStack_108 = pppcVar11;
      FUN_00a5ecc0();
      local_44 = (int *)0xffffffff;
      if (0xf < uVar6) {
        pppiStack_104 = (int ***)pppcStack_f0;
                    /* WARNING: Subroutine does not return */
        pppcStack_108 = (char ***)&UNK_00625731;
        FUN_00aae91b();
      }
      pppiStack_104 = (int ***)0x8;
      pppcStack_108 = (char ***)0xe0700c;
      uVar16 = 0;
      pppcStack_f0 = (char ***)((uint)pppcStack_f0 & 0xffffff00);
      FUN_00409350();
      local_44 = (int *)0x12;
      uVar6 = *(uint *)(iVar2 + 0x198);
      uStack_84 = *(uint *)(iVar2 + 0x19c);
      uVar12 = *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0);
      pppuStack_f4 = (undefined1 ***)&pppcStack_108;
      uVar14 = __alldiv(uVar12 * 0x40000000,
                        (((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11) << 0xf |
                        (uVar12 & 0x1ffff) >> 2,0x1f40000,0);
      uVar12 = (uint)uVar14 + *(uint *)(iVar2 + 0x1a0);
      pppcStack_108 = (char ***)(uVar12 + uVar6);
      pppiStack_104 =
           (int ***)((int)((ulonglong)uVar14 >> 0x20) + *(int *)(iVar2 + 0x1a4) +
                     (uint)CARRY4((uint)uVar14,*(uint *)(iVar2 + 0x1a0)) + uStack_84 +
                    (uint)CARRY4(uVar12,uVar6));
      uVar13 = FUN_00988bb0(&stack0xffffff2c,0);
      local_44 = (int *)CONCAT31(local_44._1_3_,0x13);
      pppiStack_104 = (int ***)&pppcStack_f0;
      pppcStack_108 = (char ***)0x6257f7;
      pppcStack_f8 = (char ***)(**(code **)(*piVar7 + 0x3c))();
      pppcStack_108 = (char ***)0xffffffff;
      FUN_00408ed0(uVar13,0);
      pppcStack_108 = (char ***)0x0;
      FUN_00a5ecc0(uVar13);
      unaff_ESI = 0xf;
      if (0xf < uVar16) {
        pppcStack_108 = pppuStack_f4;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pppuStack_e4 = (undefined1 ***)0x0;
      pppuStack_f4 = (undefined1 ***)((uint)pppuStack_f4 & 0xffffff00);
      pppcStack_108 = (char ***)(iVar2 + 0x1c);
      do {
        cVar1 = *(char *)pppcStack_108;
        pppcStack_108 = (char ***)((int)pppcStack_108 + 1);
      } while (cVar1 != '\0');
      pppcStack_108 = (char ***)((int)pppcStack_108 + -(iVar2 + 0x1d));
      FUN_00409350((char *)(iVar2 + 0x1c));
      pppcStack_108 = (char ***)&pppuStack_f4;
      (**(code **)(piVar7[6] + 0x78))();
      if ((undefined1 ***)0xf < pppuStack_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppcStack_f8);
      }
      pppuStack_e4 = (undefined1 ***)0xf;
      pppcStack_e8 = (char ***)0x0;
      pppcStack_f8 = (char ***)((uint)pppcStack_f8 & 0xffffff00);
      FUN_00409350("country_puppets",0xf);
      piVar7 = (int *)(**(code **)(*piVar7 + 0x9c))(&pppcStack_f8);
      if ((char ***)0xf < pppcStack_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppiStack_fc);
      }
      pppcStack_e8 = (char ***)0xf;
      pppiStack_ec = (int ***)0x0;
      pppiStack_fc = (int ***)((uint)pppiStack_fc & 0xffffff00);
      FUN_0062fc70(param_1,piVar7);
      if (0 < (int)(*(int *)(iVar2 + 0x141c) - *(int *)(iVar2 + 0x1418) & 0xfffffff8U)) {
        FUN_0043a750((int *)(iVar2 + 0x1418));
        uStack_84 = uStack_84 & 0xffffff00;
        FUN_006304e0(0,0,0,uStack_84);
      }
      (**(code **)(*piVar7 + 0xe4))();
      local_80 = 1;
    } while (1 < local_3c);
  }
  ExceptionList = local_14;
  return;
}

