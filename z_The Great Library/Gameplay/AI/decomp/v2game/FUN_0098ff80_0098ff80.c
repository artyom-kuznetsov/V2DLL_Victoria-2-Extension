// FUN_0098ff80 @ 0098ff80 body=[[0098ff80, 0098ffaf] [0098ffb3, 0098ffb9]]


void FUN_0098ff80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e37c30;
  if ((*(char *)((int)in_ECX + 0x111) != '\0') && ((undefined4 *)in_ECX[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

