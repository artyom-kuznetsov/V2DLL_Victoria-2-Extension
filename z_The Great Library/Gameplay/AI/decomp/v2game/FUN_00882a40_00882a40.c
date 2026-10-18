// FUN_00882a40 @ 00882a40  (requested 00882A40, first bytes: 55 8B EC 8D 51 20 83 EC)


void FUN_00882a40(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0x20);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    piVar2 = (int *)*piVar2;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                               0x1b0) + 8))(piVar2,*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

