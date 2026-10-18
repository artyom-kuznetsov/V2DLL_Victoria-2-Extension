// FUN_00522500 @ 00522500 body=[[00522500, 00522592]]


undefined1 FUN_00522500(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 0xc) * 4);
  if (*(int *)(in_EAX + 0xc) == 0) {
    return (char)param_1[1];
  }
  if (*(int *)(in_EDX + 0xc) == 0) {
    return (char)param_1[1] == '\0';
  }
  if (*(int *)(iVar1 + 0x20) == *(int *)(*param_1 + 4)) {
    return false;
  }
  if (*(int *)(iVar2 + 0x20) == *(int *)(*param_1 + 4)) {
    return true;
  }
  return *(int *)(iVar2 + 0x7dc) < *(int *)(iVar1 + 0x7dc);
}

