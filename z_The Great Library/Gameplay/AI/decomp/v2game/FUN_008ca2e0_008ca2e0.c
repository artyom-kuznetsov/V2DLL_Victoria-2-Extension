// FUN_008ca2e0 @ 008ca2e0 body=[[008ca2e0, 008ca3ea]]


undefined4 FUN_008ca2e0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    if (*(char *)(in_ECX + 0x18) == '\0') {
      if (*(char *)(in_ECX + 0x19) == '\0') {
        if (*(char *)(in_ECX + 0x24) == '\0') {
          if (((*(char *)(in_ECX + 0x1c) == 'R') && (*(char *)(in_ECX + 0x1d) == 'E')) &&
             (*(char *)(in_ECX + 0x1e) == 'B')) {
            iVar3 = FUN_009c16d0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
            if (iVar3 == 0) {
              if (*(int *)(iVar1 + 0x134) == *(int *)(in_ECX + 0x20)) {
                return 1;
              }
            }
            else {
              cVar2 = FUN_004e5150();
              if (cVar2 != '\0') {
                return 1;
              }
            }
          }
          else if (*(int *)(iVar1 + 0x134) == *(int *)(in_ECX + 0x20)) {
            return 1;
          }
        }
        else if (*(int *)(iVar1 + 0x134) == *(int *)(iVar1 + 300)) {
          return 1;
        }
      }
      else if (*(int *)(iVar1 + 0x134) == *(int *)(param_1 + 0x30)) {
        return 1;
      }
    }
    else {
      iVar3 = FUN_008a8dc0();
      if (*(int *)(iVar1 + 0x134) == *(int *)(iVar3 + 4)) {
        return 1;
      }
    }
  }
  return 0;
}

