// FUN_009f8f70 @ 009f8f70 body=[[009f8f70, 009f8faf] [009f8fb3, 009f8fc2]]


void FUN_009f8f70(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  DAT_01258ac4 = DAT_01258ac4 + -1;
  *in_ECX = &PTR_FUN_00e3d250;
  FUN_009f8fd0();
  for (iVar1 = in_ECX[0x37]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd8)) {
    *(undefined4 *)(iVar1 + 0xe4) = 0;
  }
  if ((uint)in_ECX[7] < 0x10) {
    in_ECX[6] = 0;
    in_ECX[7] = 0xf;
    *(undefined1 *)(in_ECX + 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[2]);
}

