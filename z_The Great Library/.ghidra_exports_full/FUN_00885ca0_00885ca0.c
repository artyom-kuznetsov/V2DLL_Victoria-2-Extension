// FUN_00885ca0 @ 00885ca0 body=[[00885ca0, 00886005]]


void FUN_00885ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int *in_ECX;
  uint uVar4;
  undefined4 unaff_EBX;
  uint uVar5;
  int *piVar6;
  int *piStack_bc;
  uint local_b8 [2];
  int *piStack_b0;
  undefined4 uStack_ac;
  int *local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb7743;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  local_a8 = in_ECX;
  (**(code **)(*in_ECX + 0x34))(local_b8,param_1);
  uStack_ac = *(undefined4 *)(param_1 + 8);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if ((piStack_bc == *(int **)(iVar1 + 0x20)) ||
     (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + (int)piStack_bc * 4) + 0x34) == 0 &&
       ((((char)unaff_EBX != 'R' || ((char)((uint)unaff_EBX >> 8) != 'E')) ||
        ((char)((uint)unaff_EBX >> 0x10) != 'B')))) &&
      (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
       (*(char *)(iVar1 + 0x1e) != 'B')))))) {
    for (uVar5 = in_ECX[10]; ((uint)in_ECX[10] <= uVar5 && (uVar5 < (uint)in_ECX[0xb]));
        uVar5 = uVar5 + 0x40) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(uVar5 + 0x18) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(uVar5 + 0x1c) = uVar2;
      *(undefined4 *)(uVar5 + 0x20) = unaff_EBX;
      *(int **)(uVar5 + 0x24) = piStack_bc;
    }
    for (uVar4 = in_ECX[0xe]; ((uint)in_ECX[0xe] <= uVar4 && (uVar4 < (uint)in_ECX[0xf]));
        uVar4 = uVar4 + 0x40) {
      *(int **)(uVar4 + 0x1c) = piStack_bc;
      *(undefined4 *)(uVar4 + 0x18) = unaff_EBX;
      uVar2 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(uVar4 + 0x24) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(uVar4 + 0x20) = uVar2;
      in_ECX = piStack_b0;
    }
    local_b8[0] = uVar5;
    FUN_009134b0(*(undefined4 *)(DAT_012588e8 + 0xb0c),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),unaff_EBX,piStack_bc);
    piVar6 = piStack_b0;
    pvStack_14 = (void *)0x0;
    uStack_28 = (undefined1)piStack_b0[0x12];
    if (0 < (int)(piStack_b0[0xb] - piStack_b0[10] & 0xffffffc0U)) {
      local_b8[0] = piStack_b0[10] + 0x40;
      FUN_00424b60();
      uVar5 = local_b8[0];
    }
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
    FUN_00913510(&uStack_a0);
    uStack_ac = *(undefined4 *)(param_1 + 8);
    iStack_a4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                                 (int)piStack_bc * 4) + 0x34);
    if (iStack_a4 != 0) {
      while (((uint)piVar6[10] <= uVar5 && (uVar5 < (uint)piVar6[0xb]))) {
        uStack_ac = *(undefined4 *)(param_1 + 8);
        local_a8 = *(int **)(param_1 + 0xc);
        local_b8[0] = local_b8[0] + 0x40;
        puVar3 = (uint *)FUN_0093cfb0();
        uVar4 = puVar3[1];
        if ((uVar5 < uVar4) && (*puVar3 <= uVar5)) {
          if (uVar4 == puVar3[2]) {
            FUN_0042c4b0();
          }
          uVar5 = puVar3[1];
        }
        else {
          if (uVar4 == puVar3[2]) {
            FUN_0042c4b0();
          }
          uVar5 = puVar3[1];
        }
        if (uVar5 != 0) {
          FUN_0094be20();
        }
        puVar3[1] = puVar3[1] + 0x40;
        FUN_0093cfb0();
        FUN_009547e0();
        uVar5 = local_b8[0];
        piVar6 = piStack_b0;
      }
      uVar5 = piVar6[0xe];
      while (((uint)piVar6[0xe] <= uVar5 && (uVar5 < (uint)piVar6[0xf]))) {
        local_b8[0] = uVar5 + 0x40;
        local_a8 = piStack_bc;
        uStack_ac = unaff_EBX;
        puVar3 = (uint *)FUN_0093cfb0();
        uVar4 = puVar3[1];
        if ((uVar5 < uVar4) && (*puVar3 <= uVar5)) {
          if (uVar4 == puVar3[2]) {
            FUN_0042c4b0();
          }
          uVar5 = puVar3[1];
        }
        else {
          if (uVar4 == puVar3[2]) {
            FUN_0042c4b0();
          }
          uVar5 = puVar3[1];
        }
        if (uVar5 != 0) {
          FUN_0094be20();
        }
        puVar3[1] = puVar3[1] + 0x40;
        FUN_0093cfb0();
        FUN_009547e0();
        uVar5 = local_b8[0];
        piVar6 = piStack_b0;
      }
    }
    FUN_0042b9f0(&uStack_a0);
  }
  ExceptionList = pvStack_1c;
  return;
}

