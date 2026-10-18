// FUN_00a6f340 @ 00a6f340 body=[[00a6f340, 00a6f464]]


int FUN_00a6f340(char *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  byte *in_ECX;
  int iVar4;
  int iVar5;
  undefined **local_18 [3];
  uint local_c;
  
  if (((byte *)param_1 != (byte *)0x0) && (in_ECX != (byte *)0x0)) {
    if ((in_EAX & 3) == 0) {
      iVar4 = 0;
      if (in_EAX != 0) {
        local_c = in_EAX + 3 >> 2;
        iVar5 = iVar4;
        do {
          bVar1 = (&DAT_00f07350)[in_ECX[2]];
          bVar2 = (&DAT_00f07350)[in_ECX[3]];
          bVar3 = (&DAT_00f07350)[in_ECX[1]];
          *param_1 = (&DAT_00f07350)[*in_ECX] * '\x04' | bVar3 >> 4 & 3;
          param_1[1] = bVar1 >> 2 & 0xf | bVar3 << 4;
          param_1[2] = bVar2 & 0x3f | bVar1 << 6;
          in_ECX = in_ECX + 4;
          param_1 = param_1 + 3;
          iVar4 = iVar5 + 3;
          if ((bVar2 == 0x40) && (iVar4 = iVar5 + 2, bVar1 == 0x40)) {
            iVar4 = iVar5 + 1;
          }
          local_c = local_c - 1;
          iVar5 = iVar4;
        } while (local_c != 0);
      }
      return iVar4;
    }
    param_1 = "Invalid source, size is not a multiple of 4";
    std::exception::exception((exception *)local_18,&param_1);
    local_18[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_18,&DAT_00e6fb74);
  }
  param_1 = "Invalid parameter";
  std::exception::exception((exception *)local_18,&param_1);
  local_18[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_18,&DAT_00e6fb74);
}

