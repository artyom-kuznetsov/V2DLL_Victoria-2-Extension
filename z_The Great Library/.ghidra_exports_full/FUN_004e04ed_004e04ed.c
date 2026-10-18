// Catch_All@004e04ed @ 004e04ed body=[[004e04ed, 004e0513]]


void Catch_All_004e04ed(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 0x58) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

