// FUN_00b13560 @ 00b13560 body=[[00b13560, 00b1357a] [00b1357e, 00b1360b]]


void FUN_00b13560(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_00b1dee0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  iVar1 = in_ECX[1];
  in_ECX[2] = 0;
  if (iVar1 != 0) {
    FUN_00b162a0();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  iVar1 = *in_ECX;
  in_ECX[1] = 0;
  if (iVar1 != 0) {
    FUN_00b18be0();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  iVar1 = in_ECX[3];
  *in_ECX = 0;
  if (iVar1 != 0) {
    FUN_00b164a0();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  iVar1 = in_ECX[4];
  in_ECX[3] = 0;
  if (iVar1 != 0) {
    FUN_00b15780();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  in_ECX[4] = 0;
  if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[5])(1);
  }
  in_ECX[5] = 0;
  FUN_00b1eea0();
  FUN_00b1edb0();
  return;
}

