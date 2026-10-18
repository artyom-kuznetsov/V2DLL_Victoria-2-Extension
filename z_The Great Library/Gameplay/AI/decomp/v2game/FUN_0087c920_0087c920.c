// FUN_0087c920 @ 0087c920 body=[[0087c920, 0087c96a]]


void FUN_0087c920(int param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
  }
  else if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
  }
  pcVar2 = &stack0x00000008;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  return;
}

