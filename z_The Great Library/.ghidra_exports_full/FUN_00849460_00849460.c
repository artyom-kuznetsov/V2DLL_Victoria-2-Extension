// FUN_00849460 @ 00849460 body=[[00849460, 008494c3]]


void FUN_00849460(void)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  if (8 < (int)(in_ECX - (int)unaff_EDI & 0xfffffff8U)) {
    puVar1 = (undefined4 *)(in_ECX + -8);
    do {
      *puVar1 = *unaff_EDI;
      puVar1[1] = unaff_EDI[1];
      FUN_00849970();
      puVar1 = puVar1 + -2;
    } while (8 < (int)((int)puVar1 + (8 - (int)unaff_EDI) & 0xfffffff8U));
  }
  return;
}

