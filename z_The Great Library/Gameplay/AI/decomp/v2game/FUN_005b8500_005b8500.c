// FUN_005b8500 @ 005b8500  (requested 005B8500, first bytes: 55 8B EC 8B 55 0C 83 EC)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_005b8500(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 uStack_5c;
  int aiStack_58 [3];
  int aiStack_4c [2];
  int iStack_44;
  int local_2c;
  int local_24;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 *puVar14;
  
  if (((param_2 != 0) && (in_EAX != 0)) && (param_3 != 0)) {
    iStack_44 = param_3;
    aiStack_4c[0] = param_2;
    aiStack_58[2] = 0x5b8536;
    cVar6 = (**(code **)(*param_1 + 4))();
    iVar4 = DAT_0125870c;
    if (cVar6 != '\0') {
      aiStack_58[2] = 0x5b8554;
      iVar7 = (**(code **)(*DAT_012588e8 + 0x18))();
      aiStack_58[2] = 0x5b855b;
      iVar5 = -iVar7;
      puVar13 = (undefined1 *)((int)aiStack_4c + iVar7 * -0x15);
      *(int *)((int)aiStack_4c + iVar5 + -4) = iVar7;
      *(undefined4 *)((int)aiStack_58 + iVar5 + 4) = 0;
      *(int *)((int)aiStack_58 + iVar5) = (int)aiStack_4c + iVar5;
      *(undefined4 *)((int)&uStack_5c + iVar5) = 0x5b8569;
      _memset(*(void **)((int)aiStack_58 + iVar5),*(int *)((int)aiStack_58 + iVar5 + 4),
              *(size_t *)((int)aiStack_4c + iVar5 + -4));
      *(undefined4 *)((int)aiStack_4c + iVar5 + -4) = 0x5b8578;
      *(int *)((int)aiStack_4c + iVar7 * -0x11 + -4) = iVar7 * 0x10;
      *(undefined4 *)((int)aiStack_58 + iVar7 * -0x11 + 4) = 0;
      *(int *)((int)aiStack_58 + iVar7 * -0x11) = (int)aiStack_4c + iVar7 * -0x11;
      local_c = (undefined1 *)((int)aiStack_4c + iVar7 * -0x11);
      *(undefined4 *)((int)&uStack_5c + iVar7 * -0x11) = 0x5b8586;
      _memset(*(void **)((int)aiStack_58 + iVar7 * -0x11),
              *(int *)((int)aiStack_58 + iVar7 * -0x11 + 4),
              *(size_t *)((int)aiStack_4c + iVar7 * -0x11 + -4));
      *(undefined4 *)((int)aiStack_4c + iVar7 * -0x11 + -4) = 0x5b8597;
      *(int *)((int)aiStack_4c + iVar7 * -0x15 + -4) = iVar7 * 4;
      *(undefined4 *)((int)aiStack_58 + iVar7 * -0x15 + 4) = 0xffffffff;
      *(int *)((int)aiStack_58 + iVar7 * -0x15) = (int)aiStack_4c + iVar7 * -0x15;
      local_18 = (undefined1 *)((int)aiStack_4c + iVar7 * -0x15);
      *(undefined4 *)((int)&uStack_5c + iVar7 * -0x15) = 0x5b85a5;
      _memset(*(void **)((int)aiStack_58 + iVar7 * -0x15),
              *(int *)((int)aiStack_58 + iVar7 * -0x15 + 4),
              *(size_t *)((int)aiStack_4c + iVar7 * -0x15 + -4));
      iVar1 = *(int *)(in_EAX + 0x58);
      local_8 = *(undefined4 *)(DAT_0125870c + 0x2abc);
      *(undefined1 *)((int)aiStack_4c + iVar1 + iVar5) = 1;
      *(int *)(local_c + iVar1 * 0x10) = in_EAX;
      local_14 = *(int *)(in_EAX + 0x58);
      puVar17 = (undefined1 *)((int)aiStack_4c + iVar7 * -0x15);
      do {
        pcVar2 = *(code **)(*param_1 + 0xc);
        piVar12 = (int *)(local_c + local_14 * 0x10);
        iVar1 = *piVar12;
        local_14 = *(int *)(puVar17 + local_14 * 4);
        *(int *)(puVar13 + -4) = iVar1;
        *(int *)(puVar13 + -8) = param_3;
        *(int *)(puVar13 + -0xc) = param_2;
        puVar14 = (undefined4 *)(puVar13 + -0x10);
        puVar13 = puVar13 + -0x10;
        *puVar14 = 0x5b85f6;
        cVar6 = (*pcVar2)();
        if (cVar6 == '\x01') {
          *(int **)(puVar13 + -4) = piVar12;
          *(undefined4 *)(puVar13 + -8) = 0x5b87bc;
          FUN_005b8450();
          break;
        }
        iVar7 = *(int *)(iVar1 + 0x5c);
        local_10 = 0;
        if (0 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24) {
          local_24 = 0;
          do {
            iVar8 = local_24 + *(int *)(iVar7 + 200);
            iVar3 = *(int *)(*(int *)(iVar4 + 0x2238) + *(int *)(iVar8 + 4) * 4);
            if (*(char *)((int)aiStack_4c + *(int *)(iVar3 + 0x58) + iVar5) == '\0') {
              pcVar2 = *(code **)(*param_1 + 8);
              *(int *)(puVar13 + -4) = iVar8;
              *(int *)(puVar13 + -8) = iVar3;
              *(int *)(puVar13 + -0xc) = iVar1;
              *(int *)(puVar13 + -0x10) = param_3;
              *(int *)(puVar13 + -0x14) = param_2;
              puVar15 = (undefined4 *)(puVar13 + -0x18);
              puVar13 = puVar13 + -0x18;
              *puVar15 = 0x5b8671;
              cVar6 = (*pcVar2)();
              if (cVar6 != '\0') {
                pcVar2 = *(code **)*param_1;
                *(int *)(puVar13 + -4) = param_2;
                *(int *)(puVar13 + -8) = iVar4;
                *(int *)(puVar13 + -0xc) = local_10;
                *(int *)(puVar13 + -0x10) = iVar7;
                *(int **)(puVar13 + -0x14) = &local_1c;
                puVar16 = (undefined4 *)(puVar13 + -0x18);
                puVar13 = puVar13 + -0x18;
                *puVar16 = 0x5b8693;
                (*pcVar2)();
                if (-1 < local_1c) {
                  *(undefined4 *)(puVar13 + -4) = 0x5b86df;
                  iVar8 = FUN_005b8420();
                  *(undefined4 *)(puVar13 + -4) = 0;
                  *(undefined4 *)(puVar13 + -8) = 1000;
                  *(longlong *)(puVar13 + -0x10) = (longlong)(iVar8 * 1000) * (longlong)DAT_0125fc18
                  ;
                  *(undefined4 *)(puVar13 + -0x14) = 0x5b86f9;
                  iVar9 = __alldiv();
                  piVar11 = (int *)(local_c + *(int *)(iVar3 + 0x58) * 0x10);
                  local_2c = -1;
                  piVar11[3] = (int)piVar12;
                  iVar8 = piVar12[2];
                  *piVar11 = iVar3;
                  piVar11[2] = iVar8 + local_1c;
                  iVar9 = piVar12[2] + local_1c + iVar9;
                  piVar11[1] = iVar9;
                  iVar8 = local_14;
                  if (local_14 == -1) {
LAB_005b8751:
                    iVar9 = *(int *)(iVar3 + 0x58);
                    local_14 = iVar9;
                  }
                  else {
                    do {
                      iVar10 = iVar8;
                      iVar8 = iVar10;
                      if (iVar9 <= *(int *)(local_c + iVar10 * 0x10 + 4)) break;
                      iVar8 = *(int *)(local_18 + iVar10 * 4);
                      local_2c = iVar10;
                    } while (iVar8 != -1);
                    if (local_2c == -1) goto LAB_005b8751;
                    iVar9 = *(int *)(iVar3 + 0x58);
                    *(int *)(local_18 + local_2c * 4) = iVar9;
                  }
                  *(int *)(local_18 + iVar9 * 4) = iVar8;
                }
                *(undefined1 *)((int)aiStack_4c + *(int *)(iVar3 + 0x58) + iVar5) = 1;
              }
            }
            local_10 = local_10 + 1;
            local_24 = local_24 + 0x24;
          } while (local_10 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24);
        }
        puVar17 = local_18;
      } while (local_14 != -1);
      if (0 < param_4[2]) {
        iVar4 = *param_4;
        if (iVar4 == 0) {
          return 1;
        }
        if ((char)param_4[3] != '\0') {
          *(undefined1 *)(iVar4 + 0xc) = 1;
          return 1;
        }
        iVar1 = *(int *)(iVar4 + 8);
        *param_4 = iVar1;
        if (iVar1 != 0) {
          *(int *)(puVar13 + -4) = iVar4;
          *(undefined4 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar13 + -8) = &UNK_005b87f7;
          FUN_00aae91b();
        }
        *(int *)(puVar13 + -4) = iVar4;
        param_4[1] = 0;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar13 + -8) = &UNK_005b8814;
        FUN_00aae91b();
      }
    }
  }
  return 0;
}

