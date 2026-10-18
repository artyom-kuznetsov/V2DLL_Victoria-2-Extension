// FUN_00ad17e0 @ 00ad17e0 body=[[00ad17e0, 00ad1a94] [00ad1aa0, 00ad1fc0]]


void FUN_00ad17e0(int param_1,uint param_2,char param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  short *psVar9;
  uint uVar10;
  void *pvVar11;
  int *piVar12;
  uint local_58;
  int local_54;
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b36cc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00ae09e0(DAT_00ef259c ^ (uint)&stack0xffffff98);
  *(undefined4 *)(in_ECX + 0xf0) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0xf8) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0xfc) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0x100) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0x104) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 300) = 0;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x138) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  *(undefined4 *)(in_ECX + 0x144) = 0;
  *(undefined2 *)(in_ECX + 0x148) = 1;
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  *(undefined4 *)(in_ECX + 0x150) = 0;
  *(undefined4 *)(in_ECX + 0x154) = 0;
  *(undefined2 *)(in_ECX + 0x158) = 1;
  *(undefined4 *)(in_ECX + 0x15c) = 0;
  *(undefined4 *)(in_ECX + 0x160) = 0;
  *(undefined4 *)(in_ECX + 0x164) = 0;
  *(undefined2 *)(in_ECX + 0x168) = 1;
  *(undefined4 *)(in_ECX + 0x16c) = 0;
  *(undefined4 *)(in_ECX + 0x170) = 0;
  *(undefined4 *)(in_ECX + 0x174) = 0;
  *(undefined2 *)(in_ECX + 0x178) = 1;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_00adfcd0();
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  *(undefined4 *)(in_ECX + 400) = 0;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  *(undefined2 *)(in_ECX + 0x1a8) = 0x192;
  *(undefined2 *)(in_ECX + 0x148) = 0x192;
  *(undefined2 *)(in_ECX + 0x158) = 0x192;
  *(undefined2 *)(in_ECX + 0x168) = 0x192;
  *(undefined2 *)(in_ECX + 0x178) = 0x192;
  *(undefined2 *)(in_ECX + 0x198) = 0x192;
  local_4 = CONCAT31(local_4._1_3_,7);
  if (*(uint *)(in_ECX + 0x194) < *(uint *)(param_1 + 0x84)) {
    FUN_00b08780(*(uint *)(param_1 + 0x84));
  }
  *(int *)(in_ECX + 0x1ac) = param_1;
  *(undefined4 *)(in_ECX + 0x1c8) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0x3f4ccccd;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined2 *)(in_ECX + 0x1ec) = 0;
  *(undefined4 *)(in_ECX + 0x1e4) = 0;
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
  *(undefined4 *)(in_ECX + 0x1b4) = 0;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  uVar4 = FUN_00b164b0();
  *(undefined4 *)(in_ECX + 0x1e0) = uVar4;
  *(byte *)(in_ECX + 0x1ed) = *(byte *)(in_ECX + 0x1ed) & 0xfd | 0xd;
  uVar6 = *(uint *)(*(int *)(in_ECX + 0x1ac) + 0x84);
  uVar5 = *(uint *)(in_ECX + 400);
  if (((uVar6 != uVar5) && (*(uint *)(in_ECX + 400) = uVar6, uVar5 < uVar6)) &&
     (*(uint *)(in_ECX + 0x194) < uVar6)) {
    FUN_00b08780(uVar6);
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      *(short *)(*(int *)(in_ECX + 0x18c) + uVar5 * 2) = (short)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  uVar6 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1ac) + 0xec);
  local_58 = 0;
  if (uVar6 != 0) {
    do {
      cVar3 = FUN_00ae2b90();
      if (cVar3 == '\0') {
        FUN_00ae2c30(in_ECX);
      }
      local_58 = local_58 + 1;
    } while (local_58 < uVar6);
  }
  uVar6 = *(uint *)(*(int *)(in_ECX + 0x1ac) + 0x84);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      if ((*(byte *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar5 * 4) + 0xc) & 1) ==
          0) {
        uVar10 = *(uint *)(in_ECX + 400);
        uVar7 = 0;
        if (uVar10 != 0) {
          psVar9 = *(short **)(in_ECX + 0x18c);
          do {
            if (*psVar9 == (short)uVar5) {
              if (uVar7 != 0xffffffff) {
                if ((1 < uVar10) && (iVar8 = (uVar10 - uVar7) + -1, iVar8 != 0)) {
                  pvVar11 = (void *)(*(int *)(in_ECX + 0x18c) + uVar7 * 2);
                  FID_conflict__memcpy(pvVar11,(void *)((int)pvVar11 + 2),iVar8 * 2);
                }
                *(int *)(in_ECX + 400) = *(int *)(in_ECX + 400) + -1;
              }
              break;
            }
            uVar7 = uVar7 + 1;
            psVar9 = psVar9 + 1;
          } while (uVar7 < uVar10);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  *(undefined4 *)(in_ECX + 0x1c0) = 0x3dcccccd;
  iVar8 = FUN_00ab047b();
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  *(undefined4 *)(in_ECX + 0x1dc) = 1;
  *(float *)(in_ECX + 0x1c4) = ((float)iVar8 + (float)iVar8) * 3.051851e-05;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x58) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x6c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x70) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x98) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xac) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xb0) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xd8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xec) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 300) = 0;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x138) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x120) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x124) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x128) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  FUN_00ae0e00(param_1,param_2);
  iVar8 = (*(code *)PTR_FUN_00f01b08)(0x30,0x12d,4,0,0,0xffffffff);
  local_4._0_1_ = 8;
  if (iVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00ae2830(in_ECX);
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined4 *)(in_ECX + 0x1b8) = uVar4;
  FUN_00ad1430(0,1);
  pvVar11 = *(void **)(in_ECX + 0x14);
  if (uVar6 != 0) {
    iVar8 = *(int *)(in_ECX + 0xc) - (int)pvVar11;
    param_2 = uVar6;
    do {
      FID_conflict__memcpy(auStack_4c,(void *)(iVar8 + (int)pvVar11),0x40);
      FUN_00ad29c0();
      FID_conflict__memcpy(pvVar11,auStack_4c,0x40);
      pvVar11 = (void *)((int)pvVar11 + 0x40);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  FUN_00ad0900();
  local_54 = *(int *)(*(int *)(in_ECX + 0x1ac) + 0xfc);
  FUN_00ad3190(local_54);
  if (local_54 != 0) {
    param_2 = 0;
    do {
      uVar6 = *(uint *)(*(int *)(in_ECX + 0x19c) + 4 + param_2);
      uVar5 = *(uint *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 200) + 4 + param_2);
      piVar12 = (int *)(*(int *)(in_ECX + 0x19c) + param_2);
      if (uVar5 != uVar6) {
        if (uVar6 < uVar5) {
          piVar12[1] = uVar5;
          if ((uint)piVar12[2] < uVar5) {
            if (uVar5 == 0) {
              piVar12[1] = 0;
              piVar12[2] = 0;
              if (*piVar12 != 0) {
                (*(code *)PTR__free_00f01b10)(*piVar12);
                *piVar12 = 0;
              }
            }
            else {
              if (*piVar12 == 0) {
                iVar8 = (*(code *)PTR_FUN_00f01b08)(uVar5 * 8,(short)piVar12[3],4,2,0,0xffffffff);
              }
              else {
                iVar8 = (*(code *)PTR_FUN_00f01b0c)(*piVar12,uVar5 * 8);
              }
              *piVar12 = iVar8;
              piVar12[2] = uVar5;
            }
          }
          for (; uVar6 < uVar5; uVar6 = uVar6 + 1) {
            puVar1 = (undefined4 *)(*piVar12 + uVar6 * 8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &PTR_FUN_00e3fb28;
              puVar1[1] = 0;
            }
          }
        }
        else {
          uVar10 = uVar5;
          if (uVar5 < uVar6) {
            do {
              (*(code *)**(undefined4 **)(*piVar12 + uVar10 * 8))(0);
              uVar10 = uVar10 + 1;
            } while (uVar10 < (uint)piVar12[1]);
          }
          piVar12[1] = uVar5;
        }
      }
      local_58 = 0;
      if (uVar5 != 0) {
        do {
          piVar12 = *(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 200) + param_2) + 4 +
                             local_58 * 8);
          iVar8 = *(int *)(param_2 + *(int *)(in_ECX + 0x19c)) + local_58 * 8;
          if (piVar12 != (int *)0x0) {
            (**(code **)(*piVar12 + 4))();
          }
          piVar2 = *(int **)(iVar8 + 4);
          *(int **)(iVar8 + 4) = piVar12;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))();
          }
          local_58 = local_58 + 1;
        } while (local_58 < uVar5);
      }
      param_2 = param_2 + 0x10;
      local_54 = local_54 + -1;
    } while (local_54 != 0);
  }
  if (*(int *)(*(int *)(param_1 + 0xd8) + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0xd8) + 4) + 0x10))();
  }
  FUN_00adfc90(uVar4);
  if (((param_3 == '\x01') && (FUN_00ad4d40(in_ECX,0), (*(byte *)(in_ECX + 0x1ed) & 1) != 0)) &&
     (*(float *)(in_ECX + 0x1c0) < *(float *)(in_ECX + 0x1c4) !=
      (*(float *)(in_ECX + 0x1c0) == *(float *)(in_ECX + 0x1c4)))) {
    uVar4 = *(undefined4 *)(in_ECX + 0x1dc);
    switch(*(undefined4 *)(in_ECX + 0x1e8)) {
    case 0:
      FUN_00acfb60(in_ECX + 0xf0,uVar4);
      break;
    case 1:
      FUN_00ad0bf0(*(undefined4 *)(in_ECX + 0x1d0),in_ECX + 0xf0,uVar4);
      break;
    case 2:
      FUN_00ad0d10(*(undefined4 *)(in_ECX + 0x1d0),in_ECX + 0xf0,uVar4);
      break;
    case 3:
      FUN_00acf9f0(in_ECX + 0xf0,uVar4);
      break;
    case 4:
      FUN_00acf840(in_ECX + 0xf0,uVar4);
      break;
    default:
      FUN_00b15c30("*** ActorInstance::UpdateBounds() - Unknown boundsType specified! (%d) ***",
                   *(undefined4 *)(in_ECX + 0x1e8));
    }
    *(undefined4 *)(in_ECX + 0x1c4) = 0;
  }
  FUN_00ad3eb0(in_ECX);
  ExceptionList = local_c;
  return;
}

