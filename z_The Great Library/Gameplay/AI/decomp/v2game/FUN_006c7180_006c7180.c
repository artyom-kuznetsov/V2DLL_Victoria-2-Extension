// FUN_006c7180 @ 006c7180 body=[[006c7180, 006c7290]]


bool FUN_006c7180(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  FUN_005a96d0();
  piVar2 = (int *)FUN_00401480();
  local_8 = *piVar2;
  do {
    if (local_8 == 0) {
      FUN_005a96e0();
      piVar2 = (int *)FUN_00401480();
      local_c = *piVar2;
      do {
        if (local_c == 0) {
          return false;
        }
        local_c = *(int *)(local_c + 8);
        piVar2 = (int *)FUN_0043a900();
        iVar1 = *piVar2;
        iVar3 = FUN_00401490();
      } while (*(int *)(iVar1 + 0xc4) != iVar3);
      return iVar1 == param_1;
    }
    local_8 = *(int *)(local_8 + 8);
    piVar2 = (int *)FUN_0043a900();
    iVar1 = *piVar2;
    iVar3 = FUN_00401490();
  } while (*(int *)(iVar1 + 0xc4) != iVar3);
  return iVar1 == param_1;
}

