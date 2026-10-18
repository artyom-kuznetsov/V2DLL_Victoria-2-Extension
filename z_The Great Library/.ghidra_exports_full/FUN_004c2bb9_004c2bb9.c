// Catch_All@004c2bb9 @ 004c2bb9 body=[[004c2bb9, 004c2bde]]


void Catch_All_004c2bb9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x18); puVar2 != puVar1; puVar2 = puVar2 + 0x2c) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

