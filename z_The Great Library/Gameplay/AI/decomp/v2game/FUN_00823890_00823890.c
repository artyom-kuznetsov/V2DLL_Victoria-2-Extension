// FUN_00823890 @ 00823890 body=[[00823890, 00823ce3] [00823cf0, 00823d6e] [00823d78, 00823d8b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823890(int *param_1,int param_2,char param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined *puVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  undefined *puStack_98;
  undefined1 **ppuStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piVar14;
  int iStack_74;
  float fStack_70;
  undefined *puStack_68;
  int local_64;
  int iStack_60;
  undefined1 *puStack_5c;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  undefined1 uStack_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  void *pvStack_24;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4ae98;
  pvStack_14 = ExceptionList;
  iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
  uStack_84 = 0;
  uStack_88 = 1;
  uStack_8c = 0;
  iStack_90 = iVar10 + 0xec;
  ppuStack_94 = (undefined1 **)0x8238e2;
  ExceptionList = &pvStack_14;
  local_64 = iVar10;
  fVar13 = (float10)(**(code **)(*param_1 + 0x1dc))();
  fVar1 = (float)fVar13;
  ppuStack_94 = (undefined1 **)param_1[0xe];
  puStack_98 = (undefined *)param_1[0xd];
  iStack_60 = FUN_005dca30();
  piStack_58 = (int *)0x0;
  piStack_54 = (int *)0x0;
  iStack_50 = 0;
  uStack_4c = 0;
  uStack_1c = 0;
  piVar9 = (int *)param_1[0x1a];
  if ((int *)param_1[0x1a] != (int *)0x0) {
    do {
      piVar3 = piStack_54;
      piVar14 = (int *)piVar9[2];
      iVar2 = *piVar9;
      if ((*(int *)(iVar2 + 0xa0) < 1) ||
         (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar2 + 0xa0) * 4) + 0x58) !=
          param_2)) {
        piVar9 = piStack_58;
        if (*(int *)(iVar2 + 0xdc) == iVar10) {
          ppuStack_94 = (undefined1 **)0x10;
          puStack_98 = (undefined *)0x8239a9;
          piStack_54 = (int *)FUN_00aae9af();
          if (piStack_54 == (int *)0x0) goto LAB_008239c2;
          *piStack_54 = iVar2;
          piStack_54[1] = (int)piVar3;
          piStack_54[2] = 0;
          *(undefined1 *)(piStack_54 + 3) = 0;
          goto LAB_008239c4;
        }
      }
      else {
        ppuStack_94 = (undefined1 **)0x10;
        puStack_98 = (undefined *)0x82397f;
        piStack_54 = (int *)FUN_00aae9af();
        if (piStack_54 == (int *)0x0) {
LAB_008239c2:
          piStack_54 = (int *)0x0;
        }
        else {
          *piStack_54 = iVar2;
          piStack_54[1] = (int)piVar3;
          piStack_54[2] = 0;
          *(undefined1 *)(piStack_54 + 3) = 0;
        }
LAB_008239c4:
        iVar10 = iStack_50 + 1;
        bVar12 = iStack_50 != 0;
        piVar9 = piStack_54;
        iStack_50 = iVar10;
        if (bVar12) {
          piVar3[2] = (int)piStack_54;
          piVar9 = piStack_58;
        }
      }
      piStack_58 = piVar9;
      piVar9 = piVar14;
      iVar10 = iStack_74;
    } while (piVar14 != (int *)0x0);
    if (0 < iStack_50) {
      ppuStack_94 = (undefined1 **)0x1;
      puStack_98 = (undefined *)0x0;
      fVar13 = (float10)(**(code **)(*param_1 + 0x1dc))(&piStack_58,1);
      if (fVar1 <= (float)fVar13) {
        ppuStack_94 = (undefined1 **)0x823a2c;
        FUN_009a63f0();
        ExceptionList = pvStack_24;
        return;
      }
    }
  }
  piVar9 = (int *)param_1[0x1a];
  piVar14 = (int *)0x0;
  fStack_70 = 10000.0;
  if (piVar9 != (int *)0x0) {
    do {
      piVar3 = (int *)*piVar9;
      piVar9 = (int *)piVar9[2];
      if ((piVar3[0x1d] == 0) && ((char)piVar3[0x41] == '\0')) {
        ppuStack_94 = (undefined1 **)0x443ba000;
        puStack_98 = (undefined *)0x823a77;
        FUN_00401000();
        ppuStack_94 = (undefined1 **)0x823a7f;
        iVar10 = FUN_00b31c00();
        ppuStack_94 = &puStack_5c;
        puStack_98 = (undefined *)0x823a8f;
        piVar11 = (int *)(**(code **)(*piVar3 + 0x48))();
        if (iVar10 <= *piVar11) {
          puStack_98 = (undefined *)0x823a9d;
          ppuStack_94 = (undefined1 **)piVar3;
          cVar8 = FUN_00825070();
          if (cVar8 == '\0') {
            if (0 < piVar3[0x28]) {
              ppuStack_94 = (undefined1 **)0x823ab6;
              iVar10 = FUN_00826f50();
              if (*(char *)(*(int *)(iVar10 + 0x5c) + 0x2a) == '\0') goto LAB_00823bce;
            }
            piStack_48 = (int *)0x0;
            piStack_44 = (int *)0x0;
            iStack_40 = 0;
            uStack_3c = 0;
            ppuStack_94 = (undefined1 **)0x10;
            uStack_1c = CONCAT31(uStack_1c._1_3_,1);
            puStack_98 = (undefined *)0x823ae0;
            piStack_44 = (int *)FUN_00aae9af();
            if (piStack_44 == (int *)0x0) {
              piStack_44 = (int *)0x0;
            }
            else {
              *piStack_44 = (int)piVar3;
              piStack_44[1] = 0;
              piStack_44[2] = 0;
              *(undefined1 *)(piStack_44 + 3) = 0;
            }
            piVar11 = piStack_44;
            if (iStack_40 != 0) {
              _DAT_00000008 = piStack_44;
              piVar11 = piStack_48;
            }
            piStack_48 = piVar11;
            ppuStack_94 = (undefined1 **)0x823b21;
            iStack_40 = iStack_40 + 1;
            FUN_00549920();
            ppuStack_94 = (undefined1 **)0x1;
            puStack_98 = (undefined *)0x0;
            fVar13 = (float10)(**(code **)(*param_1 + 0x1dc))(&piStack_48,1);
            if (fVar1 <= (float)fVar13) {
              puStack_98 = *(undefined **)(piVar3[0x37] + 0x58);
              ppuStack_94 = (undefined1 **)0x0;
              FUN_0049b7f0(&puStack_68);
              fVar6 = (float)(int)puStack_68 / 1000.0;
              if ((fVar6 <= (float)param_4) && (fVar6 < fStack_70)) {
                piVar14 = piVar3;
                fStack_70 = fVar6;
              }
            }
            uStack_1c = uStack_1c & 0xffffff00;
            ppuStack_94 = (undefined1 **)0x823bcb;
            FUN_009a63f0();
          }
        }
      }
LAB_00823bce:
    } while (piVar9 != (int *)0x0);
    if (piVar14 != (int *)0x0) {
      if (param_3 == '\0') {
        piStack_38 = (int *)0x0;
        piStack_34 = (int *)0x0;
        iStack_30 = 0;
        uStack_2c = 0;
        ppuStack_94 = (undefined1 **)0x10;
        uStack_1c = CONCAT31(uStack_1c._1_3_,2);
        puStack_98 = (undefined *)0x823c0c;
        piStack_34 = (int *)FUN_00aae9af();
        if (piStack_34 == (int *)0x0) {
          piStack_34 = (int *)0x0;
        }
        else {
          *piStack_34 = (int)piVar14;
          piStack_34[1] = 0;
          piStack_34[2] = 0;
          *(undefined1 *)(piStack_34 + 3) = 0;
        }
        piVar9 = piStack_34;
        if (iStack_30 != 0) {
          _DAT_00000008 = piStack_34;
          piVar9 = piStack_38;
        }
        piStack_38 = piVar9;
        ppuStack_94 = (undefined1 **)0x823c4c;
        iStack_30 = iStack_30 + 1;
        FUN_00549920();
        ppuStack_94 = (undefined1 **)0x1;
        puStack_98 = (undefined *)0x0;
        fVar13 = (float10)(**(code **)(*param_1 + 0x1dc))(&piStack_38,1);
        puStack_68 = (undefined *)(float)fVar13;
        puVar7 = puStack_98;
        if (fVar1 + fVar1 < (float)puStack_68) {
          iStack_60 = iStack_60 * 2;
          if ((iStack_60 < piVar14[0x26]) && (1 < piVar14[0x26])) {
            ppuStack_94 = (undefined1 **)0x823ca8;
            FUN_009c19f0();
            puStack_5c = (undefined1 *)&puStack_98;
            puStack_98 = puStack_68;
            ppuStack_94 = (undefined1 **)local_64;
            iVar10 = piVar14[0x37];
            (**(code **)(*param_1 + 0xe8))(iVar10);
            FUN_0084fbb0(iVar10);
            puVar4 = (undefined4 *)piVar14[0x24];
            puVar7 = puStack_98;
            puStack_98 = puStack_68;
            ppuStack_94 = (undefined1 **)local_64;
            while (((puStack_68 = puStack_98, local_64 = (int)ppuStack_94,
                    puVar4 != (undefined4 *)0x0 && (iStack_60 < piVar14[0x26])) &&
                   (1 < piVar14[0x26]))) {
              uVar5 = *puVar4;
              puVar4 = (undefined4 *)puVar4[2];
              puStack_5c = (undefined1 *)&puStack_98;
              (**(code **)(*param_1 + 0xe8))();
              FUN_0084fd10(uVar5);
              puVar7 = puStack_98;
              puStack_98 = puStack_68;
              ppuStack_94 = (undefined1 **)local_64;
            }
          }
        }
        puStack_98 = puVar7;
        uStack_1c = uStack_1c & 0xffffff00;
        ppuStack_94 = (undefined1 **)0x823d44;
        FUN_009a63f0();
      }
      if (*(int *)(iStack_74 + 0x58) != 0) {
        ppuStack_94 = (undefined1 **)0x0;
        FUN_008255a0(param_1);
      }
    }
  }
  if (piStack_58 != (int *)0x0) {
    ppuStack_94 = (undefined1 **)piStack_58;
                    /* WARNING: Subroutine does not return */
    puStack_98 = &UNK_00823d6f;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_24;
  return;
}

