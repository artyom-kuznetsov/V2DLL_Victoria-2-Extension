// FUN_004b6120 @ 004b6120 body=[[004b6120, 004b617d]]


void FUN_004b6120(int param_1,char param_2)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  if (*(char *)(in_EAX + 0x131) != '\0') {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x118) + *(int *)(in_EAX + 0x134) * 4);
    *(int *)(iVar1 + 0x20) = param_1;
    iVar2 = *(int *)(*(int *)(iVar1 + 0x18) + 0xc4) * 1000;
    if (iVar2 < param_1) {
      *(int *)(iVar1 + 0x20) = iVar2;
    }
    if (*(int *)(iVar1 + 0x20) < 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
  }
  if (param_2 != '\0') {
    FUN_004b2610();
  }
  return;
}

