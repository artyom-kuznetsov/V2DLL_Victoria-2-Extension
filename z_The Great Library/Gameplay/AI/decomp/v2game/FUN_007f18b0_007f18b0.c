// FUN_007f18b0 @ 007f18b0 body=[[007f18b0, 007f1905] [007f1910, 007f1bdf]]


void FUN_007f18b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int local_b0;
  int local_ac;
  
  *(undefined1 *)(param_1 + 0x18d4) = 1;
  local_b0 = 0;
  if (0 < *(int *)(param_1 + 0x18c) * *(int *)(param_1 + 400)) {
    local_ac = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x19c) + local_ac;
      uVar8 = 0;
      if (*(int *)(iVar10 + 0x130) != 0) {
        do {
          uVar4 = uVar8;
          FUN_0099e240(uVar8);
          piVar3 = (int *)FUN_00868600(uVar4);
          iVar6 = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            iVar6 = *(int *)*piVar3;
          }
          uVar4 = piVar3[2];
          if (*(uint *)(iVar6 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar6 + 8);
          }
          if (*(int *)(*(int *)(*(int *)(iVar6 + 4) + uVar4 * 4) + 0x40) == param_2) {
            uVar4 = uVar8;
            FUN_0099e240(uVar8);
            piVar3 = (int *)FUN_00868600(uVar4);
            iVar6 = 0;
            if ((int *)*piVar3 != (int *)0x0) {
              iVar6 = *(int *)*piVar3;
            }
            uVar4 = piVar3[2];
            if (*(uint *)(iVar6 + 8) <= uVar4) {
              uVar4 = uVar4 - *(uint *)(iVar6 + 8);
            }
            iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + 4) + uVar4 * 4) + 0x48);
            if (-1 < iVar6) {
              *(undefined1 *)(param_1 + 700 + iVar6 * 0x10) = 0;
              uVar4 = uVar8;
              FUN_0099e240(uVar8);
              piVar3 = (int *)FUN_00868600(uVar4);
              iVar6 = 0;
              if ((int *)*piVar3 != (int *)0x0) {
                iVar6 = *(int *)*piVar3;
              }
              uVar4 = piVar3[2];
              if (*(uint *)(iVar6 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar6 + 8);
              }
              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar4 * 4) + 0x48) = 0xffffffff;
              fVar1 = *(float *)(param_3 + 8);
              fVar2 = *(float *)(param_3 + 0xc);
              iVar6 = *(int *)(DAT_0125870c + 0x212c);
              iVar7 = *(int *)(iVar6 + 4) + -1;
              iVar5 = (int)fVar1;
              iVar9 = (int)fVar2;
              if (iVar7 < iVar5) {
                iVar5 = iVar7;
              }
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              iVar7 = *(int *)(iVar6 + 8) + -1;
              if (iVar7 < iVar9) {
                iVar9 = iVar7;
              }
              iVar6 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                              (uint)*(ushort *)
                                     (*(int *)(iVar6 + 0x18) * iVar9 + *(int *)(iVar6 + 0xc) * iVar5
                                     + *(int *)(iVar6 + 0x20)) * 4);
              uVar11 = DAT_00f141d0;
              if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2a) == '\0')) {
                uVar11 = 0;
              }
              iVar6 = *(int *)(param_1 + 0x18c);
              iVar9 = *(int *)(param_1 + 0x194);
              iVar5 = *(int *)(param_1 + 0x198);
              uVar4 = uVar8;
              FUN_0099e240(uVar8);
              piVar3 = (int *)FUN_00868600(uVar4);
              iVar7 = 0;
              if ((int *)*piVar3 != (int *)0x0) {
                iVar7 = *(int *)*piVar3;
              }
              uVar4 = piVar3[2];
              if (*(uint *)(iVar7 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar7 + 8);
              }
              iVar7 = *(int *)(*(int *)(iVar7 + 4) + uVar4 * 4);
              *(ulonglong *)(iVar7 + 0x4c) =
                   CONCAT44(uVar11,fVar1 - (float)(iVar9 * (local_b0 % iVar6) + iVar9 / 2));
              *(float *)(iVar7 + 0x54) = fVar2 - (float)(iVar5 * (local_b0 / iVar6) + iVar5 / 2);
              uVar4 = uVar8;
              FUN_0099e240(uVar8);
              piVar3 = (int *)FUN_00868600(uVar4);
              iVar6 = 0;
              if ((int *)*piVar3 != (int *)0x0) {
                iVar6 = *(int *)*piVar3;
              }
              uVar4 = piVar3[2];
              if (*(uint *)(iVar6 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar6 + 8);
              }
              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar4 * 4) + 0x58) = param_4;
              uVar4 = uVar8;
              FUN_0099e240(uVar8);
              piVar3 = (int *)FUN_00868600(uVar4);
              iVar6 = 0;
              if ((int *)*piVar3 != (int *)0x0) {
                iVar6 = *(int *)*piVar3;
              }
              uVar4 = piVar3[2];
              if (*(uint *)(iVar6 + 8) <= uVar4) {
                uVar4 = uVar4 - *(uint *)(iVar6 + 8);
              }
              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar4 * 4) + 0x5c) = param_5;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar10 + 0x130));
      }
      local_ac = local_ac + 0x3c0;
      local_b0 = local_b0 + 1;
    } while (local_b0 < *(int *)(param_1 + 0x18c) * *(int *)(param_1 + 400));
  }
  FUN_007f1be0(param_1);
  return;
}

