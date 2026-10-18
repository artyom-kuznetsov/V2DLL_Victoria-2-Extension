// FUN_00882b60 @ 00882b60 body=[[00882b60, 00882b98]]


void FUN_00882b60(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 0x20);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar3 = (int *)*piVar3;
  }
  iVar2 = DAT_012588e8 + 100;
  iVar1 = (**(code **)(*(int *)(DAT_012588e8 + 100) + 8))(piVar3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    return;
  }
  FUN_0043c3f0(iVar2);
  return;
}

