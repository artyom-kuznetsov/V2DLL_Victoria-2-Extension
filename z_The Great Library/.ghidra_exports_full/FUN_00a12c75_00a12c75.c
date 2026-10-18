// Catch_All@00a12c75 @ 00a12c75 body=[[00a12c75, 00a12c99]]


void Catch_All_00a12c75(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 0x14) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

