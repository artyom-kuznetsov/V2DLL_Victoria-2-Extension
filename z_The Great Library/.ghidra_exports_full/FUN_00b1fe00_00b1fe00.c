// FUN_00b1fe00 @ 00b1fe00 body=[[00b1fe00, 00b1fe41]]


undefined4 FUN_00b1fe00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  
  puVar2 = (undefined4 *)*unaff_EBX;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      *unaff_EBX = 0;
      return 1;
    }
    puVar1 = (undefined4 *)puVar2[8];
    iVar3 = (**(code **)(puVar2[3] + 0x50))(*puVar2);
    if (iVar3 == 0) break;
    (*DAT_013f3ab0)(puVar2);
    puVar2 = puVar1;
  }
  *unaff_EBX = puVar2;
  return 0;
}

