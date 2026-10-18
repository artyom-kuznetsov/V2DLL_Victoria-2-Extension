// FUN_0099efb0 @ 0099efb0 body=[[0099efb0, 0099efdc] [0099efe0, 0099efe6]]


void FUN_0099efb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e38528;
  if (((undefined4 *)in_ECX[2] != (undefined4 *)0x0) && (*(char *)((int)in_ECX + 0xd) != '\0')) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

