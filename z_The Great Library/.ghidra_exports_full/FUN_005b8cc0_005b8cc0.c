// FUN_005b8cc0 @ 005b8cc0 body=[[005b8cc0, 005b8e23] [005b8e2e, 005b8e55] [005b8e61, 005b8ee5] [005b8ef0, 005b910a] [005b911f, 005b9160] [005b9167, 005b91a8]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x005b8e17) */
/* WARNING: Removing unreachable block (ram,0x005b8e1c) */
/* WARNING: Removing unreachable block (ram,0x005b8e2e) */
/* WARNING: Removing unreachable block (ram,0x005b8e42) */
/* WARNING: Removing unreachable block (ram,0x005b8e3d) */
/* WARNING: Removing unreachable block (ram,0x005b8e47) */
/* WARNING: Removing unreachable block (ram,0x005b8e4c) */
/* WARNING: Removing unreachable block (ram,0x005b8e61) */
/* WARNING: Removing unreachable block (ram,0x005b8e7c) */
/* WARNING: Removing unreachable block (ram,0x005b8e7f) */
/* WARNING: Removing unreachable block (ram,0x005b8e83) */
/* WARNING: Removing unreachable block (ram,0x005b8e87) */
/* WARNING: Removing unreachable block (ram,0x005b8e0f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b8cc0(int *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar13;
  undefined4 extraout_ECX_00;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar17;
  undefined4 uStack_80;
  int aiStack_7c [3];
  int *local_60;
  int *local_5c;
  int local_58;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  undefined4 *puVar16;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46010;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 4) * 4);
  aiStack_7c[1] = 0x5b8d03;
  ExceptionList = &local_10;
  aiStack_7c[2] = iVar1;
  cVar7 = FUN_0051b040();
  iVar5 = DAT_0125870c;
  if (cVar7 != '\0') {
    local_8 = 1;
    aiStack_7c[2] = 0x5b8d46;
    iVar8 = (**(code **)(*DAT_012588e8 + 0x18))();
    aiStack_7c[2] = 0x5b8d4d;
    iVar6 = -iVar8;
    puVar15 = &stack0xffffff90 + iVar6;
    *(int *)((int)aiStack_7c + iVar6 + 8) = iVar8;
    *(undefined4 *)((int)aiStack_7c + iVar6 + 4) = 0;
    *(undefined1 **)((int)aiStack_7c + iVar6) = &stack0xffffff90 + iVar6;
    *(undefined4 *)((int)&uStack_80 + iVar6) = 0x5b8d5b;
    _memset(*(void **)((int)aiStack_7c + iVar6),*(int *)((int)aiStack_7c + iVar6 + 4),
            *(size_t *)((int)aiStack_7c + iVar6 + 8));
    iVar8 = *(int *)(in_ECX + 0x58);
    *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = 0x10;
    (&stack0xffffff90)[iVar8 + iVar6] = 1;
    *(undefined4 *)((int)aiStack_7c + iVar6 + 4) = 0x5b8d6c;
    piVar9 = (int *)FUN_00aae9af();
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = extraout_ECX;
      *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = 0x3f000000;
      *(undefined4 *)((int)aiStack_7c + iVar6 + 4) = 0x5b8da1;
      FUN_00401000();
      *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = 0x5b8da9;
      iVar8 = FUN_00b31c00();
      *piVar9 = in_ECX;
      piVar9[1] = iVar8;
      piVar9[2] = 0;
      piVar9[3] = 0;
    }
    *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = 0x5b8dc0;
    FUN_005b9f50();
    *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = 0x10;
    *(undefined4 *)((int)aiStack_7c + iVar6 + 4) = 0x5b8dc7;
    local_60 = (int *)FUN_00aae9af();
    if (local_60 == (int *)0x0) {
      local_60 = (int *)0x0;
    }
    else {
      *local_60 = (int)piVar9;
      local_60[1] = 0;
      local_60[2] = 0;
      *(undefined1 *)(local_60 + 3) = 0;
    }
    piVar9 = DAT_012588e8;
    iVar8 = _DAT_00000000;
    local_58 = 1;
    if (param_3 == _DAT_00000000) {
      *(undefined4 *)((int)aiStack_7c + iVar6 + 8) = 0;
      *(undefined4 *)((int)aiStack_7c + iVar6 + 4) = 0x5b9148;
      FUN_005b8450();
      puVar17 = &stack0xffffff90 + iVar6;
    }
    else {
      iVar2 = *(int *)(_DAT_00000000 + 0x5c);
      local_20 = 0;
      puVar17 = &stack0xffffff90 + iVar6;
      if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
        local_1c = 0;
        local_5c = local_60;
        do {
          iVar3 = *(int *)(*(int *)(iVar5 + 0x2238) +
                          *(int *)(*(int *)(iVar2 + 200) + 4 + local_1c) * 4);
          if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0') {
            iVar14 = *param_1;
            *(int *)(puVar15 + -4) = iVar3;
            *(int *)(puVar15 + -8) = iVar8;
            pcVar4 = *(code **)(iVar14 + 0x10);
            puVar16 = (undefined4 *)(puVar15 + -0xc);
            puVar15 = puVar15 + -0xc;
            *puVar16 = 0x5b8f27;
            cVar7 = (*pcVar4)();
            if (cVar7 != '\0') {
              piVar13 = (int *)(*(int *)(iVar2 + 200) + local_1c);
              if ((*piVar13 != 4) &&
                 ((*piVar13 != 3 || (*(int *)(piVar9[2] + piVar13[3] * 4) != 0)))) {
                *(int *)(puVar15 + -4) = iVar1;
                *(undefined4 *)(puVar15 + -8) = 0x5b8f69;
                cVar7 = FUN_0051b040();
                if ((cVar7 != '\0') &&
                   (((param_5 != '\0' ||
                     (*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(param_3 + 300) * 4) +
                              0x34) == 0)) &&
                    ((&stack0xffffff90)[*(int *)(iVar3 + 0x58) + iVar6] == '\0')))) {
                  iVar14 = piVar13[4];
                  if (-1 < iVar14) {
                    *(undefined4 *)(puVar15 + -4) = 0x5b8ff9;
                    iVar10 = FUN_005b8420();
                    *(undefined4 *)(puVar15 + -4) = extraout_ECX_00;
                    *(undefined4 *)(puVar15 + -4) = 0x449c5000;
                    *(undefined4 *)(puVar15 + -8) = 0x5b9014;
                    FUN_00401000();
                    *(undefined4 *)(puVar15 + -4) = 0x5b901c;
                    iVar11 = FUN_00b31c00();
                    *(undefined4 *)(puVar15 + -4) = 0;
                    *(undefined4 *)(puVar15 + -8) = 1000;
                    *(longlong *)(puVar15 + -0x10) = (longlong)iVar11 * (longlong)(iVar10 * 1000);
                    *(undefined4 *)(puVar15 + -0x14) = 0x5b902c;
                    iVar10 = __alldiv();
                    *(undefined4 *)(puVar15 + -4) = 0x10;
                    *(undefined4 *)(puVar15 + -8) = 0x5b9035;
                    piVar13 = (int *)FUN_00aae9af();
                    if (piVar13 == (int *)0x0) {
                      piVar13 = (int *)0x0;
                    }
                    else {
                      iVar11 = _DAT_00000008 + iVar14;
                      iVar14 = _DAT_00000008 + iVar14;
                      *piVar13 = iVar3;
                      piVar13[1] = iVar14 + iVar10;
                      piVar13[2] = iVar11;
                      piVar13[3] = 0;
                    }
                    *(undefined4 *)(puVar15 + -4) = 0x10;
                    *(undefined4 *)(puVar15 + -8) = 0x5b906a;
                    piVar12 = (int *)FUN_00aae9af();
                    if (piVar12 == (int *)0x0) {
                      piVar12 = (int *)0x0;
                    }
                    else {
                      *piVar12 = (int)piVar13;
                      piVar12[1] = (int)local_5c;
                      piVar12[2] = 0;
                      *(undefined1 *)(piVar12 + 3) = 0;
                    }
                    piVar13 = piVar12;
                    if (local_58 != 0) {
                      local_5c[2] = (int)piVar12;
                      piVar13 = local_60;
                    }
                    local_60 = piVar13;
                    *(undefined4 *)(puVar15 + -4) = 0x5b90ab;
                    FUN_005b9f50();
                    local_5c = piVar12;
                    local_58 = local_58 + 1;
                  }
                  (&stack0xffffff90)[*(int *)(iVar3 + 0x58) + iVar6] = 1;
                }
              }
            }
          }
          local_20 = local_20 + 1;
          local_1c = local_1c + 0x24;
          puVar17 = puVar15;
        } while (local_20 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
      }
    }
    if (local_60 != (int *)0x0) {
      *(int *)(puVar17 + -4) = *local_60;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar17 + -8) = &UNK_005b910b;
      FUN_00aae91b();
    }
    if (0 < param_4[2]) {
      iVar1 = *param_4;
      if (iVar1 != 0) {
        if ((char)param_4[3] == '\0') {
          iVar5 = *(int *)(iVar1 + 8);
          *param_4 = iVar5;
          if (iVar5 == 0) {
            param_4[1] = 0;
          }
          else {
            *(undefined4 *)(iVar5 + 4) = 0;
          }
          *(int *)(puVar17 + -4) = iVar1;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar17 + -8) = &UNK_005b9161;
          FUN_00aae91b();
        }
        *(undefined1 *)(iVar1 + 0xc) = 1;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(puVar17 + -4) = 0x5b917a;
      FUN_005b9fb0();
      ExceptionList = local_10;
      return 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)(puVar17 + -4) = 0x5b9191;
    FUN_005b9fb0();
  }
  ExceptionList = local_10;
  return 0;
}

