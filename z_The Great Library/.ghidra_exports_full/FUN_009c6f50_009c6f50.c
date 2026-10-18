// FUN_009c6f50 @ 009c6f50 body=[[009c6f50, 009c7082] [009c7086, 009c7096]]


void FUN_009c6f50(int param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x13e) {
    if (param_2 != 0x13d) {
      if (param_2 == 0x19) {
        ExceptionList = &local_10;
        FUN_009a1750(in_ECX + 0x24,0);
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 0x13c) {
        ExceptionList = &local_10;
        FUN_009a1c10();
        ExceptionList = local_10;
        return;
      }
LAB_009c700e:
      ExceptionList = &local_10;
      FUN_009a0f40();
      ExceptionList = local_10;
      return;
    }
    iVar2 = in_ECX + 0x48;
  }
  else {
    if (param_2 == 0x13e) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750(local_2c,0);
      cVar1 = FUN_0040b360();
      *(uint *)(in_ECX + 0x4c) = (uint)(cVar1 == '\0');
      if (local_18 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    if (param_2 != 0x146) goto LAB_009c700e;
    iVar2 = in_ECX + 0x50;
  }
  ExceptionList = &local_10;
  iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar2);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return;
  }
  FUN_009a1140();
  ExceptionList = local_10;
  return;
}

