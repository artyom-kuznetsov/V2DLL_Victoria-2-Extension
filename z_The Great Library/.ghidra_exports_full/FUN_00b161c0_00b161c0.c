// FUN_00b161c0 @ 00b161c0 body=[[00b161c0, 00b16226]]


void FUN_00b161c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = in_ECX[1];
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      puVar1 = *(undefined4 **)(*in_ECX + uVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  iVar4 = in_ECX[1];
  uVar2 = 0;
  if (iVar4 != 0) {
    piVar3 = (int *)*in_ECX;
    do {
      uVar2 = uVar2 | *(uint *)(*piVar3 + 4);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  in_ECX[4] = uVar2;
  return;
}

