// FUN_00a5d020 @ 00a5d020 body=[[00a5d020, 00a5d0f6] [00a5d0fa, 00a5d3aa] [00a5d3ae, 00a5d3e9] [00a5d3ed, 00a5d42e] [00a5d432, 00a5d47b] [00a5d47f, 00a5d539] [00a5d53d, 00a5d597] [00a5d59b, 00a5d5f5] [00a5d5f9, 00a5d61a] [00a5d61e, 00a5d634]]


/* WARNING: Removing unreachable block (ram,0x00a5d28f) */
/* WARNING: Removing unreachable block (ram,0x00a5d33d) */
/* WARNING: Removing unreachable block (ram,0x00a5d363) */
/* WARNING: Removing unreachable block (ram,0x00a5d0ed) */
/* WARNING: Removing unreachable block (ram,0x00a5d412) */
/* WARNING: Removing unreachable block (ram,0x00a5d422) */
/* WARNING: Removing unreachable block (ram,0x00a5d3e0) */
/* WARNING: Removing unreachable block (ram,0x00a5d58e) */
/* WARNING: Removing unreachable block (ram,0x00a5d5ec) */
/* WARNING: Removing unreachable block (ram,0x00a5d530) */

void FUN_00a5d020(int *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *in_ECX;
  undefined4 *puVar10;
  int *piVar11;
  bool bVar12;
  int *piStack_ac;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 auStack_34 [32];
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4863c;
  pvStack_14 = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &pvStack_14;
  uVar5 = (**(code **)(*in_ECX + 0x18))();
  uStack_58 = 0xf;
  uStack_5c = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_00408ed0(uVar5,0,0xffffffff);
  uStack_c = 0;
  puVar10 = (undefined4 *)in_ECX[0x19];
  while( true ) {
    if ((puVar10 < (undefined4 *)in_ECX[0x19]) || ((undefined4 *)in_ECX[0x1a] <= puVar10))
    goto LAB_00a5d60a;
    cVar4 = FUN_00a5d870(*puVar10);
    if (cVar4 == '\0') break;
    puVar10 = puVar10 + 1;
  }
  FUN_00409350(&DAT_00ded94d,0);
  uStack_c._0_1_ = 1;
  cVar4 = FUN_00416db0();
  uStack_c = (uint)uStack_c._1_3_ << 8;
  if (cVar4 == '\0') {
    piStack_ac = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x1d);
    do {
      puVar10 = (undefined4 *)in_ECX[0x19];
      while (((undefined4 *)in_ECX[0x19] <= puVar10 && (puVar10 < (undefined4 *)in_ECX[0x1a]))) {
        cVar4 = FUN_00a5d870(*puVar10);
        if (cVar4 == '\0') {
          uVar5 = *puVar10;
          switch(uVar5) {
          case 0x4b:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          default:
            FUN_00a5d6d0(uVar5);
            goto LAB_00a5d218;
          case 0x84:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0x8f:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0x90:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0x91:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0xa9:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0xaa:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0xab:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
            break;
          case 0xac:
            FUN_00a5d6d0(uVar5);
            puVar10 = puVar10 + 1;
          }
        }
        else {
LAB_00a5d218:
          puVar10 = puVar10 + 1;
        }
      }
      puVar10 = (undefined4 *)in_ECX[0x19];
      while( true ) {
        if ((puVar10 < (undefined4 *)in_ECX[0x19]) || ((undefined4 *)in_ECX[0x1a] <= puVar10))
        goto LAB_00a5d494;
        cVar4 = FUN_00a5d870(*puVar10);
        if (cVar4 == '\0') break;
        puVar10 = puVar10 + 1;
      }
      iVar6 = (**(code **)(*piStack_ac + 0x20))(auStack_34);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
      iVar7 = (**(code **)(*in_ECX + 0x18))();
      uVar9 = *(uint *)(iVar7 + 0x10);
      uVar1 = *(uint *)(iVar6 + 0x10);
      uVar8 = uVar9;
      if (uVar1 < uVar9) {
        uVar8 = uVar1;
      }
      iVar6 = FUN_00414bd0(uVar8);
      bVar12 = false;
      if (iVar6 == 0) {
        if (uVar1 < uVar9) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar1 != uVar9);
        }
        bVar12 = uVar9 == 0;
      }
      if (bVar12) {
LAB_00a5d382:
        bVar12 = false;
      }
      else {
        FUN_00409350(&DAT_00ded94d,0);
        uStack_c = 3;
        iVar6 = (**(code **)(*piStack_ac + 0x20))(auStack_50);
        bVar3 = true;
        bVar2 = true;
        iVar6 = *(int *)(iVar6 + 0x10);
        iVar7 = FUN_00414bd0(0);
        bVar12 = true;
        if (iVar7 == 0 && iVar6 == 0) goto LAB_00a5d382;
      }
      if (bVar2) {
        bVar2 = false;
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_50[0]);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        auStack_50[0] = auStack_50[0] & 0xffffff00;
      }
      if (bVar3) {
        bVar3 = false;
      }
      uStack_c = 0;
      if (bVar12) {
        uVar5 = (**(code **)(*piStack_ac + 0x20))(auStack_88);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
        piStack_ac = (int *)(**(code **)(*param_1 + 4))(uVar5);
        uStack_c = uStack_c & 0xffffff00;
        if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_88[0]);
        }
        uStack_74 = 0xf;
        uStack_78 = 0;
        auStack_88[0] = auStack_88[0] & 0xffffff00;
      }
      else {
        for (piVar11 = (int *)in_ECX[0x19];
            ((int *)in_ECX[0x19] <= piVar11 && (piVar11 < (int *)in_ECX[0x1a]));
            piVar11 = piVar11 + 1) {
          cVar4 = FUN_00a5d870(*piVar11);
          if (cVar4 == '\0') {
            if (*piVar11 == 0x8f) {
              FUN_00409350("NOTOOLTIP",9);
              uStack_c._0_1_ = 6;
              FUN_00a5d6d0(*piVar11);
              uStack_c = (uint)uStack_c._1_3_ << 8;
            }
            if (*piVar11 == 0x90) {
              FUN_00409350("Please add Text",0xf);
              uStack_c._0_1_ = 7;
              FUN_00a5d6d0(*piVar11);
              uStack_c = (uint)uStack_c._1_3_ << 8;
            }
            if (*piVar11 == 0x91) {
              FUN_00409350("Please add Text To the delayTooltip",0x23);
              uStack_c._0_1_ = 8;
              FUN_00a5d6d0(*piVar11);
              uStack_c = (uint)uStack_c._1_3_ << 8;
            }
          }
        }
      }
LAB_00a5d494:
      puVar10 = (undefined4 *)in_ECX[0x19];
      while( true ) {
        if ((puVar10 < (undefined4 *)in_ECX[0x19]) || ((undefined4 *)in_ECX[0x1a] <= puVar10))
        goto LAB_00a5d60a;
        cVar4 = FUN_00a5d870(*puVar10);
        if (cVar4 == '\0') break;
        puVar10 = puVar10 + 1;
      }
    } while( true );
  }
LAB_00a5d60a:
  if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_6c);
  }
  ExceptionList = pvStack_14;
  return;
}

