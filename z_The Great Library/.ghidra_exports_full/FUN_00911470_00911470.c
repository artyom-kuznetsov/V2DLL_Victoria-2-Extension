// FUN_00911470 @ 00911470 body=[[00911470, 009115a0]]


void FUN_00911470(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (param_2 < 0x382) {
    if (param_2 == 0x381) {
      puVar2 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 8) = *puVar2;
      *(undefined4 *)(in_ECX + 0xc) = puVar2[1];
      return;
    }
    if (param_2 == 0xd9) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      *(undefined4 *)(in_ECX + 0x24) = 0;
      return;
    }
    if (param_2 == 0x2a1) {
      FUN_009885d0();
      FUN_0043bb10();
      return;
    }
  }
  else {
    if (param_2 == 0x382) {
      puVar2 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x10) = *puVar2;
      *(undefined4 *)(in_ECX + 0x14) = puVar2[1];
      return;
    }
    if (param_2 == 0x47a) {
      FUN_009885d0();
      FUN_0043bb10();
      return;
    }
  }
  FUN_009a0f40();
  return;
}

