// FUN_00a6b390 @ 00a6b390 body=[[00a6b390, 00a6b3d2]]


void FUN_00a6b390(int param_1)

{
  undefined1 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = FUN_009c12d0();
  unaff_ESI[3] = param_1 + 9;
  if ((undefined4 *)unaff_ESI[2] < (undefined4 *)0x2) {
    *unaff_ESI = 1;
  }
  else {
    *(undefined4 *)unaff_ESI[2] = 1;
  }
  unaff_ESI[2] = 1;
  if (unaff_ESI + 4 != (undefined4 *)0x0) {
    *(undefined1 *)(unaff_ESI + 4) = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

