// FUN_008a7700 @ 008a7700 body=[[008a7700, 008a7757] [008a7760, 008a78cf]]


void FUN_008a7700(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_c [2];
  
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)param_1[5]) {
    FID_conflict__memcpy(pvVar1,(void *)param_1[5],0);
    param_1[5] = (int)pvVar1;
  }
  iVar6 = param_1[1] - *param_1 >> 2;
  local_c[0] = 0;
  if (0 < iVar6) {
    do {
      iVar2 = *(int *)(*param_1 + local_c[0] * 4);
      if ((((*(int *)(iVar2 + 0xb4) - *(int *)(iVar2 + 0xb0) & 0xfffffffcU) != 0) &&
          (*(char *)(iVar2 + 0x1a0) == '\0')) &&
         ((*(char *)(iVar2 + 0x1a3) == '\0' ||
          ((iVar5 = FUN_009c1d40(), iVar5 == 0 || (iVar5 != iVar2)))))) {
        FUN_0068f390();
      }
      local_c[0] = local_c[0] + 1;
    } while (local_c[0] < iVar6);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)param_1[0xd]) {
    FID_conflict__memcpy(pvVar1,(void *)param_1[0xd],0);
    param_1[0xd] = (int)pvVar1;
  }
  iVar6 = param_1[9] - param_1[8] >> 2;
  local_14 = 0;
  if (0 < iVar6) {
    do {
      iVar2 = *(int *)(param_1[8] + local_14 * 4);
      if ((((*(int *)(iVar2 + 0xb4) - *(int *)(iVar2 + 0xb0) & 0xfffffffcU) != 0) &&
          (*(char *)(iVar2 + 0x1a0) == '\0')) &&
         ((local_c[0] = iVar2, *(char *)(iVar2 + 0x1a3) == '\0' ||
          ((iVar5 = FUN_009c1d40(), iVar5 == 0 || (iVar5 != iVar2)))))) {
        piVar3 = (int *)param_1[0xd];
        if ((local_c < piVar3) && (piVar4 = (int *)param_1[0xc], piVar4 <= local_c)) {
          if (piVar3 == (int *)param_1[0xe]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[0xd] =
                 *(undefined4 *)(param_1[0xc] + ((int)local_c - (int)piVar4 >> 2) * 4);
          }
        }
        else {
          if (piVar3 == (int *)param_1[0xe]) {
            FUN_00a513f0();
          }
          if ((int *)param_1[0xd] != (int *)0x0) {
            *(int *)param_1[0xd] = iVar2;
          }
        }
        param_1[0xd] = param_1[0xd] + 4;
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar6);
  }
  return;
}

