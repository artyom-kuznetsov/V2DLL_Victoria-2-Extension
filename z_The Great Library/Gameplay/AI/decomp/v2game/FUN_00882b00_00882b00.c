// FUN_00882b00 @ 00882b00 body=[[00882b00, 00882b59]]


void FUN_00882b00(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  piVar2 = (int *)(in_ECX + 0x20);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar2 = (int *)*piVar2;
  }
  iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        *(int *)(param_1 + 0x10) * 4) + 0x328) + 8))(piVar2);
  iVar1 = DAT_012588dc;
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x1c) = 0;
    *(undefined1 *)(iVar1 + 0x3a28) = 1;
    return;
  }
  *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  return;
}

