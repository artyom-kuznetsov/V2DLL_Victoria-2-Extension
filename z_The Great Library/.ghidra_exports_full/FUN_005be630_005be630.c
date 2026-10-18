// FUN_005be630 @ 005be630 body=[[005be630, 005be7c6] [005be7ca, 005be802] [005be806, 005be8eb] [005be8ef, 005bebe4] [005bebe8, 005bec0e] [005bec12, 005bec36] [005bec3a, 005bec4e]]


void FUN_005be630(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *in_ECX;
  undefined4 extraout_ECX;
  uint uVar11;
  int *piStack_254;
  int aiStack_244 [7];
  uint uStack_228;
  undefined4 uStack_218;
  uint uStack_214;
  undefined1 auStack_210 [4];
  uint uStack_20c;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  uint auStack_1f0 [4];
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d4;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  uint auStack_1b8 [4];
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined **appuStack_124 [48];
  undefined **appuStack_64 [19];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b8e574;
  pvStack_14 = ExceptionList;
  piStack_254 = in_ECX + 2;
  if ((*piStack_254 == 0) && (in_ECX[3] == 0)) {
    piStack_254 = aiStack_244 + 2;
    aiStack_244[3] = DAT_00f096cc;
    aiStack_244[2] = 0x28;
    DAT_00f096cc = DAT_00f096cc + 1;
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x18))();
  }
  else {
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x18))();
  }
  if (in_ECX[0x1a] != 0) {
    aiStack_244[6] = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + in_ECX[0x1a] * 4);
    if (((((char)in_ECX[0x18] != 'R') || (*(char *)((int)in_ECX + 0x61) != 'E')) ||
        (*(char *)((int)in_ECX + 0x62) != 'B')) &&
       (aiStack_244[1] = in_ECX[0x18], *(int *)(aiStack_244[6] + 300) != in_ECX[0x19])) {
      uStack_214 = 0xf;
      uStack_218 = 0;
      uStack_228 = uStack_228 & 0xffffff00;
      FUN_00409350("subunit.cpp",0xb);
      puStack_10 = (undefined1 *)0x0;
      puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x20))(auStack_1b8);
      pvStack_14._0_1_ = 1;
      uVar5 = FUN_004015b0(aiStack_244 + 6,0x372,0x10004);
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,2);
      FUN_00987d50(uVar5,"Unit \'",6,0);
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      uVar5 = FUN_00418e30(uVar5,puVar4);
      uVar5 = FUN_00418e30(uVar5,"\' is set as from another country.");
      FUN_00401280(uVar5);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
      FUN_00987ac0(appuStack_124);
      appuStack_124[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_124);
      if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_1b8[0]);
      }
      puStack_10 = (undefined1 *)0xffffffff;
      uStack_1a4 = 0xf;
      uStack_1a8 = 0;
      auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
      if (0xf < uStack_214) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_228);
      }
    }
    aiStack_244[4] = 0;
    if (DAT_0131bb34 == 0) {
      aiStack_244[1] = FUN_00aae9af(0x188);
      puStack_10 = (undefined1 *)0x3;
      if (aiStack_244[1] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0041a160();
      }
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_00423700(uVar5);
    }
    aiStack_244[1] = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    aiStack_244[5] = 0;
    if (0 < aiStack_244[1]) {
      aiStack_244[0] = 0;
      iVar6 = DAT_0131bb34;
      do {
        if ((((char)in_ECX[0x18] == 'R') && (*(char *)((int)in_ECX + 0x61) == 'E')) &&
           (*(char *)((int)in_ECX + 0x62) == 'B')) {
LAB_005be92c:
          iVar7 = *(int *)(*(int *)(aiStack_244[6] + 0x194) + aiStack_244[0]);
          iVar3 = aiStack_244[3];
          do {
            aiStack_244[3] = iVar7;
            if (aiStack_244[3] == 0) goto LAB_005be99a;
            iVar7 = *(int *)(aiStack_244[3] + 0x27c);
          } while ((((((char)in_ECX[0x18] == 'R') && (*(char *)((int)in_ECX + 0x61) == 'E')) &&
                    (*(char *)((int)in_ECX + 0x62) == 'B')) &&
                   (iVar8 = FUN_00967f50(), iVar6 = DAT_0131bb34, iVar3 = aiStack_244[3], iVar8 == 0
                   )) || (iVar8 = *(int *)(aiStack_244[3] + 0x40),
                         iVar1 = *(int *)(aiStack_244[3] + 0x3c),
                         iVar9 = FUN_00965870(aiStack_244[3],0), iVar6 = DAT_0131bb34,
                         iVar3 = aiStack_244[3], iVar9 <= iVar8 - iVar1 >> 2));
          aiStack_244[4] = aiStack_244[3];
        }
        else {
          if (iVar6 == 0) {
            aiStack_244[3] = FUN_00aae9af(0x188);
            puStack_10 = (undefined1 *)0x4;
            if (aiStack_244[3] == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = FUN_0041a160();
            }
            iVar7 = DAT_0131bb34;
            puStack_10 = (undefined1 *)0x5;
            aiStack_244[3] = 0;
            if ((iVar6 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
              FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(iVar7);
            }
            puStack_10 = (undefined1 *)0xffffffff;
            DAT_0131bb34 = iVar6;
          }
          if (*(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2 < aiStack_244[5]) {
            iVar7 = FUN_0096bb70();
            iVar6 = DAT_0131bb34;
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar6 + 0xc) + aiStack_244[5] * 4);
          }
          iVar3 = aiStack_244[3];
          if (*(char *)(iVar7 + 0x42) != '\0') goto LAB_005be92c;
        }
LAB_005be99a:
        aiStack_244[3] = iVar3;
        iVar7 = aiStack_244[4];
        aiStack_244[0] = aiStack_244[0] + 0x10;
        aiStack_244[5] = aiStack_244[5] + 1;
      } while (aiStack_244[5] < aiStack_244[1]);
      if (aiStack_244[4] != 0) {
        piVar10 = *(int **)(aiStack_244[4] + 0x40);
        if ((aiStack_244 < piVar10) &&
           (piVar2 = *(int **)(aiStack_244[4] + 0x3c), piVar2 <= aiStack_244)) {
          if (piVar10 == *(int **)(aiStack_244[4] + 0x44)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(iVar7 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar7 + 0x40) =
                 *(undefined4 *)(*(int *)(iVar7 + 0x3c) + ((int)aiStack_244 - (int)piVar2 >> 2) * 4)
            ;
            *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 4;
            in_ECX[0xc] = aiStack_244[4];
            ExceptionList = pvStack_18;
            return;
          }
        }
        else {
          if (piVar10 == *(int **)(aiStack_244[4] + 0x44)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(iVar7 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar7 + 0x40) = in_ECX;
          }
        }
        *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 4;
        in_ECX[0xc] = aiStack_244[4];
        ExceptionList = pvStack_18;
        return;
      }
    }
    uStack_1f8 = 0xf;
    uStack_1fc = 0;
    uStack_20c = uStack_20c & 0xffffff00;
    FUN_00409350("subunit.cpp",0xb);
    puStack_10 = (undefined1 *)0x6;
    aiStack_244[1] = in_ECX[0x18];
    aiStack_244[2] = in_ECX[0x19];
    aiStack_244[1] = FUN_0055dd40();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
    puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x20))(auStack_1f0);
    pvStack_14._0_1_ = 8;
    uVar5 = FUN_004015b0(auStack_210,0x391,0x10004);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,9);
    FUN_00987d50(uVar5,"Unit \'",6,0);
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    uVar5 = FUN_00418e30(uVar5,puVar4);
    uVar5 = FUN_00418e30(uVar5,"\' from ");
    if (0xf < (uint)piStack_254[5]) {
      piStack_254 = (int *)*piStack_254;
    }
    uVar5 = FUN_00418e30(uVar5,piStack_254);
    uVar5 = FUN_00418e30(uVar5," is assigned to be from ",in_ECX[0x1a],in_ECX[0x1a],extraout_ECX,
                         " which do not have enough soldiers to support it.");
    uVar5 = FUN_00455470(uVar5);
    piVar10 = (int *)FUN_00418e30(uVar5);
    FUN_00408be0(piVar10);
    uVar11 = 0;
    if (((*(byte *)(*(int *)(*piVar10 + 4) + 0xc + (int)piVar10) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar10 + 4) + 0x38 + (int)piVar10) + 0x34))(),
       iVar6 == -1)) {
      uVar11 = 4;
    }
    if (uVar11 != 0) {
      uVar11 = *(uint *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0xc) | uVar11;
      if (*(int *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0x38) == 0) {
        uVar11 = uVar11 | 4;
      }
      FUN_00401120(uVar11,0);
    }
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,8);
    FUN_00987ac0(appuStack_64);
    appuStack_64[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_64);
    if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_1f0[0]);
    }
    uStack_1dc = 0xf;
    uStack_1e0 = 0;
    auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
    if (0xf < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1d4);
    }
    uStack_1c0 = 0xf;
    uStack_1c4 = 0;
    uStack_1d4 = uStack_1d4 & 0xffffff00;
    if (0xf < uStack_1f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_20c);
    }
  }
  ExceptionList = pvStack_18;
  return;
}

