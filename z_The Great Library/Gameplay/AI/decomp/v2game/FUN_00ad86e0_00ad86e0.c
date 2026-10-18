// FUN_00ad86e0 @ 00ad86e0 body=[[00ad86e0, 00ad86ec] [00ad86f0, 00ad8716]]


void FUN_00ad86e0(void)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    do {
      (*(code *)**(undefined4 **)(*in_ECX + uVar1 * 8))(0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

