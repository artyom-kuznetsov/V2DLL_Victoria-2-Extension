// Catch_All@0048c712 @ 0048c712 body=[[0048c712, 0048c736]]


void Catch_All_0048c712(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x18); puVar2 != puVar1; puVar2 = puVar2 + 0x16) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

