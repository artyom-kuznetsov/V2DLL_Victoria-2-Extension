// FUN_00addde0 @ 00addde0 body=[[00addde0, 00addefd]]


void FUN_00addde0(undefined4 *param_1,float *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  float *pfVar6;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  puVar3 = param_1;
  *param_1 = 0x7f7fffff;
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0x7f7fffff;
  param_1[3] = 0xff7fffff;
  uVar5 = 0;
  param_1[4] = 0xff7fffff;
  param_1 = (undefined4 *)0x0;
  puVar3[5] = 0xff7fffff;
  uVar1 = *(uint *)(in_ECX + 0x34);
  if (uVar1 != 0) {
    do {
      iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar5 * 4) + 4))();
      if (iVar4 == 0) {
        if (param_1 == (undefined4 *)0x0) {
          if ((uVar5 != 0xffffffff) &&
             (piVar2 = *(int **)(*(int *)(in_ECX + 0x30) + uVar5 * 4), piVar2 != (int *)0x0)) {
            iVar4 = (**(code **)(*piVar2 + 0x10))();
            goto LAB_00adde3d;
          }
          break;
        }
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  iVar4 = 0;
LAB_00adde3d:
  uVar1 = *(uint *)(in_ECX + 0x18);
  uVar5 = 0;
  if (uVar1 != 0) {
    pfVar6 = (float *)(iVar4 + 8);
    do {
      local_c = *pfVar6 * param_2[8] + pfVar6[-1] * param_2[4] + *param_2 * pfVar6[-2] +
                param_2[0xc];
      fStack_8 = param_2[9] * *pfVar6 + param_2[1] * pfVar6[-2] + param_2[5] * pfVar6[-1] +
                 param_2[0xd];
      fStack_4 = *pfVar6 * param_2[10] + pfVar6[-1] * param_2[6] + pfVar6[-2] * param_2[2] +
                 param_2[0xe];
      FUN_00ad2ef0(&local_c);
      uVar5 = uVar5 + param_3;
      pfVar6 = pfVar6 + param_3 * 3;
    } while (uVar5 < uVar1);
  }
  return;
}

