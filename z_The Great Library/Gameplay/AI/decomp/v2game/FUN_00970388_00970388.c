// Catch_All@00970388 @ 00970388 body=[[00970388, 009703aa]]


void Catch_All_00970388(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x18); puVar2 != puVar1; puVar2 = puVar2 + 0xc) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

