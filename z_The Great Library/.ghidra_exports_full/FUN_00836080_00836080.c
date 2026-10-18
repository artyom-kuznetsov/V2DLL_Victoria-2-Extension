// FUN_00836080 @ 00836080 body=[[00836080, 008362a6]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00836080(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  int local_10;
  int local_8;
  
  local_8 = 0;
  iVar10 = param_4 * -4;
  puVar13 = &stack0xffffffcc + iVar10;
  if (0 < param_4) {
    iVar6 = param_3 - (int)param_2;
    local_10 = param_4;
    piVar16 = param_2;
    do {
      *(undefined4 *)(puVar13 + -4) = 0;
      *(undefined4 *)(puVar13 + -8) = 0x8360cd;
      cVar5 = FUN_00911760();
      if (cVar5 != '\0') {
        uVar9 = *(undefined4 *)(param_1 + 0x38);
        uVar1 = *(undefined4 *)(param_1 + 0x34);
        iVar7 = *piVar16;
        *(undefined4 *)(puVar13 + -4) = 0;
        *(undefined4 *)(puVar13 + -8) = 0;
        *(undefined4 *)(puVar13 + -0xc) = 1;
        *(undefined4 *)(puVar13 + -0x10) = 0;
        *(undefined4 *)(puVar13 + -0x14) = uVar9;
        *(undefined4 *)(puVar13 + -0x18) = uVar1;
        *(int *)(puVar13 + -0x1c) = iVar7;
        *(undefined4 *)(puVar13 + -0x20) = 0x8360ed;
        param_3 = FUN_0083db20();
        if ((0x31 < param_3) && (param_3 != 0)) {
          iVar7 = *piVar16;
          iVar8 = *(int *)(DAT_012587e4 + 4);
          *(undefined4 *)(puVar13 + -4) = 0;
          *(undefined4 *)(puVar13 + -8) = 0;
          iVar8 = *(int *)(iVar8 + *(int *)(iVar7 + 0x14) * 4);
          uVar9 = *(undefined4 *)(param_1 + 0x38);
          uVar1 = *(undefined4 *)(param_1 + 0x34);
          *(undefined4 *)(puVar13 + -0xc) = 1;
          *(undefined4 *)(puVar13 + -0x10) = 0;
          *(undefined4 *)(puVar13 + -0x14) = uVar9;
          *(undefined4 *)(puVar13 + -0x18) = uVar1;
          *(int *)(puVar13 + -0x1c) = iVar7;
          *(undefined4 *)(puVar13 + -0x20) = 0x836131;
          iVar7 = FUN_0083db20();
          if (iVar7 < 0x32) {
            param_3 = 0;
          }
          piVar2 = *(int **)(iVar8 + 0xce4);
          do {
            do {
              if (piVar2 == (int *)0x0) {
                if (param_3 != 0) {
                  param_3 = *(int *)(iVar6 + (int)piVar16) * param_3;
                  local_8 = local_8 + param_3;
                  *(int *)(&stack0xffffffcc + (iVar10 - (int)param_2) + (int)piVar16) = param_3;
                  goto LAB_008361a9;
                }
                goto LAB_0083619f;
              }
              piVar3 = (int *)*piVar2;
              piVar2 = (int *)piVar2[2];
            } while (piVar3[3] != *(int *)(param_1 + 0x38));
            pcVar4 = *(code **)(*piVar3 + 0x20);
            piVar3 = (int *)*piVar16;
            puVar12 = puVar13 + -4;
            *(undefined4 *)(puVar13 + -4) = 0x83616c;
            iVar7 = (*pcVar4)();
            pcVar4 = *(code **)(*piVar3 + 0x20);
            puVar13 = puVar12 + -4;
            *(undefined4 *)(puVar12 + -4) = 0x836178;
            iVar8 = (*pcVar4)();
          } while (iVar7 != iVar8);
        }
      }
LAB_0083619f:
      *(undefined4 *)(&stack0xffffffcc + (iVar10 - (int)param_2) + (int)piVar16) = 0;
LAB_008361a9:
      iVar7 = DAT_012588e8;
      piVar16 = piVar16 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    if (local_8 != 0) {
      iVar6 = DAT_012588e8 + 0xb4;
      if (*(int *)(DAT_012588e8 + 0xa74) == 0) {
        *(undefined4 *)(puVar13 + -4) = 0x8361d9;
        FUN_009b7700();
      }
      iVar8 = *(int *)(iVar7 + 0xa74);
      uVar11 = *(uint *)(iVar6 + iVar8 * 4);
      uVar11 = uVar11 ^ (int)uVar11 >> 0xb;
      uVar11 = uVar11 ^ (uVar11 & 0xff3a58ad) << 7;
      uVar11 = uVar11 ^ (uVar11 & 0xffffdf8c) << 0xf;
      *(int *)(iVar7 + 0xa74) = (iVar8 + 1) % 0x270;
      iVar7 = 0;
      iVar6 = 0;
      while (iVar6 = iVar6 + *(int *)(&stack0xffffffcc + iVar7 * 4 + iVar10),
            iVar6 <= (int)((int)uVar11 >> 0x12 ^ uVar11) % local_8) {
        iVar7 = iVar7 + 1;
        if (param_4 <= iVar7) {
          return;
        }
      }
      piVar16 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                         0xcdc);
      pcVar4 = *(code **)(*(int *)param_2[iVar7] + 0x18);
      puVar14 = puVar13 + -4;
      *(undefined4 *)(puVar13 + -4) = 0x836264;
      uVar9 = (*pcVar4)();
      pcVar4 = *(code **)(*piVar16 + 0x44);
      puVar15 = puVar14 + -4;
      *(undefined4 *)(puVar14 + -4) = 0x83626f;
      iVar10 = (*pcVar4)();
      pcVar4 = *(code **)(**(int **)(iVar10 + 0x38) + 0x18);
      *(undefined4 *)(puVar15 + -4) = uVar9;
      *(undefined4 *)(puVar15 + -8) = 0x83627a;
      (*pcVar4)();
      piVar16 = (int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2[iVar7] + 0x14) * 4) +
                       0x1548);
      *piVar16 = *piVar16 + 10;
    }
  }
  return;
}

