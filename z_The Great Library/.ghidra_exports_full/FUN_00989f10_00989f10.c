// FUN_00989f10 @ 00989f10 body=[[00989f10, 0098a0cd]]


void FUN_00989f10(uint param_1,int *param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  uint extraout_ECX;
  int *piVar3;
  uint extraout_EDX;
  uint uVar4;
  int *local_8;
  
  if (param_2 != (int *)0x0) {
    uVar4 = in_ECX[5];
    piVar2 = in_ECX;
    if (0xf < uVar4) {
      piVar2 = (int *)*in_ECX;
    }
    if (piVar2 <= param_2) {
      piVar2 = in_ECX;
      if (0xf < uVar4) {
        piVar2 = (int *)*in_ECX;
      }
      if (param_2 < (int *)(in_ECX[4] + (int)piVar2)) {
        piVar2 = in_ECX;
        if (0xf < uVar4) {
          piVar2 = (int *)*in_ECX;
        }
        FUN_00989c00(in_EAX,in_ECX,(int)param_2 - (int)piVar2,param_3);
        return;
      }
    }
  }
  uVar4 = in_ECX[4];
  uVar1 = param_1;
  if (uVar4 < param_1) {
    FUN_00aad3fa("invalid string position");
    uVar4 = extraout_ECX;
    uVar1 = extraout_EDX;
  }
  uVar1 = uVar4 - uVar1;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  if (uVar4 - in_EAX < -param_3 - 1) {
    if (param_3 < in_EAX) {
      piVar3 = in_ECX;
      piVar2 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        piVar3 = (int *)*in_ECX;
        piVar2 = (int *)*in_ECX;
      }
      FID_conflict__memcpy
                ((void *)((int)piVar3 + param_3 + param_1),(void *)((int)piVar2 + in_EAX + param_1),
                 uVar1 - in_EAX);
    }
    if ((param_3 != 0) || (in_EAX != 0)) {
      uVar4 = (in_ECX[4] - in_EAX) + param_3;
      if (uVar4 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("string too long");
      }
      if ((uint)in_ECX[5] < uVar4) {
        FUN_00409640(uVar4,in_ECX[4]);
        if (uVar4 == 0) {
          return;
        }
      }
      else if (uVar4 == 0) {
        in_ECX[4] = 0;
        if ((uint)in_ECX[5] < 0x10) {
          *(undefined1 *)in_ECX = 0;
          return;
        }
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      if (in_EAX < param_3) {
        piVar2 = in_ECX;
        local_8 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          local_8 = (int *)*in_ECX;
          piVar2 = (int *)*in_ECX;
        }
        FID_conflict__memcpy
                  ((void *)((int)local_8 + param_3 + param_1),
                   (void *)((int)piVar2 + in_EAX + param_1),uVar1 - in_EAX);
      }
      piVar2 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        piVar2 = (int *)*in_ECX;
      }
      FID_conflict__memcpy((void *)((int)piVar2 + param_1),param_2,param_3);
      in_ECX[4] = uVar4;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)(*in_ECX + uVar4) = 0;
        return;
      }
      *(undefined1 *)((int)in_ECX + uVar4) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aad3ad("string too long");
}

