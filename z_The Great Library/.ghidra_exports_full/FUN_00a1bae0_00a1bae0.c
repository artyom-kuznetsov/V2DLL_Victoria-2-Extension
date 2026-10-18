// FUN_00a1bae0 @ 00a1bae0 body=[[00a1bae0, 00a1bbd9]]


int FUN_00a1bae0(int *param_1)

{
  char *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  byte local_5;
  
  iVar1 = FUN_00a1b9e0(&local_5,1,1);
  if (iVar1 == 1) {
    local_c = (uint)local_5;
LAB_00a1bb1c:
    iVar1 = 0;
  }
  else {
    if ((*in_EAX == '\0') || (in_EAX[8] == '\0')) goto LAB_00a1bb1c;
    iVar1 = -1;
  }
  uVar4 = local_c;
  if (iVar1 == 0) {
    iVar1 = FUN_00a1b9e0(&local_5,1,1);
    if (iVar1 == 1) {
      uVar4 = (uint)local_5;
    }
    else if ((*in_EAX != '\0') && (in_EAX[8] != '\0')) {
      iVar1 = -1;
      goto LAB_00a1bb3f;
    }
    iVar1 = 0;
  }
LAB_00a1bb3f:
  iVar3 = uVar4 * 0x100;
  if (iVar1 == 0) {
    iVar1 = FUN_00a1b9e0(&local_5,1,1);
    if (iVar1 == 1) {
      uVar4 = (uint)local_5;
    }
    else if ((*in_EAX != '\0') && (in_EAX[8] != '\0')) {
      iVar1 = -1;
      goto LAB_00a1bb65;
    }
    iVar1 = 0;
  }
LAB_00a1bb65:
  iVar2 = uVar4 * 0x10000;
  if (iVar1 != 0) {
LAB_00a1bbca:
    *param_1 = 0;
    return iVar1;
  }
  iVar1 = FUN_00a1b9e0(&local_5,1,1);
  if (iVar1 == 1) {
    uVar4 = (uint)local_5;
  }
  else if ((*in_EAX != '\0') && (in_EAX[8] != '\0')) {
    iVar1 = -1;
    goto LAB_00a1bbca;
  }
  *param_1 = uVar4 * 0x1000000 + local_c + iVar3 + iVar2;
  return 0;
}

