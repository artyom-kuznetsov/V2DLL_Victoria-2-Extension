// FUN_006481d0 @ 006481d0 body=[[006481d0, 00648316] [0064831d, 006483a8] [006483b0, 006483cc] [006483d0, 00648438] [00648442, 00648457]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006481d0(void)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *in_ECX;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int *piVar18;
  undefined1 *puVar19;
  bool bVar20;
  int *local_38;
  int local_30;
  undefined1 local_28 [4];
  int *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4add8;
  local_10 = ExceptionList;
  iVar9 = in_ECX[0x1a] * -4;
  puVar19 = local_28 + iVar9 + -0x20;
  local_1c = local_28 + iVar9 + -0x20;
  local_18 = 0;
  local_38 = (int *)0x0;
  local_30 = 0;
  local_8 = 0;
  piVar18 = (int *)in_ECX[0x18];
  ExceptionList = &local_10;
  if (piVar18 != (int *)0x0) {
    puVar19 = local_28 + iVar9 + -0x20;
    piVar6 = (int *)0x0;
    ExceptionList = &local_10;
    do {
      pcVar2 = *(code **)(*(int *)*piVar18 + 4);
      puVar10 = puVar19 + -4;
      *(undefined4 *)(puVar19 + -4) = 0x648229;
      cVar4 = (*pcVar2)();
      piVar5 = piVar6;
      piVar3 = local_38;
      if (cVar4 == '\0') {
        *(undefined4 *)(puVar10 + -4) = 0x10;
        local_24 = piVar6;
        *(undefined4 *)(puVar10 + -8) = 0x648237;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = *piVar18;
          piVar5[1] = (int)piVar6;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar9 = local_30 + 1;
        bVar20 = local_30 != 0;
        piVar3 = piVar5;
        local_30 = iVar9;
        if (bVar20) {
          local_24[2] = (int)piVar5;
          piVar3 = local_38;
        }
      }
      local_38 = piVar3;
      pcVar2 = *(code **)(*(int *)*piVar18 + 8);
      puVar19 = puVar10 + -4;
      *(undefined4 *)(puVar10 + -4) = 0x64827a;
      cVar4 = (*pcVar2)();
      if (cVar4 != '\0') {
        *(int *)(local_1c + local_18 * 4) = *piVar18;
        local_18 = local_18 + 1;
      }
      piVar18 = (int *)piVar18[2];
      piVar6 = piVar5;
    } while (piVar18 != (int *)0x0);
  }
  iVar9 = 0;
  piVar18 = local_38;
  if (0 < local_18 + -0x14) {
    do {
      iVar1 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      *(undefined1 *)(*(int *)(local_1c + iVar1) + 0xf9) = 1;
    } while (iVar9 < local_18 + -0x14);
  }
  do {
    if (piVar18 == (int *)0x0) {
      pcVar2 = *(code **)(*in_ECX + 0x58);
      *(undefined1 **)(puVar19 + -4) = local_28;
      puVar12 = puVar19 + -8;
      *(undefined4 *)(puVar19 + -8) = 0x64833f;
      puVar7 = (undefined4 *)(*pcVar2)();
      local_20 = *puVar7;
      for (piVar18 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4) + 0xce4);
          piVar18 != (int *)0x0; piVar18 = (int *)piVar18[2]) {
        piVar6 = (int *)*piVar18;
        if ((char)piVar6[8] == '\0') {
          pcVar2 = *(code **)(*piVar6 + 0x34);
          *(int **)(puVar12 + -4) = in_ECX;
          puVar13 = (undefined4 *)(puVar12 + -8);
          puVar12 = puVar12 + -8;
          *puVar13 = 0x648372;
          (*pcVar2)();
          *(undefined1 *)(piVar6 + 8) = 1;
        }
      }
      if (*(char *)((int)DAT_012588e8 + 0xd11) != '\0') {
        pcVar2 = *(code **)(*DAT_012588e8 + 0x1c);
        puVar19 = (undefined1 *)0x0;
        local_1c = (undefined1 *)0x0;
        puVar14 = (undefined4 *)(puVar12 + -4);
        puVar12 = puVar12 + -4;
        *puVar14 = 0x64839c;
        local_18 = (*pcVar2)();
        if (0 < local_18) {
          do {
            local_24 = *(int **)(DAT_012588e8[0x2b7] + (int)puVar19 * 4);
            piVar18 = (int *)local_24[0x339];
            while (piVar18 != (int *)0x0) {
              piVar6 = (int *)*piVar18;
              pcVar2 = *(code **)(*piVar6 + 0x6c);
              piVar18 = (int *)piVar18[2];
              puVar15 = (undefined4 *)(puVar12 + -4);
              puVar12 = puVar12 + -4;
              *puVar15 = 0x6483de;
              cVar4 = (*pcVar2)();
              puVar19 = local_1c;
              if ((cVar4 == '\0') && (piVar6[9] == 1)) {
                pcVar2 = *(code **)(*piVar6 + 0x18);
                piVar6[9] = 3;
                puVar16 = puVar12 + -4;
                *(undefined4 *)(puVar12 + -4) = 0x6483f8;
                uVar8 = (*pcVar2)();
                pcVar2 = *(code **)(*in_ECX + 0x44);
                puVar17 = puVar16 + -4;
                *(undefined4 *)(puVar16 + -4) = 0x648403;
                iVar9 = (*pcVar2)();
                pcVar2 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
                *(undefined4 *)(puVar17 + -4) = uVar8;
                puVar12 = puVar17 + -8;
                *(undefined4 *)(puVar17 + -8) = 0x64840e;
                (*pcVar2)();
                puVar19 = local_1c;
              }
            }
            *(undefined4 *)(puVar12 + -4) = 0x64841f;
            FUN_005165c0();
            puVar19 = puVar19 + 1;
            local_1c = puVar19;
          } while ((int)puVar19 < local_18);
        }
      }
      if (local_38 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      *(int **)(puVar12 + -4) = local_38;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_00648439;
      FUN_00aae91b();
    }
    piVar6 = (int *)in_ECX[0x18];
    if (piVar6 != (int *)0x0) {
      do {
        if (*piVar6 == *piVar18) {
          if (piVar6 != (int *)0x0) {
            if ((char)in_ECX[0x1b] == '\0') {
              iVar9 = piVar6[1];
              iVar1 = piVar6[2];
              if (iVar9 != 0) {
                *(int *)(iVar9 + 8) = iVar1;
              }
              if (iVar1 != 0) {
                *(int *)(iVar1 + 4) = iVar9;
              }
              if (piVar6 == (int *)in_ECX[0x18]) {
                in_ECX[0x18] = iVar1;
              }
              if (piVar6 == (int *)in_ECX[0x19]) {
                in_ECX[0x19] = iVar9;
              }
              *(int **)(puVar19 + -4) = piVar6;
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar19 + -8) = &UNK_00648317;
              FUN_00aae91b();
            }
            *(undefined1 *)(piVar6 + 3) = 1;
          }
          break;
        }
        piVar6 = (int *)piVar6[2];
      } while (piVar6 != (int *)0x0);
    }
    if ((undefined4 *)*piVar18 != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)*piVar18;
      *(undefined4 *)(puVar19 + -4) = 1;
      puVar11 = (undefined4 *)(puVar19 + -8);
      puVar19 = puVar19 + -8;
      *puVar11 = 0x64832b;
      (*pcVar2)();
    }
    piVar18 = (int *)piVar18[2];
  } while( true );
}

