// FUN_00610bd0 @ 00610bd0 body=[[00610bd0, 00610c36]]


void FUN_00610bd0(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = in_ECX - (int)unaff_EDI;
  if (8 < (int)(uVar1 & 0xfffffff8)) {
    puVar2 = (undefined4 *)(in_ECX + -8);
    do {
      local_10 = *puVar2;
      local_c = puVar2[1];
      *puVar2 = *unaff_EDI;
      puVar2[1] = unaff_EDI[1];
      FUN_00612410((int)(uVar1 - 8) >> 3,&local_10,param_1);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (8 - (int)unaff_EDI);
    } while (8 < (int)(uVar1 & 0xfffffff8));
  }
  return;
}

