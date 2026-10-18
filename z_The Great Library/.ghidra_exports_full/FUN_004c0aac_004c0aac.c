// Catch_All@004c0aac @ 004c0aac body=[[004c0aac, 004c0ad2]]


void Catch_All_004c0aac(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 0x88) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

