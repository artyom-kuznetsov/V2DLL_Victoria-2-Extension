// FUN_008829e0 @ 008829e0 body=[[008829e0, 00882a3c]]


void FUN_008829e0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 0x20);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar3 = (int *)*piVar3;
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = (**(code **)(*(int *)(iVar1 + 0x1b0) + 8))(piVar3);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    return;
  }
  FUN_0043c3f0(iVar1 + 0x1b0);
  return;
}

