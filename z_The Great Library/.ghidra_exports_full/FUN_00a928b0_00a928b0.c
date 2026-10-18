// FUN_00a928b0 @ 00a928b0 body=[[00a928b0, 00a929ec] [00a929f0, 00a92a88] [00a92a90, 00a92b10]]


void FUN_00a928b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_8;
  
  iVar4 = (param_6 - param_5) + 1;
  if (1 < iVar4) {
    iVar6 = 0;
    iVar1 = DAT_00f065c0;
    while (iVar1 < iVar4) {
      iVar6 = iVar6 + 1;
      iVar1 = (&DAT_00f065c0)[iVar6];
    }
joined_r0x00a928e2:
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) {
      iVar1 = (&DAT_00f065c0)[iVar6];
      iVar4 = iVar1 + param_5;
      if (iVar4 <= param_6) {
        local_8 = (undefined4 *)(param_1 + (iVar4 - iVar1) * 4);
        iVar9 = iVar4;
        do {
          iVar2 = *(int *)(param_1 + iVar9 * 4);
          cVar3 = FUN_00a926b0(iVar2 + param_7,param_4,param_8);
          iVar5 = iVar9;
          puVar7 = local_8;
          while (cVar3 != '\0') {
            *(undefined4 *)(param_1 + iVar5 * 4) = *puVar7;
            iVar5 = iVar5 - iVar1;
            puVar7 = puVar7 + -iVar1;
            if (iVar5 <= iVar4 + -1) break;
            cVar3 = FUN_00a926b0(iVar2 + param_7,param_4,param_8);
          }
          puVar7 = local_8 + 1;
          iVar8 = iVar9 + 1;
          *(int *)(param_1 + iVar5 * 4) = iVar2;
          if (param_6 < iVar8) break;
          iVar2 = *(int *)(param_1 + iVar8 * 4);
          cVar3 = FUN_00a926b0(iVar2 + param_7,param_4,param_8);
          while (cVar3 != '\0') {
            *(undefined4 *)(param_1 + iVar8 * 4) = *puVar7;
            iVar8 = iVar8 - iVar1;
            puVar7 = puVar7 + -iVar1;
            if (iVar8 <= iVar4 + -1) break;
            cVar3 = FUN_00a926b0(iVar2 + param_7,param_4,param_8);
          }
          puVar7 = local_8 + 2;
          iVar5 = iVar9 + 2;
          *(int *)(param_1 + iVar8 * 4) = iVar2;
          if (param_6 < iVar5) break;
          iVar2 = *(int *)(param_1 + iVar5 * 4);
          cVar3 = FUN_00a926b0(iVar2 + param_7,param_4,param_8);
          while (cVar3 != '\0') {
            *(undefined4 *)(param_1 + iVar5 * 4) = *puVar7;
            iVar5 = iVar5 - iVar1;
            puVar7 = puVar7 + -iVar1;
            if (iVar5 <= iVar4 + -1) break;
            cVar3 = FUN_00a926b0(iVar2 + param_7,param_4,param_8);
          }
          local_8 = local_8 + 3;
          *(int *)(param_1 + iVar5 * 4) = iVar2;
          iVar9 = iVar9 + 3;
          if (*param_8 < 0) {
            return;
          }
        } while (iVar9 <= param_6);
      }
      goto joined_r0x00a928e2;
    }
  }
  return;
}

