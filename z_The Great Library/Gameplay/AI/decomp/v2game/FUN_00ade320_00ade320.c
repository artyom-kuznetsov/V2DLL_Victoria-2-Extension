// FUN_00ade320 @ 00ade320 body=[[00ade320, 00ade50e]]


undefined4 FUN_00ade320(void *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  int *piVar10;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar1 = *(uint *)(in_ECX + 0x34);
  iVar8 = 0;
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      iVar7 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar9 * 4) + 4))();
      if (iVar7 == 0) {
        if (iVar8 == 0) {
          if ((uVar9 != 0xffffffff) &&
             (piVar10 = *(int **)(*(int *)(in_ECX + 0x30) + uVar9 * 4), piVar10 != (int *)0x0)) {
            iVar8 = (**(code **)(*piVar10 + 0x10))();
            goto LAB_00ade355;
          }
          break;
        }
        iVar8 = iVar8 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  iVar8 = 0;
LAB_00ade355:
  iVar7 = *(int *)(in_ECX + 0x10);
  FID_conflict__memcpy(&local_40,param_1,0x40);
  FUN_00ad29c0();
  fVar2 = param_2[1] * fStack_30 + *param_2 * local_40 + param_2[2] * fStack_20 + fStack_10;
  fVar3 = param_2[2] * fStack_1c + param_2[1] * fStack_2c + *param_2 * fStack_3c + fStack_c;
  fVar5 = param_2[2] * fStack_18 + *param_2 * fStack_38 + param_2[1] * fStack_28 + fStack_8;
  fStack_34 = param_2[3] * local_40 + param_2[4] * fStack_30 + param_2[5] * fStack_20 + fStack_10;
  fStack_30 = param_2[5] * fStack_1c + param_2[4] * fStack_2c + param_2[3] * fStack_3c + fStack_c;
  fStack_2c = param_2[5] * fStack_18 + param_2[3] * fStack_38 + param_2[4] * fStack_28 + fStack_8;
  uVar1 = *(uint *)(in_ECX + 0x1c);
  uVar9 = 0;
  fStack_28 = fStack_34 - fVar2;
  fStack_24 = fStack_30 - fVar3;
  fVar4 = fStack_2c - fVar5;
  fStack_20 = 1.0 / SQRT(fVar4 * fVar4 + fStack_28 * fStack_28 + fStack_24 * fStack_24);
  fStack_28 = fStack_28 * fStack_20;
  fStack_24 = fStack_24 * fStack_20;
  fStack_20 = fStack_20 * fVar4;
  if (uVar1 != 0) {
    piVar10 = (int *)(iVar7 + 4);
    local_40 = fVar2;
    fStack_3c = fVar3;
    fStack_38 = fVar5;
    do {
      cVar6 = FUN_00adf620(iVar8 + piVar10[-1] * 0xc,iVar8 + *piVar10 * 0xc,iVar8 + piVar10[1] * 0xc
                           ,0,0,0);
      if (cVar6 != '\0') {
        return 1;
      }
      uVar9 = uVar9 + 3;
      piVar10 = piVar10 + 3;
    } while (uVar9 < uVar1);
  }
  return 0;
}

