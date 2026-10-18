// FUN_00aeb550 @ 00aeb550 body=[[00aeb550, 00aeb59d]]


void FUN_00aeb550(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[1];
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined4 **)(*in_ECX + uVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  return;
}

