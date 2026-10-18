// FUN_00989a50 @ 00989a50 body=[[00989a50, 00989a9e]]


void FUN_00989a50(void)

{
  char cVar1;
  undefined1 *in_EAX;
  char *pcVar2;
  char *in_EDX;
  
  if (0xf < *(uint *)(in_EDX + 0x14)) {
    in_EDX = *(char **)in_EDX;
  }
  *(undefined4 *)(in_EAX + 0x14) = 0xf;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *in_EAX = 0;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  FUN_009897c0();
  return;
}

