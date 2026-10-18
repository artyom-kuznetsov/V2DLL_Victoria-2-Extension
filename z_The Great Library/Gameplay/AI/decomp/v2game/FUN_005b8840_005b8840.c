// FUN_005b8840 @ 005b8840 body=[[005b8840, 005b8977] [005b8982, 005b89a9] [005b89b5, 005b8c20] [005b8c35, 005b8c6b] [005b8c72, 005b8cb3]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x005b896b) */
/* WARNING: Removing unreachable block (ram,0x005b8970) */
/* WARNING: Removing unreachable block (ram,0x005b8982) */
/* WARNING: Removing unreachable block (ram,0x005b8996) */
/* WARNING: Removing unreachable block (ram,0x005b8991) */
/* WARNING: Removing unreachable block (ram,0x005b899b) */
/* WARNING: Removing unreachable block (ram,0x005b89a0) */
/* WARNING: Removing unreachable block (ram,0x005b89b5) */
/* WARNING: Removing unreachable block (ram,0x005b89d0) */
/* WARNING: Removing unreachable block (ram,0x005b89d3) */
/* WARNING: Removing unreachable block (ram,0x005b89db) */
/* WARNING: Removing unreachable block (ram,0x005b8b40) */
/* WARNING: Removing unreachable block (ram,0x005b8b59) */
/* WARNING: Removing unreachable block (ram,0x005b8b44) */
/* WARNING: Removing unreachable block (ram,0x005b8967) */
/* WARNING: Removing unreachable block (ram,0x005b8bf6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b8840(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar17;
  undefined4 uStack_74;
  int aiStack_70 [3];
  int *local_54;
  int *local_50;
  int local_4c;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  undefined4 *puVar16;
  
  iVar5 = DAT_0125870c;
  puStack_c = &LAB_00b3f9e0;
  local_10 = ExceptionList;
  local_8 = 1;
  aiStack_70[2] = 0x5b889b;
  ExceptionList = &local_10;
  iVar7 = (**(code **)(*DAT_012588e8 + 0x18))();
  aiStack_70[2] = 0x5b88a2;
  iVar4 = -iVar7;
  puVar15 = &stack0xffffff9c + iVar4;
  *(int *)((int)aiStack_70 + iVar4 + 8) = iVar7;
  *(undefined4 *)((int)aiStack_70 + iVar4 + 4) = 0;
  *(undefined1 **)((int)aiStack_70 + iVar4) = &stack0xffffff9c + iVar4;
  *(undefined4 *)((int)&uStack_74 + iVar4) = 0x5b88b0;
  _memset(*(void **)((int)aiStack_70 + iVar4),*(int *)((int)aiStack_70 + iVar4 + 4),
          *(size_t *)((int)aiStack_70 + iVar4 + 8));
  iVar7 = *(int *)(param_2 + 0x58);
  *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = 0x10;
  (&stack0xffffff9c)[iVar7 + iVar4] = 1;
  *(undefined4 *)((int)aiStack_70 + iVar4 + 4) = 0x5b88c1;
  piVar8 = (int *)FUN_00aae9af();
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = extraout_ECX;
    *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = 0x3f000000;
    *(undefined4 *)((int)aiStack_70 + iVar4 + 4) = 0x5b88f6;
    FUN_00401000();
    *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = 0x5b88fe;
    iVar7 = FUN_00b31c00();
    *piVar8 = param_2;
    piVar8[1] = iVar7;
    piVar8[2] = 0;
    piVar8[3] = 0;
  }
  *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = 0x5b8917;
  FUN_005b9f50();
  *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = 0x10;
  *(undefined4 *)((int)aiStack_70 + iVar4 + 4) = 0x5b891e;
  local_54 = (int *)FUN_00aae9af();
  if (local_54 == (int *)0x0) {
    local_54 = (int *)0x0;
  }
  else {
    *local_54 = (int)piVar8;
    local_54[1] = 0;
    local_54[2] = 0;
    *(undefined1 *)(local_54 + 3) = 0;
  }
  piVar8 = DAT_012588e8;
  iVar7 = _DAT_00000000;
  local_4c = 1;
  if (param_3 == _DAT_00000000) {
    *(undefined4 *)((int)aiStack_70 + iVar4 + 8) = 0;
    *(undefined4 *)((int)aiStack_70 + iVar4 + 4) = 0x5b8c08;
    FUN_005b8450();
    puVar17 = &stack0xffffff9c + iVar4;
  }
  else {
    iVar1 = *(int *)(_DAT_00000000 + 0x5c);
    local_1c = 0;
    puVar17 = &stack0xffffff9c + iVar4;
    if (0 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24) {
      local_20 = 0;
      local_50 = local_54;
      do {
        iVar2 = *(int *)(*(int *)(iVar5 + 0x2238) +
                        *(int *)(local_20 + 4 + *(int *)(iVar1 + 200)) * 4);
        pcVar3 = *(code **)(*param_1 + 0x10);
        *(int *)(puVar15 + -4) = iVar2;
        *(int *)(puVar15 + -8) = iVar7;
        puVar16 = (undefined4 *)(puVar15 + -0xc);
        puVar15 = puVar15 + -0xc;
        *puVar16 = 0x5b8a4d;
        cVar6 = (*pcVar3)();
        if (cVar6 != '\0') {
          piVar11 = (int *)(local_20 + *(int *)(iVar1 + 200));
          if ((*piVar11 != 4) &&
             (((*piVar11 != 3 || (*(int *)(piVar8[2] + piVar11[3] * 4) != 0)) &&
              ((&stack0xffffff9c)[*(int *)(iVar2 + 0x58) + iVar4] == '\0')))) {
            iVar14 = piVar11[4];
            if (-1 < iVar14) {
              *(undefined4 *)(puVar15 + -4) = 0x5b8ade;
              iVar9 = FUN_005b8420();
              *(undefined4 *)(puVar15 + -4) = extraout_ECX_00;
              *(undefined4 *)(puVar15 + -4) = 0x449c5000;
              *(undefined4 *)(puVar15 + -8) = 0x5b8af9;
              FUN_00401000();
              *(undefined4 *)(puVar15 + -4) = 0x5b8b01;
              iVar10 = FUN_00b31c00();
              *(undefined4 *)(puVar15 + -4) = 0;
              *(undefined4 *)(puVar15 + -8) = 1000;
              *(longlong *)(puVar15 + -0x10) = (longlong)iVar10 * (longlong)(iVar9 * 1000);
              *(undefined4 *)(puVar15 + -0x14) = 0x5b8b11;
              iVar9 = __alldiv();
              *(undefined4 *)(puVar15 + -4) = 0x10;
              *(undefined4 *)(puVar15 + -8) = 0x5b8b1a;
              piVar11 = (int *)FUN_00aae9af();
              if (piVar11 == (int *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                iVar10 = _DAT_00000008 + iVar14;
                iVar14 = _DAT_00000008 + iVar14;
                *piVar11 = iVar2;
                piVar11[1] = iVar14 + iVar9;
                piVar11[2] = iVar10;
                piVar11[3] = 0;
              }
              *(undefined4 *)(puVar15 + -4) = 0x10;
              *(undefined4 *)(puVar15 + -8) = 0x5b8b6d;
              piVar12 = (int *)FUN_00aae9af();
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)0x0;
              }
              else {
                *piVar12 = (int)piVar11;
                piVar12[1] = (int)local_50;
                piVar12[2] = 0;
                *(undefined1 *)(piVar12 + 3) = 0;
              }
              piVar11 = piVar12;
              if (local_4c != 0) {
                local_50[2] = (int)piVar12;
                piVar11 = local_54;
              }
              local_54 = piVar11;
              *(undefined4 *)(puVar15 + -4) = 0x5b8baa;
              FUN_005b9f50();
              local_50 = piVar12;
              local_4c = local_4c + 1;
            }
            (&stack0xffffff9c)[*(int *)(iVar2 + 0x58) + iVar4] = 1;
          }
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + 0x24;
        puVar17 = puVar15;
      } while (local_1c < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24);
    }
  }
  if (local_54 == (int *)0x0) {
    if (param_4[2] < 1) {
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(puVar17 + -4) = 0x5b8c9c;
      FUN_005b9fb0();
      uVar13 = 0;
    }
    else {
      iVar7 = *param_4;
      if (iVar7 != 0) {
        if ((char)param_4[3] == '\0') {
          iVar4 = *(int *)(iVar7 + 8);
          *param_4 = iVar4;
          if (iVar4 == 0) {
            param_4[1] = 0;
          }
          else {
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          *(int *)(puVar17 + -4) = iVar7;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar17 + -8) = &UNK_005b8c6c;
          FUN_00aae91b();
        }
        *(undefined1 *)(iVar7 + 0xc) = 1;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(puVar17 + -4) = 0x5b8c85;
      FUN_005b9fb0();
      uVar13 = 1;
    }
    ExceptionList = local_10;
    return uVar13;
  }
  *(int *)(puVar17 + -4) = *local_54;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -8) = &UNK_005b8c21;
  FUN_00aae91b();
}

