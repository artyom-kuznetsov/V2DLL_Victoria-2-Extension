// FUN_0047c0e0 @ 0047c0e0 body=[[0047c0e0, 0047c3ba]]


void FUN_0047c0e0(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = ((int)(param_3 - param_2) / 0x98) * 0x4c + param_2;
  FUN_0047c4a0(local_8,param_3 - 0x4c,param_4);
  uVar3 = local_8 + 0x4c;
  for (; param_2 < local_8; local_8 = local_8 - 0x4c) {
    if ((*(float *)(local_8 + 0x3c) < *(float *)(local_8 - 0x10)) ||
       (*(float *)(local_8 - 0x10) < *(float *)(local_8 + 0x3c))) break;
  }
  uVar4 = uVar3;
  uVar2 = local_8;
  if (uVar3 < param_3) {
    if (3 < (int)((param_3 - uVar3) + 0x4b) / 0x4c) {
      fVar1 = *(float *)(local_8 + 0x3c);
      do {
        uVar4 = uVar3;
        if ((fVar1 < *(float *)(uVar3 + 0x3c)) || (*(float *)(uVar3 + 0x3c) < fVar1))
        goto joined_r0x0047c2aa;
        if ((fVar1 < *(float *)(uVar3 + 0x88)) || (*(float *)(uVar3 + 0x88) < fVar1)) {
          uVar3 = uVar3 + 0x4c;
          uVar4 = uVar3;
          goto joined_r0x0047c2aa;
        }
        if ((fVar1 < *(float *)(uVar3 + 0xd4)) || (*(float *)(uVar3 + 0xd4) < fVar1)) {
          uVar3 = uVar3 + 0x98;
          uVar4 = uVar3;
          goto joined_r0x0047c2aa;
        }
        if ((fVar1 < *(float *)(uVar3 + 0x120)) || (*(float *)(uVar3 + 0x120) < fVar1)) {
          uVar3 = uVar3 + 0xe4;
          uVar4 = uVar3;
          goto joined_r0x0047c2aa;
        }
        uVar3 = uVar3 + 0x130;
      } while ((int)uVar3 < (int)(param_3 - 0xe4));
    }
    uVar4 = uVar3;
    if (uVar3 < param_3) {
      do {
        uVar4 = uVar3;
        if ((*(float *)(local_8 + 0x3c) < *(float *)(uVar3 + 0x3c)) ||
           (*(float *)(uVar3 + 0x3c) < *(float *)(local_8 + 0x3c))) break;
        uVar3 = uVar3 + 0x4c;
        uVar4 = uVar3;
      } while (uVar3 < param_3);
    }
  }
joined_r0x0047c2aa:
  do {
    if (param_3 <= uVar3) {
joined_r0x0047c2f0:
      for (; param_2 < local_8; local_8 = local_8 - 0x4c) {
        if (*(float *)(local_8 - 0x10) <= *(float *)(uVar2 + 0x3c)) {
          if (*(float *)(local_8 - 0x10) < *(float *)(uVar2 + 0x3c)) break;
          uVar2 = uVar2 - 0x4c;
          FUN_0047cbd0();
        }
      }
      if (local_8 == param_2) {
        if (uVar3 == param_3) {
          param_1[1] = uVar4;
          *param_1 = uVar2;
          return;
        }
        if (uVar4 != uVar3) {
          FUN_0047cbd0();
        }
        uVar3 = uVar3 + 0x4c;
        FUN_0047cbd0();
        uVar4 = uVar4 + 0x4c;
        uVar2 = uVar2 + 0x4c;
      }
      else {
        local_8 = local_8 - 0x4c;
        if (uVar3 == param_3) {
          if (local_8 != uVar2 - 0x4c) {
            FUN_0047cbd0();
          }
          FUN_0047cbd0();
          uVar4 = uVar4 - 0x4c;
          uVar2 = uVar2 - 0x4c;
        }
        else {
          FUN_0047cbd0();
          uVar3 = uVar3 + 0x4c;
        }
      }
      goto joined_r0x0047c2aa;
    }
    if (*(float *)(uVar2 + 0x3c) <= *(float *)(uVar3 + 0x3c)) {
      if (*(float *)(uVar2 + 0x3c) < *(float *)(uVar3 + 0x3c)) goto joined_r0x0047c2f0;
      uVar4 = uVar4 + 0x4c;
      FUN_0047cbd0();
    }
    uVar3 = uVar3 + 0x4c;
  } while( true );
}

