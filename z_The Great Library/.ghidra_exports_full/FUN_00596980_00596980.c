// FUN_00596980 @ 00596980 body=[[00596980, 00596aa9] [00596ab0, 00596ec2]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00596980(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int aiStack_5c [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar5 = *(int **)(param_4 + 0x20);
  iVar11 = 0;
  if (piVar5 != (int *)0x0) {
    do {
      iVar6 = *piVar5;
      piVar5 = (int *)piVar5[2];
      iVar11 = iVar11 + *(int *)(iVar6 + 0x40);
    } while (piVar5 != (int *)0x0);
    if (0 < iVar11) {
      iVar6 = iVar11 * 4 + 8;
      local_28 = *(int *)(*(int *)(param_2 + 0x38) + 0x34);
      aiStack_5c[3] = 0x5969ce;
      iVar3 = -iVar6;
      puVar10 = &stack0xffffffb4 + iVar6 * -2;
      *(undefined4 *)(&stack0xffffffb4 + iVar3) = 0xa110ca7e;
      iVar11 = iVar11 * 4;
      *(undefined4 *)(&stack0xffffffb8 + iVar11 + iVar3) = 0xa110ca7e;
      *(undefined4 *)((int)aiStack_5c + iVar3 + 0xc) = 0x5969ee;
      puVar1 = &stack0xffffffb8 + iVar6 * -2;
      *(int *)((int)aiStack_5c + iVar6 * -2 + 0xc) = iVar11;
      *(undefined4 *)((int)aiStack_5c + iVar6 * -2 + 8) = 0;
      *(undefined4 *)(&stack0xffffffb4 + iVar6 * -2) = 0xa110ca7e;
      *(undefined1 **)((int)aiStack_5c + iVar6 * -2 + 4) = puVar1;
      *(undefined4 *)(puVar1 + iVar11) = 0xa110ca7e;
      *(undefined4 *)((int)aiStack_5c + iVar6 * -2) = 0x596a0c;
      _memset(*(void **)((int)aiStack_5c + iVar6 * -2 + 4),
              *(int *)((int)aiStack_5c + iVar6 * -2 + 8),
              *(size_t *)((int)aiStack_5c + iVar6 * -2 + 0xc));
      local_24 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x98) / 1000;
      iVar11 = 0;
      local_1c = *(int **)(param_4 + 0x20);
      local_c = 0;
      local_8 = 0;
      if (local_1c != (int *)0x0) {
        do {
          piVar5 = local_1c + 2;
          if (*local_1c == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)(*local_1c + 0x38);
          }
          local_1c = (int *)*piVar5;
          if ((int *)*piVar4 != (int *)0x0) {
            local_14 = (int *)(puVar1 + iVar11 * 4);
            local_20 = &stack0xffffffb8 + (iVar3 - (int)puVar1);
            local_18 = (int *)*piVar4;
            do {
              piVar5 = (int *)local_18[2];
              piVar4 = (int *)*local_18;
              *(int **)(local_20 + (int)local_14) = piVar4;
              iVar11 = 0;
              local_18 = piVar5;
              local_10 = piVar4;
              if (0 < (int)(*(int *)(param_4 + 0x70) - *(int *)(param_4 + 0x6c) & 0xfffffffcU)) {
                do {
                  *(undefined4 *)(puVar10 + -4) = 0x596ac1;
                  piVar5 = (int *)FUN_00967f50();
                  if ((piVar5 != (int *)0x0) && (piVar5 == piVar4)) {
                    param_2 = *(int *)(*(int *)(param_4 + 0x6c) + iVar11 * 4);
                    goto LAB_00596ae4;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < *(int *)(param_4 + 0x70) - *(int *)(param_4 + 0x6c) >> 2);
              }
              param_2 = 0;
LAB_00596ae4:
              iVar11 = 1;
              if ((param_2 == 0) ||
                 ((*(int *)(param_2 + 0x5c) != 5 && (*(int *)(param_2 + 0x5c) != 6)))) {
                *(int **)(puVar10 + -4) = piVar4;
                *(undefined4 *)(puVar10 + -8) = 0x596b03;
                iVar6 = FUN_005989c0();
                if (local_24 <= iVar6) goto LAB_00596b08;
                if (param_2 != 0) {
                  iVar11 = *(int *)(param_2 + 0x58) + *(int *)(param_1 + 0x58);
                  if (iVar11 + 0x189373U < 0x39580e) {
                    iVar11 = (iVar11 * 1000) / 2000;
                  }
                  else {
                    *(undefined4 *)(puVar10 + -4) = 0;
                    *(undefined4 *)(puVar10 + -8) = 1000;
                    *(int *)(puVar10 + -0xc) = iVar11 >> 0x1f;
                    *(int *)(puVar10 + -0x10) = iVar11;
                    *(undefined4 *)(puVar10 + -0x14) = 0x596b6b;
                    uVar13 = __allmul();
                    *(undefined4 *)(puVar10 + -4) = 0;
                    *(undefined4 *)(puVar10 + -8) = 2000;
                    *(undefined8 *)(puVar10 + -0x10) = uVar13;
                    *(undefined4 *)(puVar10 + -0x14) = 0x596b79;
                    iVar11 = __alldiv();
                  }
                  if (iVar11 < 0) {
                    iVar11 = 0;
                  }
                  else if (1000 < iVar11) {
                    iVar11 = 1000;
                  }
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 100000;
                  *(int *)(puVar10 + -0xc) = iVar11 >> 0x1f;
                  *(int *)(puVar10 + -0x10) = iVar11;
                  *(undefined4 *)(puVar10 + -0x14) = 0x596b9c;
                  uVar13 = __allmul();
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 1000;
                  *(undefined8 *)(puVar10 + -0x10) = uVar13;
                  *(undefined4 *)(puVar10 + -0x14) = 0x596baa;
                  iVar11 = __alldiv();
                  iVar11 = 0x65 - iVar11 / 1000;
                }
                iVar7 = *(int *)(piVar4[0xe] + 0x34);
                iVar6 = 1000;
                if (local_28 == 4) {
                  if (iVar7 != 4) goto LAB_00596bf2;
LAB_00596c20:
                  *(undefined4 *)(puVar10 + -4) = 1000;
LAB_00596c21:
                  *(undefined4 *)(puVar10 + -4) = 0x43fa4001;
                  *(undefined4 *)(puVar10 + -8) = 0x596c33;
                  FUN_00401000();
                  *(undefined4 *)(puVar10 + -4) = 0x596c3b;
                  iVar6 = FUN_00b31c00();
                  iVar6 = iVar6 + 1000;
                }
                else if (local_28 == 5) {
LAB_00596bf2:
                  if (iVar7 == 5) goto LAB_00596c20;
                  if (iVar7 == 6) {
                    uVar12 = 0x43fa4001;
                    *(undefined4 *)(puVar10 + -4) = 1000;
                    goto LAB_00596c05;
                  }
                }
                else if (local_28 == 6) {
                  *(undefined4 *)(puVar10 + -4) = 1000;
                  if (iVar7 == 6) goto LAB_00596c21;
                  uVar12 = 0x44612000;
LAB_00596c05:
                  *(undefined4 *)(puVar10 + -4) = uVar12;
                  *(undefined4 *)(puVar10 + -8) = 0x596c0f;
                  FUN_00401000();
                  *(undefined4 *)(puVar10 + -4) = 0x596c17;
                  iVar6 = FUN_00b31c00();
                  iVar6 = 1000 - iVar6;
                }
                *(undefined4 *)(puVar10 + -4) = 0;
                *(undefined4 *)(puVar10 + -8) = 1000;
                *(longlong *)(puVar10 + -0x10) = (longlong)(iVar11 * 1000) * (longlong)iVar6;
                *(undefined4 *)(puVar10 + -0x14) = 0x596c59;
                iVar11 = __alldiv();
                iVar11 = iVar11 / 1000;
                if (iVar11 < 1) {
                  iVar11 = 1;
                }
                pcVar2 = *(code **)(*piVar4 + 0x30);
                *(undefined4 *)(puVar10 + -4) = 0;
                *(int **)(puVar10 + -8) = &local_2c;
                puVar9 = puVar10 + -0xc;
                *(undefined4 *)(puVar10 + -0xc) = 0x596c85;
                (*pcVar2)();
                pcVar2 = *(code **)(*piVar4 + 0x34);
                *(undefined4 *)(puVar9 + -4) = 0;
                *(int **)(puVar9 + -8) = &local_30;
                puVar10 = puVar9 + -0xc;
                *(undefined4 *)(puVar9 + -0xc) = 0x596c94;
                (*pcVar2)();
                iVar7 = local_2c;
                iVar6 = local_30;
                if ((0 < local_2c) && (0 < local_30)) {
                  iVar8 = local_10[0xf];
                  if (local_2c == 0) {
                    iVar7 = -1;
                  }
                  else if (iVar8 + 0x189373U < 0x39580e) {
                    iVar7 = (iVar8 * 1000) / local_2c;
                  }
                  else {
                    *(undefined4 *)(puVar10 + -4) = 0;
                    *(undefined4 *)(puVar10 + -8) = 1000;
                    *(int *)(puVar10 + -0xc) = iVar8 >> 0x1f;
                    *(int *)(puVar10 + -0x10) = iVar8;
                    *(undefined4 *)(puVar10 + -0x14) = 0x596ce1;
                    uVar13 = __allmul();
                    *(int *)(puVar10 + -4) = iVar7 >> 0x1f;
                    *(int *)(puVar10 + -8) = iVar7;
                    *(undefined8 *)(puVar10 + -0x10) = uVar13;
                    *(undefined4 *)(puVar10 + -0x14) = 0x596cf5;
                    iVar7 = __alldiv();
                  }
                  if ((local_10[0x1d] == 0) || (*(char *)(local_10[0x1d] + 0x164) == '\0')) {
                    iVar8 = local_10[0x10];
                  }
                  else {
                    iVar8 = 0;
                  }
                  if (iVar6 == 0) {
                    iVar6 = -1;
                  }
                  else if (iVar8 + 0x189373U < 0x39580e) {
                    iVar6 = (iVar8 * 1000) / iVar6;
                  }
                  else {
                    *(undefined4 *)(puVar10 + -4) = 0;
                    *(undefined4 *)(puVar10 + -8) = 1000;
                    *(int *)(puVar10 + -0xc) = iVar8 >> 0x1f;
                    *(int *)(puVar10 + -0x10) = iVar8;
                    *(undefined4 *)(puVar10 + -0x14) = 0x596d42;
                    uVar13 = __allmul();
                    *(int *)(puVar10 + -4) = iVar6 >> 0x1f;
                    *(int *)(puVar10 + -8) = iVar6;
                    *(undefined8 *)(puVar10 + -0x10) = uVar13;
                    *(undefined4 *)(puVar10 + -0x14) = 0x596d56;
                    iVar6 = __alldiv();
                  }
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 1000;
                  *(int *)(puVar10 + -0xc) = iVar6 + iVar7 >> 0x1f;
                  *(int *)(puVar10 + -0x10) = iVar6 + iVar7;
                  *(undefined4 *)(puVar10 + -0x14) = 0x596d67;
                  uVar13 = __allmul();
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 2000;
                  *(undefined8 *)(puVar10 + -0x10) = uVar13;
                  *(undefined4 *)(puVar10 + -0x14) = 0x596d75;
                  iVar6 = __alldiv();
                  if (iVar6 < 0) {
                    iVar6 = 0;
                  }
                  else if (1000 < iVar6) {
                    iVar6 = 1000;
                  }
                  iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x8c);
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 1000;
                  *(longlong *)(puVar10 + -0x10) = (longlong)iVar7 * (longlong)(1000 - iVar6);
                  *(undefined4 *)(puVar10 + -0x14) = 0x596daf;
                  iVar6 = __alldiv();
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 1000;
                  *(longlong *)(puVar10 + -0x10) =
                       (longlong)(iVar11 * 1000) * (longlong)(iVar6 + 1000);
                  *(undefined4 *)(puVar10 + -0x14) = 0x596dcd;
                  iVar11 = __alldiv();
                  iVar11 = iVar11 / 1000;
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                }
                if (((param_2 != 0) && (*(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x10))) &&
                   (*(int *)(param_2 + 0x34) == *(int *)(param_1 + 0xc))) {
                  iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x5c);
                  *(undefined4 *)(puVar10 + -4) = 0;
                  *(undefined4 *)(puVar10 + -8) = 1000;
                  *(longlong *)(puVar10 + -0x10) = (longlong)iVar6 * (longlong)(iVar11 * 1000);
                  *(undefined4 *)(puVar10 + -0x14) = 0x596e26;
                  iVar11 = __alldiv();
                  iVar11 = iVar11 / 1000;
                }
              }
              else {
LAB_00596b08:
                iVar11 = 0;
              }
              local_8 = local_8 + iVar11;
              local_c = local_c + 1;
              *local_14 = iVar11;
              local_14 = local_14 + 1;
              iVar11 = local_c;
            } while (local_18 != (int *)0x0);
          }
        } while (local_1c != (int *)0x0);
        if (0 < local_8) {
          *(undefined4 *)(puVar10 + -4) = 0;
          *(undefined4 *)(puVar10 + -8) = 6;
          *(undefined4 *)(puVar10 + -0xc) = 0x596e7a;
          iVar6 = FUN_009b7950();
          iVar8 = 0;
          iVar7 = 0;
          if (0 < iVar11) {
            do {
              iVar8 = iVar8 + *(int *)(puVar1 + iVar7 * 4);
              if (iVar6 % local_8 <= iVar8) {
                return *(undefined4 *)(&stack0xffffffb8 + iVar7 * 4 + iVar3);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar11);
            if (0 < iVar11) {
              return *(undefined4 *)(&stack0xffffffb4 + iVar11 * 4 + iVar3);
            }
          }
        }
      }
    }
  }
  return 0;
}

