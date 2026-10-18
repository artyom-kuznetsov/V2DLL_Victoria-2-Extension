// FUN_00562bb0 @ 00562bb0 body=[[00562bb0, 00562c9f]]


void FUN_00562bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)(param_1 + 0x54) + 0x1c))(param_1);
  local_8 = 0;
  iVar6 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2;
  if (0 < iVar6) {
    do {
      FUN_008b33a0(param_1);
      local_8 = local_8 + 1;
    } while (local_8 < iVar6);
  }
  FUN_0056bd30(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x424) - *(int *)(param_1 + 0x420) >> 2;
  local_c = 0;
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x420) + local_c * 4);
      iVar3 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 2;
      local_8 = 0;
      if (0 < iVar3) {
        do {
          piVar2 = *(int **)(*(int *)(iVar1 + 8) + local_8 * 4);
          (**(code **)(*piVar2 + 0x20))(param_1);
          iVar4 = 0;
          iVar5 = piVar2[3] - piVar2[2] >> 2;
          if (0 < iVar5) {
            do {
              FUN_008b3360(param_1);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar5);
          }
          local_8 = local_8 + 1;
        } while (local_8 < iVar3);
      }
      local_c = local_c + 1;
    } while (local_c < iVar6);
  }
  return;
}

