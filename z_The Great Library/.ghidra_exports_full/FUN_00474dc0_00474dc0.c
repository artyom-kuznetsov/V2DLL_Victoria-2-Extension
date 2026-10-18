// FUN_00474dc0 @ 00474dc0 body=[[00474dc0, 00474ea7]]


void FUN_00474dc0(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  char *_Format;
  
  if (param_2 < 0x649) {
    if (param_2 != 0x648) {
      if (param_2 == 0x278) {
        FUN_009a1bb0(in_ECX + 8);
        return;
      }
      if (param_2 != 0x3f9) {
        if (param_2 != 0x492) {
          return;
        }
        FUN_009a1bb0(in_ECX + 9);
        return;
      }
      FUN_009a1bb0(in_ECX + 0x18);
      return;
    }
    iVar1 = in_ECX + 0x20;
    _Format = "%f";
  }
  else if (param_2 == 0x64a) {
    iVar1 = in_ECX + 0x24;
    _Format = "%i";
  }
  else {
    if (param_2 != 0x82e) {
      if (param_2 != 0x9f6) {
        return;
      }
      FUN_009a1ce0();
      FUN_004750f0(0);
      return;
    }
    iVar1 = in_ECX + 0x1c;
    _Format = "%f";
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),_Format,iVar1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

