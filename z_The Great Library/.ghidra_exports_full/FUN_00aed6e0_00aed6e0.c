// FUN_00aed6e0 @ 00aed6e0 body=[[00aed6e0, 00aed766]]


uint FUN_00aed6e0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_c;
  uint local_4;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    return 0;
  }
  local_c = uVar1;
  if (param_2 != (int *)0x0) {
    local_c = 0;
    local_4 = 0;
    if (uVar1 != 0) {
      do {
        piVar2 = *(int **)(*param_1 + local_4 * 4);
        uVar3 = param_2[1];
        uVar6 = 0;
        if (uVar3 != 0) {
          do {
            iVar4 = *param_2;
            iVar5 = (**(code **)(*piVar2 + 4))();
            if (iVar5 == *(int *)(iVar4 + uVar6 * 4)) goto LAB_00aed74f;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
        }
        local_c = local_c + 1;
LAB_00aed74f:
        local_4 = local_4 + 1;
      } while (local_4 < uVar1);
    }
  }
  return local_c;
}

