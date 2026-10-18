// FUN_007f2d40 @ 007f2d40 body=[[007f2d40, 007f2efc]]


void FUN_007f2d40(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x18c);
  iVar2 = *(int *)(param_1 + 0x194);
  iVar3 = *(int *)(param_1 + 0x198);
  if ((param_2[1] - *param_2 & 0xfffffffcU) != 0) {
    FUN_00804430();
    iVar6 = *param_2;
    local_8 = 0;
    if (param_2[1] - iVar6 >> 2 != 0) {
      param_3 = param_3 + 0x5c;
      do {
        iVar6 = *(int *)(*(int *)(iVar6 + local_8 * 4) + 8);
        uVar4 = *(undefined4 *)(iVar6 + 0x34);
        uVar5 = *(undefined4 *)(iVar6 + 0x38);
        iVar7 = *(int *)(iVar6 + 0xa4);
        iVar8 = 0;
        if (0 < (int)(*(int *)(iVar6 + 0xa8) - iVar7 & 0xfffffff8U)) {
          do {
            FUN_007f2b60(param_1,param_3 + -0x4c,param_3 + -0x5c,param_3 + -0x3c,param_3 + -0x20,
                         param_3,*(undefined4 *)(iVar7 + iVar8 * 8),
                         *(undefined4 *)(iVar7 + 4 + iVar8 * 8),uVar4,uVar5);
            iVar7 = *(int *)(iVar6 + 0xa4);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(iVar6 + 0xa8) - iVar7 >> 3);
        }
        iVar6 = *(int *)(*(int *)(*param_2 + local_8 * 4) + 8);
        iVar7 = *(int *)(iVar6 + 0x38);
        *(float *)(param_3 + -0x2c) =
             (float)*(int *)(iVar6 + 0x34) - (float)(iVar2 * (in_EAX % iVar1) + iVar2 / 2);
        *(float *)(param_3 + -0x28) = (float)iVar7 - (float)(iVar3 * (in_EAX / iVar1) + iVar3 / 2);
        *(undefined4 *)(param_3 + -0x24) =
             *(undefined4 *)(*(int *)(*(int *)(*param_2 + local_8 * 4) + 8) + 0xb4);
        iVar6 = *param_2;
        local_8 = local_8 + 1;
        param_3 = param_3 + 0x6c;
      } while (local_8 < (uint)(param_2[1] - iVar6 >> 2));
    }
  }
  return;
}

