// FUN_00631910 @ 00631910 body=[[00631910, 0063196f]]


void FUN_00631910(void)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  if (8 < (int)(in_ECX - (int)unaff_EDI & 0xfffffff8U)) {
    puVar1 = (undefined4 *)(in_ECX + -8);
    do {
      *puVar1 = *unaff_EDI;
      puVar1[1] = unaff_EDI[1];
      FUN_00631d40();
      puVar1 = puVar1 + -2;
    } while (8 < (int)((int)puVar1 + (8 - (int)unaff_EDI) & 0xfffffff8U));
  }
  return;
}

