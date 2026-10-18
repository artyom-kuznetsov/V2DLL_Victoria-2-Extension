// FUN_008aec00 @ 008aec00 body=[[008aec00, 008aed4b]]


undefined4 * FUN_008aec00(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_24;
  int local_20;
  int local_18;
  
  local_24 = *(int *)(in_ECX + 0x1c);
  iVar3 = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x20) >> 2;
  local_20 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x20) + local_20 * 4);
      iVar5 = 0;
      iVar6 = *(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 2;
      if (0 < iVar6) {
        do {
          cVar1 = (**(code **)(**(int **)(*(int *)(iVar4 + 8) + iVar5 * 4) + 0x18))(param_2);
          if (cVar1 == '\0') goto LAB_008aec84;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      local_24 = local_24 + *(int *)(*(int *)(*(int *)(in_ECX + 0x20) + local_20 * 4) + 0x20);
LAB_008aec84:
      local_20 = local_20 + 1;
    } while (local_20 < iVar3);
  }
  piVar7 = *(int **)(in_ECX + 8);
  do {
    if ((piVar7 < *(int **)(in_ECX + 8)) || (*(int **)(in_ECX + 0xc) <= piVar7)) {
      uVar2 = __alldiv((longlong)*(int *)(in_ECX + 0x18) * (longlong)local_24,1000,0);
      *param_1 = uVar2;
      return param_1;
    }
    iVar3 = *piVar7;
    iVar4 = piVar7[1] - iVar3 >> 2;
    local_20 = 0;
    local_18 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)(iVar3 + local_18 * 4);
        iVar5 = 0;
        iVar6 = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2;
        if (0 < iVar6) {
          do {
            cVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 8) + iVar5 * 4) + 0x18))(param_2);
            if (cVar1 == '\0') goto LAB_008aed13;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar6);
        }
        iVar3 = *piVar7;
        local_20 = local_20 + *(int *)(*(int *)(iVar3 + local_18 * 4) + 0x20);
        local_18 = local_18 + 1;
      } while (local_18 < iVar4);
    }
LAB_008aed13:
    local_24 = local_24 + local_20;
    piVar7 = piVar7 + 4;
  } while( true );
}

