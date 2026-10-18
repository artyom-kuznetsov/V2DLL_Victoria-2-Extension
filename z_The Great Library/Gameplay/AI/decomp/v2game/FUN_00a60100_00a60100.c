// FUN_00a60100 @ 00a60100 body=[[00a60100, 00a6013b] [00a6013f, 00a6016c] [00a60176, 00a6018e] [00a60198, 00a601a9] [00a601b0, 00a601b8] [00a601c2, 00a601da]]


void FUN_00a60100(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e426a8;
  if (DAT_01258b2e != '\0') {
    DAT_01258b2e = '\0';
  }
  if (in_ECX[0x1b] != 0) {
    FUN_0068fae0(in_ECX[0x1c]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1b]);
  }
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  FUN_0057afc0(in_ECX + 0x16);
  FUN_00aaea59(in_ECX[0x18]);
  if (in_ECX[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  if (in_ECX[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  if (in_ECX[9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  FUN_00768940(in_ECX + 1);
  return;
}

