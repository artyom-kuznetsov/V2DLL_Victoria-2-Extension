// FUN_00825fd0 @ 00825fd0 body=[[00825fd0, 0082600b]]


void FUN_00825fd0(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[0x11];
  *(undefined1 *)(in_ECX + 0xf) = 0;
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    if ((char)piVar1[0xf] == '\0') {
      (**(code **)(*in_ECX + 0x120))(piVar1);
    }
    else {
      (**(code **)(*piVar1 + 0xd4))();
    }
    piVar1 = (int *)in_ECX[0x11];
  }
  return;
}

