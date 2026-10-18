// FUN_009a89e0 @ 009a89e0 body=[[009a89e0, 009a8b00]]


void FUN_009a89e0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int local_10;
  int local_c;
  
  *(undefined4 *)(in_ECX + 0x78) = param_1;
  iVar1 = *(int *)(in_ECX + 0x130);
  if (iVar1 == 3) {
    local_10 = (int)*(short *)(in_ECX + 0x78) + *(int *)(in_ECX + 0x134);
LAB_009a8ab8:
    local_c = (int)*(short *)(in_ECX + 0x7a) + *(int *)(in_ECX + 0x138);
    (**(code **)(**(int **)(in_ECX + 0x70) + 0xcc))(&local_10);
    return;
  }
  if (iVar1 == 1) {
    local_10 = (int)*(short *)(in_ECX + 0x78) + *(int *)(in_ECX + 0x134);
  }
  else {
    if (iVar1 == 2) {
      local_10 = (int)*(short *)(in_ECX + 0x78);
      goto LAB_009a8ab8;
    }
    if (iVar1 != 0) {
      if (iVar1 == 4) {
        local_10 = *(int *)(in_ECX + 0x134) / 2 + (int)*(short *)(in_ECX + 0x78);
        local_c = *(int *)(in_ECX + 0x138) / 2 + (int)*(short *)(in_ECX + 0x7a);
        goto LAB_009a8aea;
      }
      if (iVar1 == 5) {
        local_10 = *(int *)(in_ECX + 0x134) / 2 + (int)*(short *)(in_ECX + 0x78);
        local_c = (int)*(short *)(in_ECX + 0x7a);
        (**(code **)(**(int **)(in_ECX + 0x70) + 0xcc))(&local_10);
        return;
      }
      if (iVar1 == 6) {
        local_10 = *(int *)(in_ECX + 0x134) / 2 + (int)*(short *)(in_ECX + 0x78);
        goto LAB_009a8ab8;
      }
    }
    local_10 = (int)*(short *)(in_ECX + 0x78);
  }
  local_c = (int)*(short *)(in_ECX + 0x7a);
LAB_009a8aea:
  (**(code **)(**(int **)(in_ECX + 0x70) + 0xcc))(&local_10);
  return;
}

