// FUN_00a6f220 @ 00a6f220 body=[[00a6f220, 00a6f33c]]


char * FUN_00a6f220(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  char *in_ECX;
  uint uVar3;
  uint uVar4;
  undefined **local_1c [3];
  char *local_10 [2];
  byte local_7;
  byte local_6;
  byte local_5;
  
  if ((in_ECX == (char *)0x0) || (param_1 == (byte *)0x0)) {
    local_10[0] = "Invalid parameter";
    std::exception::exception((exception *)local_1c,local_10);
    local_1c[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_1c,&DAT_00e6fb74);
  }
  local_10[0] = (char *)0x0;
  do {
    if (in_EAX == 0) {
      return local_10[0];
    }
    uVar4 = in_EAX;
    if (2 < in_EAX) {
      uVar4 = 3;
    }
    uVar3 = 0;
    bVar2 = 0;
    local_5 = 0;
    bVar1 = 0;
    local_6 = 0;
    local_7 = 0;
    if (uVar4 == 1) {
LAB_00a6f29f:
      uVar3 = (uint)local_6;
      local_5 = local_5 | (*param_1 & 3) << 4;
      bVar2 = *param_1 >> 2;
    }
    else {
      if (uVar4 == 2) {
LAB_00a6f288:
        local_6 = bVar1 | (param_1[1] & 0xf) * '\x04';
        local_5 = param_1[1] >> 4;
        goto LAB_00a6f29f;
      }
      if (uVar4 == 3) {
        local_7 = param_1[2] & 0x3f;
        bVar1 = param_1[2] >> 6;
        goto LAB_00a6f288;
      }
    }
    in_EAX = in_EAX - uVar4;
    param_1 = param_1 + uVar4;
    if (uVar4 == 1) {
      uVar3 = 0x40;
LAB_00a6f2c4:
      local_7 = 0x40;
    }
    else if (uVar4 == 2) goto LAB_00a6f2c4;
    *in_ECX = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="[bVar2];
    local_10[0] = local_10[0] + 4;
    in_ECX[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="[local_5];
    in_ECX[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="[uVar3];
    in_ECX[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="[local_7];
    in_ECX = in_ECX + 4;
  } while( true );
}

