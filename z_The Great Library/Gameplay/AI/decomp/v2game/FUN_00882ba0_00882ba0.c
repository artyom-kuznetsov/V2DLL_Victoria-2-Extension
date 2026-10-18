// FUN_00882ba0 @ 00882ba0  (requested 00882BA0, first bytes: 83 79 34 10 8D 41 20 72)


void FUN_00882ba0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x20);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar1 = (int *)*piVar1;
  }
  iVar2 = (**(code **)(*(int *)(DAT_012588e8 + 100) + 8))(piVar1);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x1c) = 0;
  }
  return;
}

