// FUN_00520050 @ 00520050 body=[[00520050, 0052014f]]


uint * FUN_00520050(uint *param_1,uint param_2)

{
  int in_EAX;
  int *in_ECX;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_1c;
  int local_14;
  int local_c;
  uint local_8;
  
  piVar4 = (int *)*in_ECX;
  local_1c = in_ECX[1] - (int)piVar4 >> 2;
  local_8 = 0;
  if (1 < local_1c) {
    local_1c = local_1c + -1;
    do {
      piVar4 = piVar4 + 1;
      iVar5 = *piVar4;
      iVar3 = 0;
      iVar1 = *(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) >> 2;
      iVar6 = 0;
      local_c = 0;
      local_14 = 0;
      if (1 < iVar1) {
        piVar2 = *(int **)(iVar5 + 8);
        iVar5 = (iVar1 - 2U >> 1) + 1;
        local_14 = iVar5 * 2;
        do {
          iVar6 = iVar6 + *(int *)(in_EAX + *(int *)(*piVar2 + 0x50) * 4);
          iVar3 = local_c + *(int *)(in_EAX + *(int *)(piVar2[1] + 0x50) * 4);
          piVar2 = piVar2 + 2;
          iVar5 = iVar5 + -1;
          local_c = iVar3;
        } while (iVar5 != 0);
      }
      if (local_14 < iVar1) {
        local_8 = local_8 + *(int *)(in_EAX + *(int *)(*(int *)(*(int *)(*piVar4 + 8) + local_14 * 4
                                                               ) + 0x50) * 4);
      }
      local_8 = local_8 + iVar6 + iVar3;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    if (local_8 != 0) {
      *param_1 = local_8 * 0x8000;
      param_1[1] = ((int)local_8 >> 0x1f) << 0xf | local_8 >> 0x11;
      uVar7 = __alldiv(*param_1 << 0xf,param_1[1] << 0xf | *param_1 >> 0x11,param_2 << 0xf,
                       ((int)param_2 >> 0x1f) << 0xf | param_2 >> 0x11);
      *(undefined8 *)param_1 = uVar7;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

