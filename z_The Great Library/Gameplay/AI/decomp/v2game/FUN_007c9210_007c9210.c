// FUN_007c9210 @ 007c9210 body=[[007c9210, 007c925c] [007c9260, 007c94ee]]


void FUN_007c9210(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = param_2 + ((int)(param_3 - param_2) / 0x88) * 0x44;
  FUN_007cc640(local_8,param_3 - 0x44,param_4);
  uVar4 = local_8 + 0x44;
  for (; param_2 < local_8; local_8 = local_8 - 0x44) {
    if ((*(float *)(local_8 + 4) < *(float *)(local_8 - 0x40)) ||
       (*(float *)(local_8 - 0x40) < *(float *)(local_8 + 4))) break;
  }
  uVar2 = uVar4;
  uVar3 = local_8;
  if (uVar4 < param_3) {
    if (3 < (int)((param_3 - uVar4) + 0x43) / 0x44) {
      fVar1 = *(float *)(local_8 + 4);
      do {
        uVar2 = uVar4;
        if ((fVar1 < *(float *)(uVar4 + 4)) || (*(float *)(uVar4 + 4) < fVar1))
        goto joined_r0x007c93db;
        if ((fVar1 < *(float *)(uVar4 + 0x48)) || (*(float *)(uVar4 + 0x48) < fVar1)) {
          uVar4 = uVar4 + 0x44;
          uVar2 = uVar4;
          goto joined_r0x007c93db;
        }
        if ((fVar1 < *(float *)(uVar4 + 0x8c)) || (*(float *)(uVar4 + 0x8c) < fVar1)) {
          uVar4 = uVar4 + 0x88;
          uVar2 = uVar4;
          goto joined_r0x007c93db;
        }
        if ((fVar1 < *(float *)(uVar4 + 0xd0)) || (*(float *)(uVar4 + 0xd0) < fVar1)) {
          uVar4 = uVar4 + 0xcc;
          uVar2 = uVar4;
          goto joined_r0x007c93db;
        }
        uVar4 = uVar4 + 0x110;
      } while ((int)uVar4 < (int)(param_3 - 0xcc));
    }
    uVar2 = uVar4;
    if (uVar4 < param_3) {
      do {
        uVar2 = uVar4;
        if ((*(float *)(local_8 + 4) < *(float *)(uVar4 + 4)) ||
           (*(float *)(uVar4 + 4) < *(float *)(local_8 + 4))) break;
        uVar4 = uVar4 + 0x44;
        uVar2 = uVar4;
      } while (uVar4 < param_3);
    }
  }
joined_r0x007c93db:
  do {
    if (param_3 <= uVar2) {
joined_r0x007c9420:
      for (; param_2 < local_8; local_8 = local_8 - 0x44) {
        if (*(float *)(local_8 - 0x40) <= *(float *)(uVar3 + 4)) {
          if (*(float *)(local_8 - 0x40) < *(float *)(uVar3 + 4)) break;
          uVar3 = uVar3 - 0x44;
          FUN_007d03f0(local_8 - 0x44);
        }
      }
      if (local_8 == param_2) {
        if (uVar2 == param_3) {
          param_1[1] = uVar4;
          *param_1 = uVar3;
          return;
        }
        if (uVar4 != uVar2) {
          FUN_007d03f0(uVar4);
        }
        uVar4 = uVar4 + 0x44;
        FUN_007d03f0(uVar2);
        uVar2 = uVar2 + 0x44;
        uVar3 = uVar3 + 0x44;
      }
      else {
        local_8 = local_8 - 0x44;
        if (uVar2 == param_3) {
          uVar3 = uVar3 - 0x44;
          if (local_8 != uVar3) {
            FUN_007d03f0(uVar3);
          }
          uVar4 = uVar4 - 0x44;
          FUN_007d03f0(uVar4);
        }
        else {
          FUN_007d03f0(local_8);
          uVar2 = uVar2 + 0x44;
        }
      }
      goto joined_r0x007c93db;
    }
    if (*(float *)(uVar3 + 4) <= *(float *)(uVar2 + 4)) {
      if (*(float *)(uVar3 + 4) < *(float *)(uVar2 + 4)) goto joined_r0x007c9420;
      uVar4 = uVar4 + 0x44;
      FUN_007d03f0(uVar2);
    }
    uVar2 = uVar2 + 0x44;
  } while( true );
}

