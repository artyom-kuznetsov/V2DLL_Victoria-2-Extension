// FUN_008d5dc0 @ 008d5dc0 body=[[008d5dc0, 008d5e54]]


void FUN_008d5dc0(int param_1,undefined1 *param_2,char param_3)

{
  int in_ECX;
  int local_14;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_14 = *(int *)(in_ECX + 0x20);
    }
    else {
      local_14 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  if ((param_3 == '\0') &&
     ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc) || (local_14 == *(int *)(param_1 + 0xc))))
     ) {
    if (local_14 != *(int *)(param_1 + 0xc)) {
      param_2 = &stack0xffffffe0;
    }
    FUN_0085bc30(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  }
  return;
}

