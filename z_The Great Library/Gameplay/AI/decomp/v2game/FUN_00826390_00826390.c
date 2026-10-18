// FUN_00826390 @ 00826390 body=[[00826390, 008263b4]]


void FUN_00826390(void)

{
  code *pcVar1;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xc0);
  *(undefined1 *)((int)in_ECX + 0x3e) = 1;
  (*pcVar1)();
  if ((int *)in_ECX[0x10] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x10] + 0x128))();
  }
  return;
}

