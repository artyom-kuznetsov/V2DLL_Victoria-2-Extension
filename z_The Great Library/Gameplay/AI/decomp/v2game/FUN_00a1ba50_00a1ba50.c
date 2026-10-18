// FUN_00a1ba50 @ 00a1ba50 body=[[00a1ba50, 00a1badd]]


int FUN_00a1ba50(int *param_1)

{
  char *in_EAX;
  int iVar1;
  uint uVar2;
  uint local_c;
  byte local_5;
  
  iVar1 = FUN_00a1b9e0(&local_5,1,1);
  if (iVar1 == 1) {
    local_c = (uint)local_5;
LAB_00a1ba8c:
    iVar1 = 0;
  }
  else {
    if ((*in_EAX == '\0') || (in_EAX[8] == '\0')) goto LAB_00a1ba8c;
    iVar1 = -1;
  }
  if (iVar1 != 0) {
LAB_00a1bace:
    *param_1 = 0;
    return iVar1;
  }
  iVar1 = FUN_00a1b9e0(&local_5,1,1);
  if (iVar1 == 1) {
    uVar2 = (uint)local_5;
  }
  else {
    uVar2 = local_c;
    if ((*in_EAX != '\0') && (in_EAX[8] != '\0')) {
      iVar1 = -1;
      goto LAB_00a1bace;
    }
  }
  *param_1 = uVar2 * 0x100 + local_c;
  return 0;
}

