// FUN_005eb570 @ 005eb570 body=[[005eb570, 005eb5db]]


void FUN_005eb570(char param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    *(undefined1 *)(*(int *)(in_ECX + 0xc) + 0x1544) = *(undefined1 *)(in_ECX + 0x11);
  }
  else {
    uVar1 = FUN_004cda30();
    *(undefined1 *)(in_ECX + 0x11) = uVar1;
    *(undefined1 *)(*(int *)(in_ECX + 0xc) + 0x1544) = *(undefined1 *)(in_ECX + 0x10);
  }
  return;
}

