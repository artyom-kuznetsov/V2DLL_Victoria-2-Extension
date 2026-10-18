// FUN_00a14340 @ 00a14340 body=[[00a14340, 00a143a8] [00a143b0, 00a14502] [00a14506, 00a145c3] [00a145c7, 00a145f1] [00a145f5, 00a14617] [00a1461b, 00a14642] [00a14646, 00a1465f] [00a14663, 00a1467c] [00a14680, 00a14716]]


void FUN_00a14340(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_17c;
  int local_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_14c;
  undefined4 uStack_13c;
  uint uStack_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  int aiStack_114 [4];
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f4;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [18];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5d3af;
  pvStack_14 = ExceptionList;
  iVar6 = *(int *)(in_ECX + 0x84);
  ExceptionList = &pvStack_14;
  *(int *)(in_ECX + 0x7c) = (param_1[1] - *param_1) / iVar6;
  if ((param_1[1] - *param_1) % iVar6 != 0) {
    *(int *)(in_ECX + 0x7c) = (param_1[1] - *param_1) / iVar6 + 1;
  }
  FUN_009af9f0(*(undefined4 *)(in_ECX + 0x8c));
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    do {
      iVar1 = iVar6 + 1;
      FUN_009d6f60(param_1,&local_16c,iVar1 * *(int *)(in_ECX + 0x84));
      local_c = 0;
      local_11c = 0xf;
      local_120 = 0;
      local_130[0] = local_130[0] & 0xffffff00;
      FUN_00409350("largefile.cpp",0xd);
      local_c._0_1_ = 1;
      uVar2 = FUN_004015b0(local_130,0x113,0x301);
      uVar7 = 0;
      local_c = CONCAT31(local_c._1_3_,2);
      iVar5 = local_168 - local_16c;
      FUN_00987d50(uVar2,"Appending #",0xb,0);
      uVar2 = FUN_00455470(uVar7,iVar6,extraout_ECX," size: ",extraout_ECX,iVar5);
      uVar2 = FUN_00418e30(uVar2);
      piVar3 = (int *)FUN_00455470(uVar2);
      FUN_00408be0(piVar3);
      local_17c = 0;
      if (((*(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3) & 6) == 0) &&
         (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar3 + 4) + 0x38 + (int)piVar3) + 0x34))(),
         iVar6 == -1)) {
        local_17c = 4;
      }
      if (local_17c != 0) {
        local_17c = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0xc) | local_17c;
        if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x38) == 0) {
          local_17c = local_17c | 4;
        }
        FUN_00401120(local_17c,0);
      }
      local_c._0_1_ = 1;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      local_c._0_1_ = 0;
      if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_130[0]);
      }
      uVar2 = FUN_009d6f60(param_1,aiStack_114,iVar1 * *(int *)(in_ECX + 0x84));
      local_c._0_1_ = 3;
      iVar6 = *(int *)(in_ECX + 0x34);
      puVar4 = (undefined4 *)FUN_00aae9af(0x48);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[0xd] = 0xf;
        puVar4[0xc] = 0;
        *(undefined1 *)(puVar4 + 8) = 0;
        local_c._0_1_ = 7;
        FUN_009d5e10(uVar2);
        puVar4[0xf] = iVar6;
        puVar4[0x10] = 0;
        *(undefined1 *)(puVar4 + 0x11) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x38);
      *(undefined4 **)(in_ECX + 0x34) = puVar4;
      *(int *)(in_ECX + 0x38) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 **)(in_ECX + 0x30) = puVar4;
      }
      else {
        *(undefined4 **)(iVar6 + 0x40) = puVar4;
      }
      if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_f4);
      }
      uStack_e0 = 0xf;
      uStack_e4 = 0;
      uStack_f4 = uStack_f4 & 0xffffff00;
      if (iStack_104 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iStack_104);
      }
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      if (aiStack_114[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(aiStack_114[0]);
      }
      local_c = 0xffffffff;
      aiStack_114[0] = 0;
      aiStack_114[1] = 0;
      aiStack_114[2] = 0;
      if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_14c);
      }
      uStack_138 = 0xf;
      uStack_13c = 0;
      uStack_14c = uStack_14c & 0xffffff00;
      if (iStack_15c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iStack_15c);
      }
      iStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if (local_16c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_16c);
      }
      local_16c = 0;
      local_168 = 0;
      uStack_164 = 0;
      iVar6 = iVar1;
    } while (iVar1 < *(int *)(in_ECX + 0x7c));
  }
  *(undefined1 *)(in_ECX + 0x88) = 1;
  iVar6 = FUN_00aae9af(0x90);
  local_c = 8;
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a12e70(iVar6,*(undefined4 *)(in_ECX + 0x7c),in_ECX,in_ECX + 0x94,
                         *(undefined4 *)(in_ECX + 0xb0),0);
  }
  local_c = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x8c) + 0x38) + 0x18))(uVar2);
  ExceptionList = pvStack_18;
  return;
}

