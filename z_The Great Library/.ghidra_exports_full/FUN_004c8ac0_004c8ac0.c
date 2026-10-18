// FUN_004c8ac0 @ 004c8ac0 body=[[004c8ac0, 004c8b36]]


void FUN_004c8ac0(char param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < (*(int *)(in_EAX + 0xcc) - *(int *)(in_EAX + 200)) / 0x24)) {
    piVar2 = (int *)(in_EAX + 0x94);
    iVar3 = *(int *)(in_EAX + 0x98) - *piVar2;
    if (iVar3 <= param_2) {
      FUN_009d7300();
      iVar1 = *piVar2;
      if (iVar3 < *(int *)(in_EAX + 0x98) - iVar1) {
        do {
          *(undefined1 *)(iVar1 + iVar3) = 1;
          iVar1 = *piVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(in_EAX + 0x98) - iVar1);
      }
    }
    *(bool *)(param_2 + *piVar2) = param_1 != '\0';
  }
  return;
}

