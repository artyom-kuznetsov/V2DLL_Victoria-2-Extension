// FUN_009d5580 @ 009d5580 body=[[009d5580, 009d55a1] [009d55a5, 009d55c1] [009d55c5, 009d55d8]]


void FUN_009d5580(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3b4f8;
  if (*(char *)(in_ECX + 0xe) != '\0') {
    iVar1 = in_ECX[0xc];
    if (iVar1 != 0) {
      FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[0xc] = 0;
  }
  *in_ECX = &PTR_FUN_00e3b540;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

