// FUN_004c0d80 @ 004c0d80 body=[[004c0d80, 004c0de5]]


void FUN_004c0d80(undefined4 param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  
  if (8 < (int)(in_ECX - (int)unaff_EDI & 0xfffffff8U)) {
    puVar1 = (undefined4 *)(in_ECX + -8);
    do {
      local_10 = *puVar1;
      local_c = puVar1[1];
      *puVar1 = *unaff_EDI;
      puVar1[1] = unaff_EDI[1];
      FUN_004c0ed0(0,&local_10,param_1);
      puVar1 = puVar1 + -2;
    } while (8 < (int)((int)puVar1 + (8 - (int)unaff_EDI) & 0xfffffff8U));
  }
  return;
}

