// FUN_00821d10 @ 00821d10 body=[[00821d10, 00821d80]]


void FUN_00821d10(void)

{
  code *pcVar1;
  int *in_ECX;
  
  in_ECX[0x21] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  pcVar1 = *(code **)(*in_ECX + 0xf0);
  *(undefined1 *)(in_ECX + 0xf) = 1;
  (*pcVar1)();
  FUN_00859d30();
  FUN_00822300();
  if (0 < (int)(in_ECX[0x23] - in_ECX[0x22] & 0xfffffffcU)) {
    FUN_00824e80(in_ECX);
    FUN_00822100(in_ECX);
  }
  in_ECX[0xc] = 1;
  return;
}

