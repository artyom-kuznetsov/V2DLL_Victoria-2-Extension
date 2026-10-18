// FUN_0087d200 @ 0087d200 body=[[0087d200, 0087d257]]


void FUN_0087d200(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  piVar1 = (int *)(iVar2 + 0x680);
  *piVar1 = *piVar1 + *(int *)(in_ECX + 0x20);
  if (*piVar1 < 0) {
    *(undefined4 *)(iVar2 + 0x680) = 0;
    return;
  }
  iVar3 = *(int *)(*(int *)(iVar2 + 0xa60) + 0x28);
  if (iVar3 < *(int *)(iVar2 + 0x680)) {
    *(int *)(iVar2 + 0x680) = iVar3;
  }
  return;
}

