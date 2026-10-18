// FUN_00882a90 @ 00882a90 body=[[00882a90, 00882afa]]


void FUN_00882a90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  piVar4 = (int *)(in_ECX + 0x20);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar4 = (int *)*piVar4;
  }
  iVar3 = (**(code **)(*(int *)(iVar1 + 0x328) + 8))(piVar4);
  iVar2 = DAT_012588dc;
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x1c) = 1;
    *(undefined1 *)(iVar2 + 0x3a28) = 1;
    return;
  }
  FUN_0043c3f0(iVar1 + 0x328);
  *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  return;
}

