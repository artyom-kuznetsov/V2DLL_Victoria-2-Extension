// FUN_00887ff0 @ 00887ff0 body=[[00887ff0, 008880cb]]


void FUN_00887ff0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(in_ECX + 0x28) != '\0') {
    local_18 = 0x2d2d2d;
    local_14 = 0;
    if (*(char *)(in_ECX + 0x1c) == '\0') {
      if (*(char *)(in_ECX + 0x1d) == '\0') {
        local_10 = *(undefined4 *)(in_ECX + 0x20);
        local_c = *(int *)(in_ECX + 0x24);
      }
      else {
        local_10 = *(undefined4 *)(param_1 + 0x2c);
        local_c = *(int *)(param_1 + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    FUN_00518620(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_c * 4),&local_18,
                 *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  }
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      local_10 = *(undefined4 *)(in_ECX + 0x20);
      local_c = *(int *)(in_ECX + 0x24);
    }
    else {
      local_10 = *(undefined4 *)(param_1 + 0x2c);
      local_c = *(int *)(param_1 + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  local_18 = 0x2d2d2d;
  local_14 = 0;
  uVar1 = local_10;
  local_10 = *(undefined4 *)(param_1 + 8);
  FUN_00518620(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4),&local_18,
               uVar1,local_c);
  return;
}

