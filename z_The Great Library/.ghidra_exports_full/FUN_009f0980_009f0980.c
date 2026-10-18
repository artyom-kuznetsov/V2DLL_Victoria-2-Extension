// FUN_009f0980 @ 009f0980 body=[[009f0980, 009f09dc] [009f09e0, 009f0a62] [009f0a66, 009f0dbd] [009f0dc1, 009f0df9] [009f0dfd, 009f0e36] [009f0e3a, 009f0e7f] [009f0e83, 009f0f38] [009f0f3c, 009f0f93] [009f0f97, 009f0fee] [009f0ff2, 009f1024] [009f1028, 009f103e]]


/* WARNING: Removing unreachable block (ram,0x009f0ca0) */
/* WARNING: Removing unreachable block (ram,0x009f0d50) */
/* WARNING: Removing unreachable block (ram,0x009f0d76) */
/* WARNING: Removing unreachable block (ram,0x009f0a59) */
/* WARNING: Removing unreachable block (ram,0x009f0e1c) */
/* WARNING: Removing unreachable block (ram,0x009f0e2a) */
/* WARNING: Removing unreachable block (ram,0x009f0df0) */
/* WARNING: Removing unreachable block (ram,0x009f0f8a) */
/* WARNING: Removing unreachable block (ram,0x009f0fe5) */
/* WARNING: Removing unreachable block (ram,0x009f0f2f) */

void FUN_009f0980(int *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *in_ECX;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  bool bVar12;
  int *piStack_b4;
  undefined4 *puStack_90;
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
  puStack_10 = &LAB_00b4ed2c;
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
  puVar10 = (undefined4 *)in_ECX[0x1a];
  while( true ) {
    if ((puVar10 < (undefined4 *)in_ECX[0x1a]) || ((undefined4 *)in_ECX[0x1b] <= puVar10))
    goto LAB_009f1003;
    cVar4 = FUN_009f1770(*puVar10);
    if (cVar4 == '\0') break;
    puVar10 = puVar10 + 1;
  }
  FUN_00409350(&DAT_00ded94d,0);
  uStack_c._0_1_ = 1;
  cVar4 = FUN_00416db0();
  uStack_c = (uint)uStack_c._1_3_ << 8;
  if (cVar4 == '\0') {
    piStack_b4 = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x4f);
    do {
      puStack_90 = (undefined4 *)in_ECX[0x1a];
      while (((undefined4 *)in_ECX[0x1a] <= puStack_90 && (puStack_90 < (undefined4 *)in_ECX[0x1b]))
            ) {
        cVar4 = FUN_009f1770(*puStack_90);
        if (cVar4 == '\0') {
          uVar5 = *puStack_90;
          switch(uVar5) {
          case 0x4b:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          default:
            FUN_009f1b80(uVar5);
            goto LAB_009f0c25;
          case 0x7d:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x7e:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x7f:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x80:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x81:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x84:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x8f:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x90:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0x91:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0xaa:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
            break;
          case 0xab:
            FUN_009f1b80(uVar5);
            puStack_90 = puStack_90 + 1;
          }
        }
        else {
LAB_009f0c25:
          puStack_90 = puStack_90 + 1;
        }
      }
      puVar10 = (undefined4 *)in_ECX[0x1a];
      while( true ) {
        if ((puVar10 < (undefined4 *)in_ECX[0x1a]) || ((undefined4 *)in_ECX[0x1b] <= puVar10))
        goto LAB_009f0e94;
        cVar4 = FUN_009f1770(*puVar10);
        if (cVar4 == '\0') break;
        puVar10 = puVar10 + 1;
      }
      iVar6 = (**(code **)(*piStack_b4 + 0x20))(auStack_34);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
      iVar7 = (**(code **)(*in_ECX + 0x18))();
      uVar8 = *(uint *)(iVar7 + 0x10);
      uVar1 = *(uint *)(iVar6 + 0x10);
      uVar9 = uVar8;
      if (uVar1 < uVar8) {
        uVar9 = uVar1;
      }
      iVar6 = FUN_00414bd0(uVar9);
      bVar12 = false;
      if (iVar6 == 0) {
        if (uVar1 < uVar8) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(uVar1 != uVar8);
        }
        bVar12 = uVar8 == 0;
      }
      if (bVar12) {
LAB_009f0d95:
        bVar12 = false;
      }
      else {
        FUN_00409350(&DAT_00ded94d,0);
        uStack_c = 3;
        iVar6 = (**(code **)(*piStack_b4 + 0x20))(auStack_50);
        bVar3 = true;
        bVar2 = true;
        iVar6 = *(int *)(iVar6 + 0x10);
        iVar7 = FUN_00414bd0(0);
        bVar12 = true;
        if (iVar7 == 0 && iVar6 == 0) goto LAB_009f0d95;
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
        uVar5 = (**(code **)(*piStack_b4 + 0x20))(auStack_88);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
        piStack_b4 = (int *)(**(code **)(*param_1 + 4))(uVar5);
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
        for (piVar11 = (int *)in_ECX[0x1a];
            ((int *)in_ECX[0x1a] <= piVar11 && (piVar11 < (int *)in_ECX[0x1b]));
            piVar11 = piVar11 + 1) {
          cVar4 = FUN_009f1770(*piVar11);
          if (cVar4 == '\0') {
            if (*piVar11 == 0x8f) {
              FUN_00409350("NOTOOLTIP",9);
              uStack_c._0_1_ = 6;
              FUN_009f1b80(*piVar11);
              uStack_c = (uint)uStack_c._1_3_ << 8;
            }
            if (*piVar11 == 0x90) {
              FUN_00409350("Please add Text",0xf);
              uStack_c._0_1_ = 7;
              FUN_009f1b80(*piVar11);
              uStack_c = (uint)uStack_c._1_3_ << 8;
            }
            if (*piVar11 == 0x91) {
              FUN_00409350("Please add Text To the delayTooltip",0x23);
              uStack_c._0_1_ = 8;
              FUN_009f1b80(*piVar11);
              uStack_c = (uint)uStack_c._1_3_ << 8;
            }
          }
        }
      }
LAB_009f0e94:
      puVar10 = (undefined4 *)in_ECX[0x1a];
      while( true ) {
        if ((puVar10 < (undefined4 *)in_ECX[0x1a]) || ((undefined4 *)in_ECX[0x1b] <= puVar10))
        goto LAB_009f1003;
        cVar4 = FUN_009f1770(*puVar10);
        if (cVar4 == '\0') break;
        puVar10 = puVar10 + 1;
      }
    } while( true );
  }
LAB_009f1003:
  iVar6 = FUN_00a581e0();
  in_ECX[0x9e] = iVar6;
  if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_6c);
  }
  ExceptionList = pvStack_14;
  return;
}

