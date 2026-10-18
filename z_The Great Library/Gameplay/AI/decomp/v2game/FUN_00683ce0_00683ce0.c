// FUN_00683ce0 @ 00683ce0 body=[[00683ce0, 00683d15]]


void FUN_00683ce0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0125870c;
  for (uVar2 = *(uint *)(DAT_0125870c + 0x2a88);
      (*(uint *)(iVar1 + 0x2a88) <= uVar2 && (uVar2 < *(uint *)(iVar1 + 0x2a8c))); uVar2 = uVar2 + 4
      ) {
    FUN_004cbfb0();
  }
  return;
}

