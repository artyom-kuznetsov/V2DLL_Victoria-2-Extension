// FUN_009efca0 @ 009efca0 body=[[009efca0, 009efdd8]]


void FUN_009efca0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int local_10;
  int local_c;
  
  *(undefined4 *)(in_ECX + 0x98) = param_1;
  iVar1 = *(int *)(in_ECX + 0x124);
  if (iVar1 == 3) {
    local_10 = (int)*(short *)(in_ECX + 0x98) + *(int *)(in_ECX + 0x128);
LAB_009efd7f:
    local_c = (int)*(short *)(in_ECX + 0x9a) + *(int *)(in_ECX + 300);
LAB_009efd8c:
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0xcc))(&local_10);
    return;
  }
  if (iVar1 == 1) {
    local_10 = (int)*(short *)(in_ECX + 0x98) + *(int *)(in_ECX + 0x128);
  }
  else {
    if (iVar1 == 2) {
      local_10 = (int)*(short *)(in_ECX + 0x98);
      goto LAB_009efd7f;
    }
    if (iVar1 != 0) {
      if (iVar1 == 4) {
        local_10 = *(int *)(in_ECX + 0x128) / 2 + (int)*(short *)(in_ECX + 0x98);
        local_c = *(int *)(in_ECX + 300) / 2 + (int)*(short *)(in_ECX + 0x9a);
        goto LAB_009efdbf;
      }
      if (iVar1 == 5) {
        local_10 = *(int *)(in_ECX + 0x128) / 2 + (int)*(short *)(in_ECX + 0x98);
        local_c = (int)*(short *)(in_ECX + 0x9a);
        goto LAB_009efd8c;
      }
      if (iVar1 == 6) {
        local_10 = *(int *)(in_ECX + 0x128) / 2 + (int)*(short *)(in_ECX + 0x98);
        goto LAB_009efd7f;
      }
    }
    local_10 = (int)*(short *)(in_ECX + 0x98);
  }
  local_c = (int)*(short *)(in_ECX + 0x9a);
LAB_009efdbf:
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0xcc))(&local_10);
  return;
}

