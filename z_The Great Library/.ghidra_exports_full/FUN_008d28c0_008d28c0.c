// FUN_008d28c0 @ 008d28c0 body=[[008d28c0, 008d2978]]


bool FUN_008d28c0(int param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_18 = *(undefined4 *)(in_ECX + 0x1c);
      local_14 = *(undefined4 *)(in_ECX + 0x20);
    }
    else {
      local_18 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x2c);
      local_14 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_c = *(int *)(in_ECX + 0x20);
    }
    else {
      local_c = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  local_10 = *(undefined4 *)(param_1 + 8);
  cVar1 = FUN_0092ede0(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                 + 0xbe8) + local_c * 4),param_1 + 8,&local_18);
  return cVar1 != '\0';
}

