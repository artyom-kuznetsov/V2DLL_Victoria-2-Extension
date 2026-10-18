// FUN_0052d150 @ 0052d150 body=[[0052d150, 0052d1d6]]


uint FUN_0052d150(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int in_ECX;
  int unaff_EDI;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if ((-1 < in_ECX) && (in_ECX < *(int *)(in_EAX + 0x68))) {
    in_EAX = *(uint *)(in_EAX + 0x60);
    for (; in_ECX != 0; in_ECX = in_ECX + -1) {
      in_EAX = *(uint *)(in_EAX + 0x224);
    }
    if ((((*(char *)(unaff_EDI + 0xad0) != '\0') && (iVar1 = *(int *)(in_EAX + 0x18), iVar1 != 0))
        && (*(int *)(in_EAX + 0x20) < *(int *)(iVar1 + 0xc4))) && (*(int *)(in_EAX + 0x17c) == 0)) {
      local_c = *(undefined4 *)(unaff_EDI + 0xe78);
      local_8 = *(undefined4 *)(unaff_EDI + 0xe7c);
      FUN_004da850(iVar1,local_14,unaff_EDI,0,unaff_EDI + 0x1184,*(int *)(in_EAX + 0x20) + 1);
      uVar2 = FUN_0043a5e0();
      return uVar2;
    }
  }
  return in_EAX & 0xffffff00;
}

