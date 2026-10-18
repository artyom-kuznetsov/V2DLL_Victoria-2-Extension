// FUN_009f6650 @ 009f6650 body=[[009f6650, 009f667d] [009f6681, 009f669c]]


void FUN_009f6650(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_20;
  uint local_c;
  
  iVar1 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
  *(undefined2 *)(in_ECX + 0x38) = *(undefined2 *)(iVar1 + 0x10);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
  *(undefined4 *)(in_ECX + 0x34) = 0xffffffff;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

