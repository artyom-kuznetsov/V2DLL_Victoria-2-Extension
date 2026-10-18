// FUN_009ad570 @ 009ad570 body=[[009ad570, 009ad57e] [009ad582, 009ad5a0]]


void FUN_009ad570(void)

{
  void *unaff_ESI;
  
  if (0xf < *(uint *)((int)unaff_ESI + 0x34)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)((int)unaff_ESI + 0x20));
  }
  *(undefined4 *)((int)unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)((int)unaff_ESI + 0x30) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x20) = 0;
  _eh_vector_destructor_iterator_(unaff_ESI,0x10,2,FUN_0040b3c0);
  return;
}

