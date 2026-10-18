// FUN_0088e940 @ 0088e940 body=[[0088e940, 0088e9b9]]


void FUN_0088e940(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  
  uVar3 = *(int *)(param_1 + 0x40) * 0x343fd + 0x269ec3;
  uVar4 = uVar3 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x40) = uVar4;
  if ((int)(((uVar4 >> 0x10 & 0x7fff) * (uVar3 >> 0x10 & 0x7fff)) % 100) <
      *(int *)(in_ECX + 0x20) / 1000) {
    puVar1 = *(undefined4 **)(in_ECX + 8);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 0x2c))(param_1,0);
    }
  }
  return;
}

